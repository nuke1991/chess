#include "King.h"

using namespace std;

King::King()
:Piece()
{
}

King::King(shared_ptr<Board> board, Colour colour)
:Piece(board, colour, Type::king)
{
}

void King::move(Square square)
{

}
