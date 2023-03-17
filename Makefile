tictactoe.exe: GameBoard.o main.o
	g++ -g GameBoard.o main.o -o tictactoe.exe

GameBoard.o: GameBoard.hpp GameBoard.cpp
	g++ -c -g -Wall -std=c++23 GameBoard.cpp

main.o: functions.hpp functions.cpp main.cpp
	g++ -c -g -Wall -std=c++23 functions.cpp main.cpp

clean:
	-rm *.o

run:
	@./tictactoe.exe