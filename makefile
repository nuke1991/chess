all:
	g++ -lgtest -lgtest_main source/Board.test.cc source/Board.cc -std=c++11 -o Board.test
	g++ -lgtest -lgtest_main source/Piece.test.cc source/Piece.cc -std=c++11 -o Piece.test
	g++  source/Main.cc -std=c++11 -o Chess 
