#include<stdio.h>
int main()
{
    int i;
    float s=0;

    for(i=1; i<=50; i++)
    {
        s += (float) 1/i;
    }
    printf("Value of s:.%2f\n",s);

    return 0;
}
