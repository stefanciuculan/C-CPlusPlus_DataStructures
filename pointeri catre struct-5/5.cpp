#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    /*rectangle r={10,5};

    cout<<r.length<<'\n'<<r.breadth<<'\n';

    rectangle *p=&r;*/
    rectangle *p;
    p=new rectangle;//p=(*struct rectangle)malloc(sizeof(struct rectangle)); pentru C

    p->length=10; p->breadth=5;
//    cout<<sizeof(p);
    cout<<p->length<<'\n'<<p->breadth<<'\n';


    return 0;
}