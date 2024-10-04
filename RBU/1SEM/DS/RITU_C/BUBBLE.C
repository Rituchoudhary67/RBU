#include<stdio.h>

void main() {
  int arr[10],n,i,j,k,temp;
  clrscr();
  printf("Enter the size of an array :");
  scanf("%d",&n);
  printf("Enter %d elements in an array :",n);

  //input of an array
  for(i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  printf("\n Before sorting :");
  //printing array elements
  for(i=0;i<n;i++){
   printf("%4d",arr[i]);
  }

  //print array function
  //void printArray(arr) {
    //for(i=0; i<n;i++) {
     //printf(arr[i] + " ");
    //}
  //}

  //logic for bubble sort
  for(i=0;i<n;i++) {
    for(j=0;j<n-i-1;j++) {
      if(arr[j] > arr[j+1]) {
       //swapping
       temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] = temp;
      }
    }
    //printArray(arr);

  }
  printf("\n After Sorting : ");
  for(k=0;k<n;k++) {
     printf("%4d",arr[k]);
  }


  getch();
}