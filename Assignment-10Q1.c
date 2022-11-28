#include<stdio.h>

float area(int radious)
{
    return 3.14*radious*radious;
}

int main()
{
    int r = 5;
    //float a = area(r);
    printf("Area = %.2f\n\n", area(r));
    return 0;
}
