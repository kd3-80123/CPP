#include <iostream>

using namespace std;

class Product
{   
    private:

    int id;
    string title;
    double price;
   
    
    public:
     string type;

     Product()
     {
        this->id=1;
        this->title="";
        this->price=0;
        

     }
     string gettype()
   {
        return this->type;
   }
     double getPrice()
   {
        return this->price;
   }
    
    
     void accept()
     {
        cout<<"Please the ID";
        cin>>this->id;
        cout<<"Please the Title";
        cin>>this->title;
        cout<<"Please enter the price";
        cin>>this->price;
     }

     void display()
     {
        cout<<"The Title is "<<this->title;
        cout<<"The Title is "<<this->price;
        cout<<"The Title is "<<this->id;

     }

};

class Book : public Product
{
    private:
        string author;
    public:
        Book()
        {
            this->author="";
            type='B';
        }
   void accept()
   {
    cout<<"Please enter the author";
    cin>>this->author;
    Product::accept();

   }
   
};

class Tape :public Product
{
private:
    string artist;
public: 
    Tape()
        {   
            this->artist="";            
            type='T';

        }
        void accept()
   {
    cout<<"Please enter the author";
    cin>>this->artist;
    Product::accept();

   }
    
    
};



int main()
{   
    int choice;
    cout<<"1. Please enter details for 3 Products"<<endl;
    cout<<"2. Exit"<<endl;
    cin>>choice;
    while(choice!=2)
    {
   
    Product *arr[3];

    cout<<"Please enter details for 3 Products"<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<"1. For the enter of book"<<endl;
        cout<<"2. Fort the entry of Tape"<<endl;
        
    int choice;
    cin>>choice;
        switch (choice)
        {
            case 1:
            arr[i] = new Book();    
            arr[i]->accept();
            
            
            break;

            case 2:
            arr[i]= new Tape;
            arr[i]->accept();
            break;
              
            default:
            break;
        }
    }
    cout<<"The Total for your Purchase is"<<endl;
    
    float bill=0,booktotal=0,tapetotal=0;
    for (int i=0;i<3;i++)
    {
           
        if(arr[i]->gettype()== "B")
            booktotal=booktotal + arr[i]->getPrice();

        else
            tapetotal=tapetotal+ arr[i]->getPrice();
    
    }
    bill= 0.95*booktotal + 0.90*tapetotal;
    cout<<bill<<endl;

    for (int i = 0; i < 3; i++)
        delete arr[i];

        choice=2;
    }


}



