#include <stdio.h>
void SumAndAvg(int a, int b, int sum, float avg)
{
    sum = a + b;
    avg = (float)(sum) / 2;
}

int main()
{
    int a = 6, b = 7, sum;
    float avg;
    SumAndAvg(a, b, sum, avg);
    printf("The sum of A nd b is %d \n ", sum);
    printf("The avg of A nd b is %.3f \n ", avg);

    return 0;
}