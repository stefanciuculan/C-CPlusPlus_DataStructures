#include <iostream>
#include <stdio.h>

using namespace std;

int add(int a, int b)
{
    return a+b;
}


int main()
{
    int num1=10;
    int num2=15;
    int sum;

    sum=add(num1, num2);

    printf("suma este %d\n", sum);
    return 0;
}
