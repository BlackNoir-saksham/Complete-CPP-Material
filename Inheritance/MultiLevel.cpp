#include<iostream>
using namespace std;

class Student{
    protected:
         int a;
    private:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r){
    roll_number=r;
}
void Student :: get_roll_number(){
    cout<<"RollNumber is: "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        int maths;
        int science;
    public:
        void set_marks(float, float);
        void get_marks();

};

void Exam :: set_marks(float m1, float m2){
    maths=m1;
    science=m2;
}
void Exam :: get_marks(){
    cout<<"Marks in Maths is: "<<maths<<" Marks in sciense is: "<<science<<endl;
}

class Result : public Exam{
    float percentage;

    public:
        void display(void);
};

void Result :: display(){

    get_roll_number();
    get_marks();
    cout<<"Percentage: "<<float((maths+science)/2)<<"%"<<endl;
}
int main(){
    
    Result R;
    R.set_roll_number(55);
    R.set_marks(85,96);
    R.display();
    return 0;
}