#include <stdio.h>
int ten_times(int *a);

int main()
{
    int i = 13;
    int c;
    c = ten_times(&i);
    printf("The value of i Multoply by 10 is %d", c);

    return 0;
}
int ten_times(int *a)
{
    int temp;
    temp = 10 * (*a);
    return temp;
}