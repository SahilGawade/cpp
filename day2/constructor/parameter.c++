#include<iostream>
#include<string>
using namespace std;

class MotorCycle{
    private:
    int year;
    string brand;
    string model;
    double price;
    double mileage;
    int weight;
    int tankcapacity;

    public:
      MotorCycle(string mod,double amt,double mile,int kg,int ltr){

            year=2025;
        brand="Royal Enfield";
        model=mod;
        price=amt;
        mileage=mile;
        weight=kg;
        tankcapacity=ltr;

      }
       void accept(){
       
    }
    
    void disp(){
        cout<<"brand:"<<brand<<"\n";
        cout<<"year:"<<year<<"\n";
        cout<<"model:"<<model<<"\n";
        cout<<"price:"<<price<<"\n";
        cout<<"mileage:"<<mileage<<"kmpl"<<"\n";
        cout<<"weight:"<<weight<<"kg"<<"\n";
        cout<<"tankCapacity:"<<tankcapacity<<"ltr"<<"\n";
    }
};



int main(){
    MotorCycle m1(" Hunter 350",149900.00,36.00,177,13);
    m1.disp();

    return 0;
}



