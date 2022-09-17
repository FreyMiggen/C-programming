#include <stdio.h>
#include <math.h>

int n,count;
int a[20];



int Ghinhan() {
    int i;
    count++; printf(".%i. ", count);
    for (i=1;i<=n;i++) printf("%i ",a[i]);
    printf("\n");
    
}
int UCVh(int j,int k){
    int i;
    for (i=1;i<k;i++) {
        if  ((j == a[i] )|| (fabs(j-a[i]) == k-i ))  return 0;
        
    }
    return 1;
}

int Hau(int i){
    int j;
    for (j=1;j<=n;j++){
        if (UCVh(j,i)==1) {
            a[i]=j;
            if (i==n) Ghinhan();
            else Hau(i+1);
        }
    }
}

int main() {
    printf("Input n= "); scanf("%i",&n);
    printf("\n=====RESULT=====\n");
    count=0; Hau(1);

    if (count==0) printf("No solution \n");
    getchar();
    
}
