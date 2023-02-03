#include<stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void revArr(int arr[],int size)
{
        int first = 0,last = size-1;
        while(first < last){
            swap(&arr[first],&arr[last]);
            first++;
            last--;
        }
}
void main()
{
    int a[] = {1,2,3,4,5,90};
    int size = sizeof(a)/sizeof(int);
    revArr(a,size);
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}

