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

details:
	@echo " +------------------------------------------------------------------+"
	@echo " |\033[32mThis is Pass 1 assembler written for SIC Architecture             \033[0m|"
	@echo " |------------------------------------------------------------------|"
	@echo " |This program parses the input SIC program and if it identifies    |"
	@echo " |Symbol, made an entry to the symbol table, if identifies error    |"
	@echo " |Writes that error along with error number line in ERROR_TEXT file |"
	@echo " |The program requires to know opcode informations so an opcode file|"
	@echo " |is provided along with it.                                        |"
	@echo " +------------------------------------------------------------------+"
