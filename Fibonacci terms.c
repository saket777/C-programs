#include<stdio.h>
int main(){
    int i, n, t1=0, t2=1, nextTerm;
    printf("Enter the numbers of terms:");
    scanf("%d",&n);
    printf("Fibnoacci Series:");
    for(i=1;i<=n;i++){
        printf("%d",t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}