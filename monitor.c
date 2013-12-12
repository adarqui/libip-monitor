#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <time.h>

#include "libip.h"

int monitor_handler(obj_t *m)
{
	puts("recv msg");

	return 0;
}


int main(int argc, char **argv) {
	monitor_cmd_t mon;

	monitor_init(&mon);
	monitor_setopt(&mon,IP_MONITOR_OPT_ALL);
	monitor_events(&mon, monitor_handler);

	return 0;
}
