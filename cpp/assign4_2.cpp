#include<iostream>

using namespace std;

int size=5;

class stack
{
private:
    int top;
    int size;
    int * arr;

public:
    stack(int size)
    {
        this->top =-1;
        if(size!=0)
        {
            this->top=-1;
            if(size!=0)
            {
                this->arr = new int [size];
                this->size=size;

            }
            else
            {
                this->arr =new int [size];
                this->size=5;
            }
            
        }
    }

    void push(int a)
    {
        if(this->top == this->size-1)
            cout<< " stack is full"<<endl;
        else
        {
            this->top++;
            this->arr[top]=a;

        }


    }

    void pop()
    {
        if(this->top == -1)
            cout<<"Stack is empty"<<endl;
         else
         {
            this->arr[top]=0;
            top --;
         }   

   }

   void peek()
   {    
    if(this->top ==1)
    cout<<"stack is empty"<<endl;
    else
    {
        cout << " peel value is "<<this->arr[top]<<endl;
    }
    
   }

   void isEmpty()
   {    
      if(this->top ==1)
      cout<<"steak is empty"<<endl;
      else
      cout<<"stack is not empty"<<endl;
   }

   void isfull()
   {
    if(this->top == (this->size)-1)
    cout<<"stack is full"<<endl;
    else
    cout<<"stack is empty"<<endl;

   }
  
}; 

int main()
{
    int size;
    int num;
    cout<<" Please enter the size of array";
    cin>>size;
    stack s1(size);

    for(int i=0; i < size; i++ )
    {

        cout<<"Please enter the  number for storing in array";
        cin >> num;
        s1.push(num);

    }
    s1.isEmpty();
    s1.isfull();
    s1.peek();
    s1.pop();
    

    return 0;
}