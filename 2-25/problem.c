#include "problem.h"

#include <stdio.h>

float sum_elements(float a[], unsigned length) {
  int i;
  float result = 0;

  if (length == 0) {
    return printf("%.2f", 0.00);
  } else {
    for (i = 0; i <= length - 1; i++) result += a[i];

    printf("%.2f", result);
    return result;
  }
}