#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a=10;
    int &r=a;

    int b=30;
    r=b;
    
    cout<<a<<'\n'<<r<<'\n';
    cout<<++r<<'\n';

    return 0;
}