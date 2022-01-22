#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a = 5, b = 6;
    printf("the value after of a %d and b %d\n", a, b);
    // wrong_swap(a, b); will not work beacuse of call by value
    swap(&a, &b); //will work beacuse of call by reference
    printf("the value after of a %d and b %d\n", a, b);

    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}