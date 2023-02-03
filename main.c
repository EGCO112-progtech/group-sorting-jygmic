#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"

int main(int argc, char *argv[]) {
  int i;
  int N = argc - 2; // assign arguments count - 2 to N as Number to run
  
  int *a = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++){
    a[i] = atoi(argv[i + 2]); // Change arguments to int
  }
  display(a,N);
  if(strcmp(argv[1],"bubble")) bubbleSort(a,N);
  else if(strcmp(argv[1],"insertion")) insertion(a,N);
  else SelectionSort(a,N);
  display(a,N);
  
  //printf("Count is %d\n and text is %s",N,argv[1]);

  
  /*int a[N]={1,6,5,2,3};
  int i,j,new_number;

   display(a,N);
  //bubbleSort(a,N); 
   insertion(a,N);

  // selectionSort(a,N);
   display(a,N);*/
 return 0;
}


