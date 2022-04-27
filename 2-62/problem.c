
#include "problem.h"

#include <stdbool.h>
#include <stdio.h>

/*Write a function int_shifts_are_arithmetic() that yields 1 when run on a
machine that uses arithmetic right shifts for int’s, and 0 otherwise. Your code
should work on a machine with any word size.*/

int int_shifts_are_arithmetic() {
  // Invert bits from 0 -> 1's
  int bitInvertedVal = ~0;
  return bitInvertedVal >> 1 == bitInvertedVal ? 1 : 0;
}