//Week 10 Task 2: Shape Drawing System (virtual functions)
#include <iostream>
using namespace std;

//base class
class Shape{
    public:
        virtual void draw(){
            cout<<"Drawing a shape"<<endl;
        }
};

//derived classes override draw()
class Circle : public Shape{
    public:
        void draw(){
            cout<<"Drawing a Circle"<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void draw(){
            cout<<"Drawing a Rectangle"<<endl;
        }
};

class Triangle : public Shape{
    public:
        void draw(){
            cout<<"Drawing a Triangle"<<endl;
        }
};

int main(){
    Circle circle1;
    Rectangle rectangle1;
    Triangle triangle1;

    //base class pointer
    Shape* shape;

    //the same pointer calls a different draw() each time (runtime polymorphism)
    shape = &circle1;
    shape->draw();

    shape = &rectangle1;
    shape->draw();

    shape = &triangle1;
    shape->draw();
    return 0;
}
