#include <stdio.h>

int main()
{
    int i = 20;
    int *j = &i;
    int **k = &j;
    printf("The value of i is %d \n",i);
    printf("The value of i is %d \n",*j);
    printf("Addres of i is %u\n",&i);
    printf("Addres of i is %u\n",j);
    printf("Addres of j is %u\n",&j);
    printf("The value of j is %d \n",*(&j));
    printf("The value of k is %d \n",**(&k));
    printf("Addres of k is %u\n",&k);
    
    return 0;
}