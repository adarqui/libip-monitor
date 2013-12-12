all:
	gcc -I ../libip/include monitor.c -o monitor ../libip/libip.so.0

clean:
	rm -f monitor

run:
	LD_LIBRARY_PATH=../libip ./monitor
