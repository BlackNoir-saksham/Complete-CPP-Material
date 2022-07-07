#include<iostream>
using namespace std;

/*

Case 1: 
class B: public A{
    Order of execution of Constructor -> First A() then B()
}

Case 2:
Class A: public B, public C{
    Order of execution of Constructor -> B() then C() then A()
} 

Case 3:
class A: public B, virtual public C{
    Order of execution of Constructor C() then B() then A()
}

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class Constructor Called."<<endl;
        }
        void printDataBase1(void){
            cout<<"the Value of data is : "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class Constructor Called."<<endl;
        }
        void printDataBase2(void){
            cout<<"the Value of data is : "<<data2<<endl;
        }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor Called"<<endl;
        }

        void printDataDerived(void){
            cout<<"Derived 1 is "<<derived1<<endl;
            cout<<"Derived 2 is "<<derived2<<endl;
        }
};
int main(){
    
    Derived sakky(1,2,3,4);
    sakky.printDataBase1();
    sakky.printDataBase2();
    sakky.printDataDerived();
    return 0;
}