#ifndef PIECE_H
#define PIECE_H

#include "Board.h"
#include <memory>

enum Colour
{
   white, black
};

enum Type
{
   king, queen, rook, bishop, knight, pawn  
};

class Board;
class Piece 
{
   public:
      Piece();
      Piece(std::shared_ptr<Board> board, Colour colour, Type type);
      Colour getColour();
      Type getType();
      virtual ~Piece(){};
      virtual void move(Square square){};
      
   private:
      std::shared_ptr<Board> board_m;
      Colour colour_m;
      Type type_m;
};

#endif
