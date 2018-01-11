#include <stdio.h>

int interchange(int a, int b) {
    int aux, bux;
        aux=a;
        bux=b;
        b=aux;
        a=bux;
        printf("a=%d b=%d", a, b);
        return 0;
    }
    int main() {
    int x=2;
    int y=3;
     interchange(x,y);
     return 0;
     }
