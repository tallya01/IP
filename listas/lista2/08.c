#include <stdio.h>

void print_bytes( const void * end_byte, int n );
void pbyte( char * byte );

int main(){
    double n;
    unsigned char a;
    unsigned short b;
    unsigned int c;
    float d;

    scanf("%lf", &n);

    a=n;
    b=n;
    c=n;
    d=n;

    print_bytes(&a, sizeof(a));
    print_bytes(&b, sizeof(b));
    print_bytes(&c, sizeof(c));
    print_bytes(&d, sizeof(d));
    print_bytes(&n, sizeof(n));

    return 0;
}

void pbyte( char * byte ){
    unsigned char n = *byte;
    printf("%d", n);
}

void print_bytes( const void * end_byte, int n ){
    int i;
    char * pc = end_byte;
    for(i=0; i<n; i++){
        pbyte(pc);
        pc++;
        printf(",");
    }
    printf("\n");
}