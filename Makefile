exec = main.sus
files = src/*.c
flags = -g

all:
	gcc $(files) $(flags) -o $(exec)

clean:
	-rm *.sus