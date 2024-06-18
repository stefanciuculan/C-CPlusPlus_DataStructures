#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

Rectangle *fun()
{
    Rectangle *p;
    p=new Rectangle;

    p->length=15;
    p->breadth=7;

    return p;
}

/*void fun(Rectangle *r)
{
    r->length=20;
    cout<<r->length<<' '<<r->breadth<<'\n';
}*/

int main()
{
    //Rectangle r={10, 5};
    //fun(&r);

    Rectangle *ptr=fun();

    cout<<ptr->length<<'\n'<<ptr->breadth<<'\n';

    //printf("length is %d and breadth is %d\n", r.length, r.breadth);
}