// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int data[], int length) {
  int i, j, m, mi;

  display(data, length);
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
    for(i=n-1;i>0;i--){
    sorted=0;
        for(j=0;j<i;j++){
            if(a[j]<a[j+1]){
                 swap(&a[j],&a[j+1]);
                 sorted=1;
            }
        display(a,n);
        }
		printf("\n");
    }
  
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  for (j = 1; j <= n - 1; j++) {

    display(a, n);
  }
}
