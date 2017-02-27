#ifndef KING_H
#define KING_H

#include "Piece.h"
#include <memory>

class King : public Piece 
{
   public:
   King();
   King(std::shared_ptr<Board> board, Colour colour);
   ~King(){};
   virtual void move(Square square) override;
};

#endif
