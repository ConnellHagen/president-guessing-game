CXXFLAGS = -Wall

game: main.o question-game.cpp
	$(CXX) $(CXXFLAGS) $? $(LDFLAGS) -o $@.exe

main.o: main.cpp question-game.hpp
	$(CC) -c main.cpp

question-game.o: question-game.cpp question-game.hpp
	$(CC) -c question-game.cpp

clean:
	-rm -f *.o core *.core *.out *.exe

all: run

run: game
	./game.exe

.PHONY: all run
