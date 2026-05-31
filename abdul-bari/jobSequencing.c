// Job Sequencing with deadlines - Greedy Method
#include<stdio.h>

struct Job {
  char id[10];
  int profit;
  int deadline;
};

int main() {
  struct Job jobs[5] = {
    {"J1", 20, 2},
    {"J2", 15, 2},
    {"J3", 10, 1},
    {"J4", 5, 3},
    {"J5", 1, 3}
  };

  char sequencedJobs[3][2] = {0};

  for(int i=0; i<5; i++){
    printf("\n%d", jobs[i].deadline);
  }
  


  printf("\nok hai");

  return 0;
}