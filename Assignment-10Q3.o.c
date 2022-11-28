#include<stdio.h>

int evenOrodd (int n)
{
    return(n%2 == 0);
}
int main()
{

    if(evenOrodd(8) == 1)
    {

        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}
