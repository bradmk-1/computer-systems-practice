#include <stdio.h>
#include "problem.h"

float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;

    for (i = 0; i <= length - 1; i++)
        result += a[i];

    printf("%.2f", result);
    return result;
}