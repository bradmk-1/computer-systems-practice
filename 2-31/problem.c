
#include "problem.h"

#include <stdbool.h>
#include <stdio.h>

int tadd_ok(int x, int y) {
  int total = x + y;
  int negative_overflow = x < 0 && y < 0 && total >= 0;
  int positive_overflow = x >= 0 && y >= 0 && total < 0;

  if (!negative_overflow && !positive_overflow) {
    return true;
  } else {
    return false;
  }
}