#include <stdio.h>

int fact(int n)
{
    int i,f = 1;
    for(i = 1; i <= n; i++)
    {
        f =f*i;
    }
    return f;
}
int per(int n, int r)
{
    return fact(n)/(fact(n-r));
}
int main()
{
    printf("per = %d\n",per(10,2));
    return 0;
}

