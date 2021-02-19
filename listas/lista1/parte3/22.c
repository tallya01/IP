#include <stdio.h>

int main(){
    int n, c1, c2, cont1, cont2, h;

    scanf("%d", &n);

    for(h=1; h<=n; h++){
        for(cont1=1; cont1<=h; cont1++){
            for(cont2=1; cont2<=h; cont2++){
                if(cont1*cont1 + cont2*cont2 == h*h){
                    if(cont1<cont2) printf("hipotenusa = %d, catetos %d e %d\n", h, cont1, cont2);
                } 
            }
        }
    }
    

    return 0;
}