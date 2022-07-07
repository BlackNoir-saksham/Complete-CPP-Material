#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
    public:
        void setData(int val){
            a=val;
        }
        int getData(){
            return a;
        }
};

 /*                 	Public Derivation      	Private Derivation    	Protected Derivation
Private members           	Not Inherited           Not Inherited            Not Inherited              
Protected members           	Protected           Private                  Protected                    
Public members                     Public           Private                  Protected
*/

class Derived : protected Base{
    getData();
   
    public:
        void display(){
        cout<<"Protected a is: "<<a<<endl;
    }
};
int main(){

    Base B;
    Derived D;
    B.setData(5);
    D.display();  // Will not run 
    system("pause");
    return 0;
}