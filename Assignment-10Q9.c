#include<stdio.h>

int check(int dig,int num)
{
    while(num)
    {
        if(num%10 == dig)
            return 1;
        num = num/10;
    }
    return 0;
}
int main()
{
    if(check(2,123))
        printf("Yes\n");
    else
        printf("NO\n");
}
