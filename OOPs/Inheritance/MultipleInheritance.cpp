#include<iostream>
using namespace std;

class Shape
{
    public:
    void setBase(int x)
    {
        base=x;
    }
    void setHeight(int y)
    {
        height=y;
    }
    protected:
    int base;
    int height;
};

class Amount
{
    public:
    void calculateAmount(int x)
    {
        cost=50*x;
        cout << cost <<endl;
    }
    public:
    float cost;
};

class Triangle : public Shape, public Amount
{
    public:
    int getArea()
    {
        area=(0.5)*base*height;
        return area;
    }
    public:
    float area;
};

int main()
{  
    Triangle obj;
    obj.setBase(20);
    obj.setHeight(30);
    float area =obj.getArea();
    obj.calculateAmount(area);
    
    return 0;
}

/*
15000
*/
