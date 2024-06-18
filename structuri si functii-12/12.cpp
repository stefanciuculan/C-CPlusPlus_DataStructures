#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length; 
    int breadth;
};

void initialise(Rectangle &r, int l, int b)
{
    r.length=l;
    r.breadth=b;
}

int area (Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(Rectangle r)
{
    return 2*(r.length+r.breadth);
}

int main()
{
    int l,b;
    Rectangle r;

    cout<<"lungimea este ";
    cin>>l;
    cout<<"\nlatimea este ";
    cin>>b;

    initialise(r,l,b);

    int a=area(r);
    int p=perimeter(r);   

    cout<<"\naria este "<<a<<" perimetrul este "<<p<<'\n';


    return 0;
}