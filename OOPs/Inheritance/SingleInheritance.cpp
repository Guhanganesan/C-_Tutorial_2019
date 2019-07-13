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

class Triangle : public Shape
{
    public:
    void getArea()
    {
        float area=(0.5)*base*height;
        cout << area <<endl;
    }
    
};
int main()
{  
    Triangle obj;
    obj.setBase(20);
    obj.setHeight(30);
    obj.getArea();
    return 0;
}
/*
Answer;-
300
*/
