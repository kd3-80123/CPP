#include<iostream>
using namespace std;

class Employee
{
    private:
        int id;
        float sal;


    
    public:
    Employee(int id, float sal)

    {
        this->id=id;
        this->sal = sal;
    }
    Employee()
    {
        this->sal=3000;
        this->id=1;

    }

    void accept()
    {
        cout<<" Please enter Salary ";
        cin>>sal;
        cout<<"Please enter id";
        cin>>id;
    }
    void display()
    {   
        cout<<"The salary is :"<<sal;
        cout<<"The ID is :"<<id;

    }
    void setsal(float sal)
    {
        this->sal=sal;
    }
    void getsal()
    {
        cout<<"The salary is :"<<this->sal;
    }
    void setid(int id)
    {
        this->id=id;
    }
    void getid()
    {
         cout<<"The ID is :"<<this->id;
    }


};

class Manager : public Employee
{
private:
    float bonus;
public:
    Manager(float bonus,int id,float sal)
    {
        this->bonus=bonus;
        Employee::setsal(sal);
        Employee::setid(id);
        
    }
    Manager()
    {
        bonus = 1;

    }
    void get_bonus()
    {
        cout<<"The bonus is :"<<this->bonus;
    }
    void setbonus(float bonus)
    {
        this->bonus=bonus;
    }
    void display()
    {   
        get_bonus();
        Employee::display();

    }
    void accept()
    {
        get_bonus();
        Employee::accept();
    }
    protected:
    void display_manager()
    {

    }
    void accept_manager()
    {

    }
    

};

class Salesman: public Employee
{
private:
    float comm;
    Employee e;
public:
    Salesman(int id, float sal, float comm): e(id,sal)
    {
        this->comm=comm;
    }
    Salesman()
    {
        this->comm = 1;
    }
    void get_comm()
    {
        cout<<"The commission is"<<this->comm;

    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void display()
    {
        Employee::display();
        get_comm();

    }
    void accept()
    {
        cout<<"Please enter the commission :";
        cin>>this->comm;
        Employee::accept();
        
    }
    protected:
    void display_Salesman()
    {

    }
    void accept_salesman()
    {

    }
    
};

class Sales_Manager: public Manager,Salesman
{
public:
    Sales_Manager(int id,float sal, float comm, float bonus)
    {
        Manager::setsal(sal);
        Salesman::setid(id);
        Salesman::set_comm(comm);
        Manager::setbonus(bonus);
    }

    Sales_Manager()
    {

    }
    void display()
    {
        Manager::display();
        Salesman::get_comm();
        
    }
    void accept()
    {   float comm;
        Manager::accept();
        cout<<"Please enter the commission :";
        cin>>comm;
        Salesman::set_comm(comm);

    }
};

int main()
{   
     Sales_Manager s1;
     s1.accept();
     s1.display();


    return 0;
}








