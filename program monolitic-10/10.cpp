#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int length=0, breadth=0;

    printf("length:");
    cin>>length;
    printf("\nbreadth:");
    cin>>breadth;

    int area=length*breadth;
    int peri=length+breadth;

    printf("area=%d and perimeter=%d",area, peri);


    return 0;
}