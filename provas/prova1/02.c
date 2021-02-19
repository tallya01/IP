#include <stdio.h>

int main() {
    unsigned long int num;
    int uf, dv1, dv2, bc1, bc2, n1, n2, n3, n4, n5, n6, n7, n8, n1uf, n2uf;

    scanf("%lu %d", &num, &uf);

    if(uf > 28 || uf < 1){
        printf("CODIGO DA UF INVALIDO!\n");
        return 0;
    } 
    else if(num>9999999){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = (num % 1000 - (n7 * 10) - n8) / 100;
        n5 = (num % 10000 - (n6 * 100) - (n7 * 10) - n8) / 1000;
        n1 = num / 10000000;
        n2 = num / 1000000 - (n1 * 10);
        n3 = num / 100000 - (n1 * 100) - (n2 * 10);
        n4 = num / 10000 - (n1 * 1000) - (n2 * 100) - n3;
    }
    else if(num > 999999){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = (num % 1000 - n7 * 10 - n8) / 100;
        n5 = (num % 10000 - n6 * 100 - n7 * 10 - n8) / 1000;
        n1 = 0;
        n2 = num / 1000000;
        n3 = num / 100000 - n2 * 10;
        n4 = num / 10000 - n2 * 100 - n3 * 10;
    }
    else if(num > 99999){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = (num % 1000 - n7 * 10 - n8) / 100;
        n5 = (num % 10000 - n6 * 100 - n7 * 10 - n8) / 1000;
        n1 = 0;
        n2 = 0;
        n3 = num / 100000;
        n4 = num / 10000 - n3 * 10;
    }
    else if(num > 9999){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = (num % 1000 - n7 * 10 - n8) / 100;
        n5 = (num % 10000 - n6 * 100 - n7 * 10 - n8) / 1000;
        n4 = num / 10000;
        n3 = 0;
        n2 = 0;
        n1 = 0; 
    }
    else if(num > 999){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = (num % 1000 - n7 * 10 - n8) / 100;
        n5 = num / 1000;
        n4 = 0;
        n3 = 0;
        n2 = 0;
        n1 = 0; 
    }
    else if(num > 99){
        n8 = num % 10;
        n7 = (num % 100 - n8) / 10;
        n6 = num / 100;
        n5 = 0;
        n4 = 0;
        n3 = 0;
        n2 = 0;
        n1 = 0; 
    }
    else if(num > 9){
        n8 = num % 10;
        n7 = num / 10;
        n6 = 0;
        n5 = 0;
        n4 = 0;
        n3 = 0;
        n2 = 0;
        n1 = 0; 
    }
    else {
        n8 = num;
        n7 = 0;
        n6 = 0;
        n5 = 0;
        n4 = 0;
        n3 = 0;
        n2 = 0;
        n1 = 0; 
    }

    bc1 = n1*2 + n2*3 + n3*4 + n4*5 + n5*6 + n6*7 + n7*8 + n8*9;
    if(bc1%11 > 9) dv1 = (bc1%11) - (bc1%11 / 10 * 10);
    else dv1 = bc1%11;

    if(uf < 10){
        n1uf = 0;
        n2uf = uf;
    }
    else{
        n1uf = uf/10;
        n2uf = uf%10;
    }

    bc2 = (n1uf) * 7 + (n2uf) * 8 + dv1 * 9;
    if(bc2%11 > 9) dv2 = 1 + (bc2%11) - (bc2%11 / 10 * 10);
    else dv2 = bc2%11;

    if(num>9999999) printf("%d%d%d%d%d%d%d%d%d%d/%d%d\n", n1, n2, n3, n4, n5, n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>999999) printf("%d%d%d%d%d%d%d%d%d/%d%d\n", n2, n3, n4, n5, n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>99999) printf("%d%d%d%d%d%d%d%d/%d%d\n", n3, n4, n5, n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>9999) printf("%d%d%d%d%d%d%d/%d%d\n", n4, n5, n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>999) printf("%d%d%d%d%d%d/%d%d\n", n5, n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>99) printf("%d%d%d%d%d/%d%d\n", n6, n7, n8, n1uf, n2uf, dv1, dv2);
    else if(num>9) printf("%d%d%d%d/%d%d\n", n7, n8, n1uf, n2uf, dv1, dv2);
    else printf("%d%d%d/%d%d\n", n8, n1uf, n2uf, dv1, dv2);

    return 0;
}