#include<stdio.h>

int fact(int n)
{
    int i,f = 1;
    for(i = 1; i <= n; i++)
    {
        f =f*i;
    }
    return f;
}
int main()
{
    printf("FAct is %d\n\n",fact(5));
    return 0;
}
