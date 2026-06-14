// Job Sequencing with deadlines - Greedy Method
#include<stdio.h>
#include<string.h>

struct Job {
  char id[10];
  int profit;
  int deadline;
};

int main() {
  // struct Job jobs[5] = {
  //   {"J1", 20, 2},
  //   {"J2", 15, 2},
  //   {"J3", 10, 1},
  //   {"J4", 5, 3},
  //   {"J5", 1, 3}
  // };

  struct Job jobs[5] = {
    {"J5", 1, 3},
    {"J2", 15, 2},
    {"J3", 10, 1},
    {"J4", 5, 3},
    {"J1", 20, 2},
  };

  struct Job sortedJobs[5];
  struct Job swap;

  for(int i=0; i<5; i++){
    for(int j=0; j<5-i-1; j++){
      if(jobs[j].profit < jobs[j+1].profit){
        swap = jobs[j];
        jobs[j] = jobs[j+1];
        jobs[j+1] = swap;
      }
    }
  }

  printf("\n Sorted array");
  for(int k=0; k<5; k++){
    printf("\n Profit:%d", jobs[k].profit);
  };

  printf("\n\n");
  

  char sequencedJobs[3][3] = {0};

  for(int i=0; i<5; i++){
    int index = jobs[i].deadline - 1;

    if(sequencedJobs[index][0] == '\0'){
      strcpy(sequencedJobs[index], jobs[i].id);
    } else {
      for(int j = index-1; j>=0; j--){
        if(sequencedJobs[j][0] == '\0'){
          strcpy(sequencedJobs[j], jobs[i].id);
          break;
        }
      }
    }
  }
  

  for(int k=0; k<3; k++){
    printf("\n Job:%s", sequencedJobs[k]);
  }

  return 0;
}
