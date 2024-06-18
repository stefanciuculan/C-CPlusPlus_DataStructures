#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int num1=10, num2=15, sum;
    swap(num1, num2);

    cout<<"primul numar este "<<num1<<'\n'<<"al doilea numar este "<<num2<<'\n';

    return 0;
}