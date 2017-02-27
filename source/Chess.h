#ifndef CHESS_H
#define CHESS_H


#include <iostream>
#include <memory>

class Board;

class Chess
{
   public:
      Chess();
      void PrepareStartingBoard();
   protected:
      std::shared_ptr<Board> m_board;
};

#endif
