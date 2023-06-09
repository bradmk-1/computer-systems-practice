#include "problem.h"

#include <stdio.h>
#include <unistd.h>

unsigned int wakeup(unsigned int secs) {
  unsigned int sleepCount = sleep(secs);

  printf("Process slept for %d seconds", secs - sleepCount + 1);

  return sleepCount;
}