#include<stdio.h>

float simpleInterest(float P,float R,float T)
{

    return(P*R*T)/100;
}
int main()
{
    printf("simple Interest = %.2f\n\n",simpleInterest(1000,8.5,2));
    return 0;
}
