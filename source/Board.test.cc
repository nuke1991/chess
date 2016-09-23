#include "Board.h"
#include <gtest/gtest.h>
#include <cstdlib>
#include <memory>
TEST (board, IsCreate){
  std::unique_ptr<Board> board(new Board);
}
