#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<'\n';
    cout<<sizeof(p2)<<'\n';
    cout<<sizeof(p3)<<'\n';
    cout<<sizeof(p4)<<'\n';
    cout<<sizeof(p5)<<'\n';

    
    return 0;
}