#include <stdio.h>
#include <math.h>

int binarySearch(int target,int arr[],int left,int right){
    if (left>right) {
        return -1;
    }
    int med;
    med=(left+right)/2;
    if (target==arr[med]){
        return med;
    }else if (target>arr[med]) {return binarySearch(target,arr,med+1,right);}
    else {
        return binarySearch(target,arr,left,med-1);
        
    }
    return med;
}

int main()
{
    int arr[]={1,3,4,6,10,12,14};
    int result=binarySearch(10,arr,0,6);
    printf("%d \n",result);
}
