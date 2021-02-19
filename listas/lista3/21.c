#include <stdio.h>

int main() {
    char str1[10000], str2[10000];
    int t, op, i, j;

    scanf("%d", &t);

    for(i=0; i<t; i++){
        scanf("%*c%[^ ]", str1);
        scanf("%*c%[^\n]", str2);
        op=0;
        for(j=0; str1[j]!='\0'; j++){
            while(str1[j] != str2[j]){
                if(str1[j]=='z'){
                    str1[j] = 'a';
                    op++;
                }
                else{
                    str1[j]++;
                    op++;
                }
            }
        }
        printf("%d\n", op);
    }
    return 0;
}