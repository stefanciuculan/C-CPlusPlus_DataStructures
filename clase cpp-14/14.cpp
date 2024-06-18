#include <iostream>

using namespace std;

class Rectangle
{
    int length, breadth;

    public:

    Rectangle()
    {
        length=1;
        breadth=1;
    }

    Rectangle(int l, int b)
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

    void setLength(int l)
    {
        length=l;
    }

    void setBreadth(int b)
    {
        breadth=b;
    }

    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

};

int main()
{
    Rectangle r;

    r.setLength(20);

    cout<<r.getLength()<<" "<<r.getBreadth()<<" "<<r.area()<<" "<<r.perimeter()<<'\n'; 
    return 0;
}