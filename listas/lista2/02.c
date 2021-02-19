#include <stdio.h>

int fibonacci(int t1, int t2, int n);

int main(){
    int n1, n2, pos, t;

    scanf("%d %d %d", &n1, &n2, &pos);

    t=fibonacci(n1,n2,pos);

    printf("%d\n", t);

    return 0;
}

int fibonacci(int t1, int t2, int n){
    int pos=3, t;
    while(pos<=n){
        t=t1+t2;
        t1=t2;
        t2=t;
        pos++;
    }
    return t;
}