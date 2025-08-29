main: main.c status.h
	gcc --std c2x main.c -o main

clean:
	rm main
