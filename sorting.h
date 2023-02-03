// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int arr[],int n) {
    printf("\n\n");
    int temp,max,i,j;
    for(i=0;i<n;i++) {
        max = i; 
        for(j=i+1;j<n;j++) {
            if(arr[j] > arr[max]) {
                max = j;
            }
        }
        temp = arr[max]; 
        arr[max] = arr[i];
        arr[i] = temp; 
        display(arr,n);
        printf("\n\n");
    }
}  

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void insertion(int a[], int n) {
  int j,i;
  for(j=1; j<n; j++)
    {
  int insert = a[j]; //select target
  for(i=j-1; i>=0; i--) //check before target
    {
      if(insert < a[i]) break;
      else a[i+1] = a[i];
      display(a,n);
    }
  a[i+1] = insert;
  display(a,n);
  printf("\n"); // New - line each main loop
}
  printf("\n"); // New - line loop exit
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 1; j <= n - 1; j++) {

    display(a, n);
  }
}
