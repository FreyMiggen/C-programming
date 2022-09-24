
#include <stdio.h>

// intuition: assume that arr[0:i-1] is already sorted. Move arr[i] to the right position in realtion with a[0:i-1]

void insertationSort(int a[],int m){
    int i,j,last;
    // find the right element to be inserted to i(th) position
    for (i=1;i<m;i++){
        j=i;
        last=a[i];
        while((j>=1) && (a[j-1]>last)){
            a[j]=a[j-1];
            j=j-1;
        }
        a[j]=last;
        
        
    }
}

int main()
{
    
    int arr[]={10,5,6,13,9,7};
    int m=6;
    insertationSort(arr,m);
    int i;
    for (i=0;i<m;i++){
        printf("%4d",arr[i]);
    }
}
