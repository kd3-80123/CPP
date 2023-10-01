#include<iostream>
using namespace std;

class Date
{
  
   private:
    int day;
    int month;
    int year;


   public:

    Date()
    {
        day=0;
        month=0;
        year = 0;
    }
    Date(int day,int month,int year)
    {
        this->day =day;
        this->month =month;
        this->year =year;
    }
     int get_day()
     {
        return day;
     }
     void set_day(int day)
     {
        this->day =day;
     }
     int get_month()
     {
        return month;
     }
     void set_month(int month)
     {
        this->month=month;
     }
     int get_year()
     {
        return year;
     }
     void set_year(int year)
     {
        this->year=year;
     }
     void display()
     {
        cout<<day<<"/"<<month<<"/"<<year;
     }
     void accept()
     {
        cout<<"Please enter day";
        cin>>day;
        cout<<"Please enter month";
        cin>>month;
        cout<<"Please enter year";
        cin>>year;
     }
    bool is_leap_year()
    {
          if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
        {
        return true;
            }
    
        else 
        return false;
    }
            
};

class Person
{
private:
    string name;
    string addr;
    Date birth_date;

public:
    Person()
    {
        name="";
        addr="";
    }
    Person(string name, string addr, int day, int month, int year): birth_date( day, month,year)
    {
        this->name;
        this->addr;
        
    }
    string get_name()
    {
        return this->name;
    }
    void set_name(string addr)
    {
        this->addr = addr;
    }
    string get_addr()
    {
        return this->addr;
    }

    void set_addr()
    {
        this->addr= addr;
    }
    void get_birth_date()
    {
        cout<<"\n The date of birth";
        birth_date.display();

    }
    void set_birth_date()
    {
        birth_date.accept();
    }
    void display()
    {
        cout<<"\n The name is "<<get_name();
        cout<<"\n The address is "<<get_addr();
        cout<<"\n The Date of birth is ";
        get_birth_date();
    }
    void accept()
    {
        cout<<"Please enter name ";
        cin>>name;
        cout<<"Please enter address ";
        cin>>addr;
        cout<<"Please enter Date of birth ";
        birth_date.accept();

    }  
    
}; 

class Employee : public Person

{
    private:
     int id;
     float sal;
     string dept;
     Date Joining;
    
    public:
    Employee()
    {
        id=0;
        sal=0;
        dept="";
    }
    Employee(int id,float sal,string dept, int day,int month,int year) : Joining(day,month,year)
    {
        this->id=id;
        this->sal=sal;
        this->dept=dept;

    }

    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id = id;
    }
    int get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal = sal;
    }
    string get_dept()
    {
        return this->dept;
    }
    void set_dept(string dept)
    {
        this->dept=dept;
    }
    Date get_joining_date()
    {
        return this->Joining;
    }
    void set_joining_date(Date Joining)
    {
        this->Joining=Joining;
    }
    void display()
    {
        cout<<"Employee Id is :"<<get_id();
        cout<<"\n Employee salary is :"<<get_sal();
        cout<<"\n Employee Department is :"<<get_dept();
        cout<<"\n Employee joining is :";
        Joining.display();
        
    }
    void accept()
    {
        cout<<"\n Employee Id is :";
        cin>>id;
        cout<<"\n Employee salary is :";
        cin>>sal;
        cout<<"\n Employee Department is :";
        cin>>dept;
        cout<<"\n Employee joining is :";
        Joining.accept(); 
        

    }


};



int main()
{   
    
    Person * pptr = new Employee;// upcasting other wise the person * pptr = new person is also fine.
    
   // pptr->set_addr();
    
   //pptr->accept();
    //pptr->display();
    Employee * eptr = (Employee *) pptr; // downcastint other wise employee * eptr = new employee is also fine.
    eptr->set_joining_date(Date(11,15,1994));
    cout<<"Joining date is:";
    Date d1=eptr->get_joining_date();
    d1.display();


    
}
