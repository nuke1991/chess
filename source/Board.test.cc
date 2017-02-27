#include "Board.h"
#include "King.h"
#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>

class boardTestSuite: public ::testing::Test
{
   public:
      Board m_board;
};

TEST_F (boardTestSuite, IsCreate)
{
}

TEST_F (boardTestSuite, PlacePieceOnBoard)
{
   std::shared_ptr<King> king;
   m_board.PlacePieceOnBoard(Square::a8, std::move(king));
}

TEST_F (boardTestSuite, GetPieceOfSquare)
{
   std::shared_ptr<King> king = std::make_shared<King>();
   m_board.PlacePieceOnBoard(Square::a8, king);
   std::shared_ptr<King> castedKing;
   ASSERT_EQ(m_board.GetPieceFromSquare(Square::a8)->getType(), Type::king);
}
