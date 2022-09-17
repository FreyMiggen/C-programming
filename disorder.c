#include <stdio.h>
#include <math.h>
int n,count;
int p[20];

int Ghinhan() {
    int i;
    count++; printf(".%i. ", count);
    for (i=1;i<=n;i++) printf("%i ",p[i]);
    printf("\n");
    
}


int UCV(int j, int k) {
    if (j==k){
        return 0;
    } else {
        int i;
        for (i=1; i<k;i++) {
            if (p[i]==j) return 0;
        }
    }
    
    return 1;
}


int Disorder(int k){
    int j;
    for (j=1;j<=n;j++){
        if (UCV(j,k)) {
            p[k]=j;
            //printf("%i\n",j);
            //printf("%i\n",k);
            
            if (k==n) Ghinhan();
            else Disorder(k+1);
    }
}
}

int main() {
    printf("Input n= "); scanf("%i",&n);
    printf("\n=====RESULT=====\n");
    count=0; Disorder(1);

    if (count==0) printf("No solution \n");
    getchar();
   

    
}
