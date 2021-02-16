SRC=	Cola.cpp\
		Elemento.cpp\
		main.cpp

OBJ=	Cola.o\
		Elemento.o\
		main.o

all:
	g++ -c $(SRC)
	g++ $(OBJ) -o main 
