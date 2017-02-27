#include "King.h"
#include "Board.h"

#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>

using namespace std;

TEST(King, IsCreate)
{
  unique_ptr<King> king(new King);
}

TEST(King, IsCreateKingWithBoard)
{
  shared_ptr<Board> board;
  unique_ptr<King> king(new King(board, Colour::white));
}

TEST(King, MoveToSquare)
{
  shared_ptr<Board> board;
  unique_ptr<King> king(new King(board, Colour::white));
  Square square = Square::a4; 
  king->move(square);
//  EXPECT_TRUE(board.GetPieceFromPosition(square) == king);
}

