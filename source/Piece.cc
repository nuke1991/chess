#include "Piece.h"

using namespace std;

Piece::Piece()
:board_m(nullptr),
 colour_m(),
 type_m()
{
}

Piece::Piece(shared_ptr<Board> board, Colour colour, Type type)
:board_m(board),
 colour_m(colour),
 type_m(type)
{
}

Colour Piece::getColour()
{
   return colour_m; 
}
Type Piece::getType()
{
   return type_m;
}

