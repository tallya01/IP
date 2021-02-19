#include <stdio.h>

int main(){
    unsigned int q1, q2, i, j, k;

    scanf("%u%u", &q1, &q2);

    unsigned int v1[q1], v2[q2], v3[q1+q2];

    for(i=0;i<q1;i++){
        scanf("%u", &v1[i]);
    }

    for(i=0;i<q2;i++){
        scanf("%u", &v2[i]);
    }

    i=j=k=0;
    while(k<q1+q2){
        if(v1[i]<=v2[j]){
            v3[k] = v1[i];
            i++;
            k++;
        } 
        else{
            v3[k] = v2[j];
            j++;
            k++;
        }
    }

    for(i=0;i<q1+q2;i++){
        printf("%u\n", v3[i]);
    }

    return 0;
}