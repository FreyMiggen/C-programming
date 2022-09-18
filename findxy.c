
#include <stdio.h>
#include <math.h>
int check(int X[], int Y[],int k,int n){
    int i=0;
    int j=n-1;
    while ((n-i-1)*j>=0){
        if (X[i]+Y[j]==k) return 1;
        else {
            if (X[i]+Y[j]>k) j=j-1;
            else i=i+1;
        }
        
    }
    
    return 0;
    
}

int main()
{
int X[]={1,2,3,4,5};
int Y[]={2,5,7,9,9};

int n=5;
if (check(X,Y,6,n)) printf("yes");
else printf("no");


}
