#include <iostream>
using namespace std;

#define n 20
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    int push(int x)
    {
        if (back == n - 1)
        {
            cout << " Queue is Full" << endl;
            return -1;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    int pop()
    {
        if ((back < front) || front == -1)
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }
        front++;
    }

    int peek()
    {
        if ((back < front) || front == -1)
        {
            cout << "Queue is Empty " << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if ((back < front) || front == -1)
        {

            return true;
        }
        return false;
    }

    void display(){
        for (int i = front; i<n-1; front ++)
        {
            cout<<arr[front]<<" "<<endl;
        }
    }
};
int main()
{

    queue q;
    q.push(5);
    q.push(6);
    q.push(2);
    q.push(-7);
    q.push(12);
    

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

   cout<< "is empty: "<<q.empty();

    return 0;
}