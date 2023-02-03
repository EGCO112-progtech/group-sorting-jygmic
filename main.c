#define N 5
#include <stdio.h>
#include "sorting.h"

int main() {
  int a[N]={1,6,5,2,3};
  int i,j,new_number;

   display(a,N);
  //bubbleSort(a,N); 
   insertion(a,N);

  // selectionSort(a,N);
   display(a,N);
 return 0;
}


