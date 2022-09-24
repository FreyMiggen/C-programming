#include <stdio.h>

// Intuition: Find the smallest element and move it to 1st position
//            Find the second smallest element and move it to 2nd position,vv

void selectionSort(int a[],int m){
    int i,j,temp,min;
    
    for (i=0;i<m;i++)  //find the right element to be placed to i(th) position
    
    {   min=i;
        for (j=i+1;j<m;j++){
            if (a[j]<a[min]) min=j;
        }
        
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    
        
    }
}

int main()
{
    
    int arr[]={10,5,6,13,9,7};
    int m=6;
    selectionSort(arr,m);
    int i;
    for (i=0;i<m;i++){
        printf("%4d",arr[i]);
    }
}
