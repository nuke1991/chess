#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <vector>
#include <memory>
#include <utility>
#include <map>

class Piece;

enum Square
{
a8, b8, c8, d8, e8, f8, g8, h8,
a7, b7, c7, d7, e7, f7, g7, h7,
a6, b6, c6, d6, e6, f6, g6, h6,
a5, b5, c5, d5, e5, f5, g5, h5,
a4, b4, c4, d4, e4, f4, g4, h4,
a3, b3, c3, d3, e3, f3, g3, h3,
a2, b2, c2, d2, e2, f2, g2, h2,
a1, b1, c1, d1, e1, f1, g1, h1
};

class Board
{
   public:
      Board();
      ~Board();
      void PlacePieceOnBoard(Square square, std::shared_ptr<Piece> piece);
      std::shared_ptr<Piece> GetPieceFromSquare(Square square);

   private:
      int mailbox[120];
      int mailbox64[64];
      std::map<Square, std::shared_ptr<Piece>> m_piecesOnBoard;
};

#endif
