#include <iostream>

using namespace std;


const int MaxCap=100;
class DQueue
{
    int array[MaxCap];
    int front,rear,length;
public:
    DQueue()
    {
        length=0;
        front=MaxCap/2;
        rear=MaxCap/2;
    }
    bool isEmpty(){return rear==MaxCap/2&&front==MaxCap/2;}
    bool isFull(){return rear==MaxCap-1&&front==0;}
    void pushFromRight(int ele)
    {
        if(isFull())
        {
            cout<<"it's FULL ma'man"<<endl;
        }
        else
        {
            rear++;
            array[rear]=ele;
            length++;
        }
    }
    void popFromLeft()
    {
        if(isEmpty())
        {
            cout<<"ma'man it's Empty";
            return;
        }
        else
        {
            front++;
            length--;
        }
    }
    void popFromRight()
    {
        if(isEmpty())
        {
            cout<<"ma'man it's Empty";
            return;
        }
        else
        {
            rear--;
            length--;
        }

    }
     void pushFromLeft(int ele)
    {
        if(isFull())
        {
            cout<<"it's FULL ma'man"<<endl;
        }
        else
        {
            front--;
            array[front]=ele;
            length++;
        }
    }
    void print()
    {
        for(int i=front;i<MaxCap/2;i++)
        {
            cout<<array[i]<<" ";
        }
        for(int i=(MaxCap/2)+1;i<rear+1;i++)
        {
            cout<<array[i]<<" ";
        }
    }
};
int main()
{
    DQueue s;
    s.pushFromLeft(8);
    s.pushFromLeft(3);
    s.pushFromLeft(123);
    s.pushFromRight(13);
    s.pushFromRight(103);
    s.pushFromRight(134);
    s.pushFromRight(15);

    s.print();
    cout<<endl;
    s.popFromRight();
    s.popFromLeft();
    s.popFromLeft();
    s.print();
}
