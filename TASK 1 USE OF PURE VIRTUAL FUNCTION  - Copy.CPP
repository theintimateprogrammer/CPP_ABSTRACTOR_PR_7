#include<iostream>

using namespace std;

class mba{
     public:
     
     
     virtual void nba()=0;
         

};

class pgdm:public mba{
    
    public:
    
    void nba(){
        
        
      cout<<"pgdm is the degree of master course in clg nba";
    }
};

main(){
    
    pgdm obj;
    
    obj.nba();
    
}
     
    


