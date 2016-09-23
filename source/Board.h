#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <vector>

class Board
{
   public:
   Board();
   ~Board();
   int mailbox[120];
   int mailbox64[64];
};

#endif
