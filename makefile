all:
	g++ -lgtest -lgtest_main source/Board.test.cc source/Board.cc -std=c++11 -o Board
	g++  source/Main.cc -std=c++11 -o Chess 
