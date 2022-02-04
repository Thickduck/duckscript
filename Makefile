exec = main.sus
files = src/*.c
flags = -g

all:
	gcc -Wall $(files) $(flags) -o $(exec)

clean:
	-rm *.sus