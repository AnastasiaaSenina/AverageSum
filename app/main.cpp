#include "queue.h"

int main() {
const int N=5;
  int mas[N] = {1,2,3,4};
  const int window=3;
  double resmas[N-N%window];
  SumOfAverageValue(N,mas,window,resmas);
  for (int i = 0; i<(N - N%window); i++)
   printf("%lf\n", resmas[i]);
}