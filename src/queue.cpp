#include "queue.h"
void SumOfAverageValue(int N, int *mas, int window,double *resmas){
  Queue q;
  double sum=0;
  for (int i = 0; i < window; ++i) {
    q.push(mas[i]);
    sum += mas[i];
  }
  resmas[0]=sum/window;
  for (int i = window; i < N; ++i){
    sum = sum - q.front() + mas[i];
    resmas[i-window+1]=sum/window;
    q.pop();
    q.push(mas[i]);
  }
}