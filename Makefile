# Ultimate Makefile made by
# Your's Obidently
# Kesavan M
output: main.o passOneAssembler.o symbolTable.o utilityfunctions.o
	gcc -o output main.o passOneAssembler.o symbolTable.o utilityfunctions.o

main.o: main.c\
	classes.h functions.h includes.h
	gcc -c main.c

passOneAssembler.o: passOneAssembler.c\
	classes.h functions.h includes.h
	gcc -c passOneAssembler.c

symbolTable.o: symbolTable.c\
	classes.h functions.h includes.h
	gcc -c symbolTable.c

utilityfunctions.o: utilityfunctions.c\
	classes.h functions.h includes.h
	gcc -c utilityfunctions.c

clean:
	rm passOneAssembler.o
	rm symbolTable.o
	rm utilityfunctions.o
	rm main.o
	rm output

run:
	./output
