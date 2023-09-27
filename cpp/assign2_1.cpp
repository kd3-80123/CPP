#include<iostream>

using namespace std;

namespace NStudent
{
class Student 
{
   private: 

    int roll_no;
    string name="student";
    int marks;
    public:   

     void initStudent()
     {

        roll_no= 1;
        
        marks = 0;
        cout<< " BY default Student roll no is :"<<roll_no<<" name is "<<name<<" marks are "<<marks<<endl;

     }

     void printStudentOnConsole()
     {

        cout<< "\n Student name is :"<<name<<"\n  His roll no is "<<roll_no<<"\n His marks are "<<marks<<endl;


     }
     void acceptStudentFromConsole()
     {

        cout<<"Please Enter the Students roll no , name and marks"<<endl;
        cin>>roll_no>>name>>marks;
        cout<< "Student information is \n Roll No:"<<roll_no<<"\n Name :"<<name<<"\n marks:"<<marks<<endl;
        

     }

};


}

using namespace NStudent;

int main()
{
   NStudent::Student s1;
   s1.acceptStudentFromConsole();
    s1.initStudent();
    s1.printStudentOnConsole();
    

        return 0;
}