#include<iostream>
#include<string>
using namespace std;

class Emp{
    private:
        int eid;
        string ename;
        string role;
        string dept;
        float years;
        double sal;

          public:
        Emp(int id,string name,string role,string dept,float years,double sal){
              this->eid=id;
            this->ename=name;
            this->role=role;
            this->dept=dept;
            this->years=years;
            this->sal=sal;
        }
        void disp(){
            cout<<"id:"<<this->eid<<"\n";
            cout<<"name:"<<this->ename<<"\n";
            cout<<"role:"<<this->role<<"\n";
            cout<<"dept:"<<this->dept<<"\n";
            cout<<"years:"<<this->years<<"\n";  
            cout<<"sal:"<<this->sal<<"\n"; 
        }
 friend void addBonus(Emp &obj);
};

void addBonus(Emp &obj){
    obj.sal+=10000;
}

int main(){
    Emp e1(1,"abc","software dev","technology",0.6,45000.00);
    e1.disp();

    addBonus(e1);
    e1.disp();

    Emp e2(2,"def","hr","humanresource",0.6,35000.00);
    e2.disp();


    return 0;
}
