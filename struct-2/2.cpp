#include <iostream>
#include <stdio.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
    char x;
} r1, r2, r3;

int main(){
    r1.length=10;
    r1.breadth=5;

    printf("%ld\n", sizeof(r1));
    cout<<r1.length<<'\n'<<r1.breadth<<'\n';


}