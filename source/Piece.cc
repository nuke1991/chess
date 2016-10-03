#include "Piece.h"

using namespace std;
Piece::Piece()
:board_m(nullptr)
{
}

Piece::Piece(shared_ptr<Board> board)
:board_m(board)
{
}
Piece::~Piece()
{
}
void Piece::move()
{
}
