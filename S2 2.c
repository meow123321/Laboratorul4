#include <stdio.h>
#include <math.h>
int func1(int a, int b, int c, int d, int x, int n)
{
    double y;
    y= a*pow(x,2*n)+b*pow(x,n)+c*x+d;
    printf("y=%.2lf\n", y);
    return 0;
}
int func2(int a, int b, int c, int x, int n)
{
    double y;
    double PI=3.14;
    y=a*pow(x,2)+b*x+cos(PI*c);
    printf("y=%.2lf", y);
    return 0;
}
int main() {
    int y;
    int PI;
    int a, b ,c ,d, x, n;

    printf("Intorduceti valoarea lui a: ");
    scanf("%d", &a);
    printf("Intorduceti valoarea lui b: ");
    scanf("%d", &b);
    printf("Intorduceti valoarea lui c: ");
    scanf("%d", &c);
    printf("Introduceti valoarea lui d: ");
    scanf("%d", &d);
    printf("Introduceti valoarea lui x: ");
    scanf("%d", &x);
    printf("Intorduceti valoarea lui n: ");
    scanf("%d", &n);

    func1(a,b,c,d,x,n);
    func2(a,b,c,x,n);

    return 0;
}
