#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a=4,b=5;
    printf("Your sum is %d\n",sum(a,b));

    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 80;
    b = 10;
    return c;
}