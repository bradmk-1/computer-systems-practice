
#include "problem.h"

#include <stdbool.h>
#include <stdio.h>

int is_little_endian() {
  // Returns 1 on little endian, 0 on big
  int x = 1;
  int result = (((char *)&x)[0]);
  printf("%d", result);
  return result;
}