CXX=g++
CXXFLAGS=-Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -fmax-errors=2 -std=c++17
DBGFLAGS=-DDEBUG -ggdb3

.PHONY: compile debug clean

compile:
	$(CXX) $(CXXFLAGS) -o $(program).exe $(program).cpp
	./$(program).exe

debug:
	$(CXX) $(CXXFLAGS) $(DBGFLAGS) -o $(program).exe $(program).cpp
	gdb $(program).exe

clean:
	rm -f $(program).exe

