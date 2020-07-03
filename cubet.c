#include <stdlib.h>
#include <stdio.h>
#include <time.h>

const char moves[6][3][3] = {
  {"F", "F'", "F2"},
  {"R", "R'", "R2"},
  {"U", "U'", "U2"},
  {"L", "L'", "L2"},
  {"B", "B'", "B2"},
  {"D", "D'", "D2"}
};
const int mcount = 17;
void print_scramble(void);

int main(int argc, char** argv) {
  int count = 0;
  double t, total = 0;
  struct timespec tstart={0,0}, tend={0,0};
  srand(time(0));
  printf("Press ENTER to start and stop timer\n\n");
  print_scramble();
  while(1) {
    if (getchar()) {
      clock_gettime(CLOCK_MONOTONIC, &tstart);
      printf("...");
      while (!getchar());
    }
    clock_gettime(CLOCK_MONOTONIC, &tend);
    t = ((double)tend.tv_sec + 1.0e-9*tend.tv_nsec) - ((double)tstart.tv_sec + 1.0e-9*tstart.tv_nsec);
    count++;
    total = total + t;
    printf("Time:     %.5f\n", t);
    printf("Attempt:  %d\n", count);
    printf("Average:  %.5f\n\n", total / count);
    print_scramble();
  }
  return 0;
}

void print_scramble() {
  int i = 0, j = 10, k = 0;
  for (i = 0; i < 20; i++) {
    do {
      k = rand() % 6;
    } while (k == j);
    printf("%s ", moves[k][rand() % 3]);
    j = k;
  }
}
