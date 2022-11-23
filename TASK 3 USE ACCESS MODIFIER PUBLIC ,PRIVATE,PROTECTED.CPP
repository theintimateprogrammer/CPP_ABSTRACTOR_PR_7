#include<iostream>

using namespace std;

class A{
    
    public:
     int a=50;
     
     private:
     int b=60;
     
     protected :
     int C;
     
};

class B:public A{
    
    public:
    
    void setdata(int id){
        C=id;
        
    } 
    
    void getdata(){
        
        cout<<C;
    }
};

main(){
    
    A obj;
    cout<<obj.a<<endl;
   // cout<<obj.b<<endl;//private not access 
    
    B obj2;
    obj2.setdata(999);
    obj2.getdata();
}

