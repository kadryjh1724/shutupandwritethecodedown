#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));
  double rand_x, rand_y, r, pi;
  int N;
  int M = 0;
  double max = RAND_MAX;

  printf("Number of trials:");
  scanf("%d", &N);
  
  for (int i=0; i<N; i++){
    rand_x = rand() / max;
    rand_y = rand() / max;
    r = rand_x * rand_x + rand_y * rand_y;
    if (r <= 1){
      M++;    
    }
  }

  pi = 4.0 * M / N;
  printf("For %d trials, estimated pi value is %lf\n", N, pi);
  return 0;

}

