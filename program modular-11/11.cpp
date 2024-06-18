#include <iostream>
#include <stdio.h>

using namespace std;

int area (int length, int breadth)
{
    return length*breadth;
}

int perimeter(int length, int breadth)
{
    return 2*(length+breadth);
}

int main()
{
    int length=0, breadth=0;

    cout<<"lungimea este ";
    cin>>length;
    cout<<"\nlatimea este ";
    cin>>breadth;

    int a=area(length, breadth);
    int p=perimeter(length, breadth);   

    cout<<"\naria este "<<a<<" perimetrul este "<<p<<'\n';


    return 0;
}