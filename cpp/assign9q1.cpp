#include<iostream>

using namespace std;

void factorial (int n)
{
    int result=1;
    if(n<0)
    throw 3;

    else {   
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
        
    }
    cout<<"The factorial of number is: "<<result<<endl;
    }
}
int main()
{   
    int num1;
    try
    {
        cout<<" Please enter number for factorial ";
        cin>>num1;
        factorial(num1);

    }
    catch(int error)
    {
        cout<<"The number should be above or is equal to zero"<<endl;
    }
    cout<<"Congratulations"<<endl;

    return 0;
}