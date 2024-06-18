#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int n;
    cout<<"n este ";
    cin>>n;

    int A[n];
    A[0]=2;

    printf("%ld\n\n", sizeof(A));
    for(int x:A)
    {
        cout<<x<<'\n';
    }

    return 0;
}