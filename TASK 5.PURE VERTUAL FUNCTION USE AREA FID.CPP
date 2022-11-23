#include<iostream>

using namespace std;

class A{
    
    public:
    
    virtual void calculate()=0;
    
};

class B:public A{
    
    
    public:
    
    
    float area;
    int r=12;
    float a=4.8;
    int b=8;
    int h=16;
    
    
    void calculate(){
        area=3.14*12*12;
        cout<<"area of circal:-"<<area<<endl;
        
        area=a*b;
        cout<<"area of ractangel:-"<<area<<endl;
    
        
        area=b*h/2;
        cout<<"are of triangel:-"<<area;
    }
    
};

main(){
    B obj;
    obj.calculate();
    
    
}

