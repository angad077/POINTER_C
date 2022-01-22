#include <stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int a, sum;
    int b;
    float avg;
    printf("Enter the value of a --> ");
    scanf("%d", &a);
    printf("Enter the value of b --> ");
    scanf("%d", &b);
    SumAndAvg(a, b, &sum, &avg);
    printf("The sum of number a And b is %d\n", sum);
    printf("The avg of number a And b is %.2f\n", avg);

    return 0;
}