main: main.c status.h foobar.h
	gcc --std c2x main.c -o main
size: sizeinfo.c sizeinfo.h
	gcc --std c2x sizeinfo.c -o sizeinfo
clean:
	rm main
