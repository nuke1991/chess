#ifndef PIECE_H
#define PIECE_H

#include <memory>

class Board;
class Piece 
{
   public:
   Piece();
   Piece(std::shared_ptr<Board> board);
   ~Piece();
   virtual void move();

   std::shared_ptr<Board> board_m;
};

#endif
