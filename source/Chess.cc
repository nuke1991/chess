#include "Chess.h"
#include "Board.h"
#include "King.h"

using namespace std;

Chess::Chess()
:m_board(make_shared<Board>())
{
}

void Chess::PrepareStartingBoard()
{
  m_board->PlacePieceOnBoard(Square::e1, make_shared<King>(m_board,Colour::white));
  m_board->PlacePieceOnBoard(Square::e8, make_shared<King>(m_board,Colour::black));
}

