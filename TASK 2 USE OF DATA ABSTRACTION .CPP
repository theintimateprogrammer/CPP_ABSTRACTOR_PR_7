#include<iostream>

using namespace std;

class students_A{
    public:
    
    char name[50];
    int age;
    int id;
    
    
     void  childdetails(){
         
         cout<<"enter the name:-";
         cin>>name;
         
         cout<<"enter the age:-";
         cin>>age;
         
         cout<<"enter the id:-";
         cin>>id;
     }
    
};

class students_B:public students_A{
    public:

    void childdetails(){
         
         cout<<"all students are not come in saturdy "<<endl;
         cout<<"all students details in fill up step by step in exam paper "<<endl;
         cout<<"all students exam are exame date 24/11/2022";
     }
    
};

main(){
    students_A*ptr;
    students_B obj;
    
    ptr=&obj;
    ptr->childdetails();
    
}

