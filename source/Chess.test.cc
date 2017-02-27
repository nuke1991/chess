#include "Chess.h"
#include "Board.h"
#include "King.h"
#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>

using namespace std;

class ChessTestable: public Chess
{
   public:
      shared_ptr<Board> getBoard()
      {
         return m_board;
      }
};

class chessTestSuite: public ::testing::Test
{
   public:
      ChessTestable m_chess;
};

TEST_F (chessTestSuite, IsCreate)
{
}
TEST_F (chessTestSuite, IsChessBoardReadyToPlayReadyBoard)
{
   m_chess.PrepareStartingBoard();
   auto l_board = m_chess.getBoard();
   //type check
   ASSERT_EQ(l_board->GetPieceFromSquare(Square::e1)->getType(), Type::king);
   ASSERT_EQ(l_board->GetPieceFromSquare(Square::e8)->getType(), Type::king);
   //colour check
   ASSERT_EQ(l_board->GetPieceFromSquare(Square::e1)->getColour(), Colour::white);
   ASSERT_EQ(l_board->GetPieceFromSquare(Square::e8)->getColour(), Colour::black);
}
