#include<iostream>
using namespace std;


class Base1 {
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};

class Base2 {
    public:
        void greet(){
            cout<<"To kaise hai aap log?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    public:
    void greet(){
        Base1 :: greet();  // To tackle the error of ambiguity
    }
};
int main(){
    
    Base1 b1;
    Base2 b2;

    b1.greet();
    b2.greet();

    Derived d;
    d.greet();
    return 0;
}