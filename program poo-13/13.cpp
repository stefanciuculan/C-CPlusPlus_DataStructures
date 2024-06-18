#include <iostream>
#include <stdio.h>

using namespace std;

class Rectangle
{
    public:

    int length, breadth;

    void initialise(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    int l,b;

    cin>>l>>b;

    Rectangle r;
    r.initialise(l,b);

    cout<<r.area()<<'\n'<<r.perimeter()<<'\n';

    return 0;
}