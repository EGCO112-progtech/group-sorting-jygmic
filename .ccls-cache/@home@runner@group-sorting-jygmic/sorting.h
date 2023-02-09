// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int arr[],int n) {
    int temp,max,i,j,count=0;
    for(i=0;i<n-1;i++) {
        max = i; 
        for(j=i+1;j<n;j++) {
            if(arr[j] > arr[max]) {
                max = j;
				
            }
        }
        temp = arr[max]; 
        arr[max] = arr[i];
        arr[i] = temp; 
		count++;
        display(arr,n);
        printf("\n");
    }
	printf("count %d",count);
	printf("\n");
}  

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void insertion(int a[], int n) {
  int j,i,count=0;
  for(j=1; j<n; j++)
    {
  int insert = a[j]; //select target
  for(i=j-1; i>=0; i--) //check before target
    {
      if(insert < a[i]) break;
      else {a[i+1] = a[i];
		count++;}
      display(a,n);
    }
  a[i+1] = insert;
  display(a,n);
  printf("\n"); // New - line each main loop
}
  printf("\n"); // New - line loop exit
  printf("count %d",count);
}

void bubbleSort(int a[],int n){

int i,j,count=0;
int sorted;
    for(i=n-1;i>0;i--){
    sorted=0;
        for(j=0;j<i;j++){
            if(a[j]<a[j+1]){
                 swap(&a[j],&a[j+1]);
                 sorted=1;
				 count++;
            }
        display(a,n);
        }
		printf("\n");
    }
	printf("count %d",count);
}
