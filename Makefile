CC = g++
EXEC = Baduk
FLAGS = -std=c++17 -Wall -Werror -pedantic
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
S = src
O = obj
B = bin

all: $(O) $(B) $(O)/Main.o
	$(CC) $(O)/*.o -o $(B)/$(EXEC) $(LIBS)

$(O)/Main.o: $(O)/Game.o 
	$(CC) $(S)/Main.cpp -c -o $(O)/Main.o $(FLAGS)

$(O)/Game.o:
	$(CC) $(S)/Game.cpp -c -o $(O)/Game.o $(FLAGS)

$(O)/Group.o:
	$(CC) $(S)/Group.cpp -c -o $(O)/Group.o $(FLAGS)

clean: $(O) $(B)
	rm -r $(O)
	rm -r $(B)

$(O):
	mkdir $(O)

$(B):
	mkdir $(B)
