all:
	g++ -lgtest -lgtest_main source/Board.test.cc source/Board.cc source/Piece.cc source/King.cc -std=c++14 -o Board.test
	g++ -lgtest -lgtest_main source/Piece.test.cc source/Piece.cc -std=c++14 -o Piece.test
	g++ -lgtest -lgtest_main source/King.test.cc source/King.cc source/Piece.cc  -std=c++14 -o King.test
	g++ -lgtest -lgtest_main source/Chess.test.cc source/Chess.cc source/Board.cc source/Piece.cc source/King.cc -std=c++14 -o Chess.test
	g++  source/Main.cc -std=c++14 -o Chess 

