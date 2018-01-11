#include <stdio.h>

int main()
{
    int n;
    int i;
    n=0;
    i=0;
    do {
        n+=2;
        printf("%d\t", n);
        i++;
    }
        while(i<30);
    return 0;
}
