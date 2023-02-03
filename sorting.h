// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
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


void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




