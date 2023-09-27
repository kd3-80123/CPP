#include <iostream>
#include <string>

using namespace std;

class Address
{
private:
 string building="building";
 string street="street";
 string city="city";
 int pin=780659;

 public:
    Address()
    {

        cout<<"Address is \n"<<building<<"\n"<<street<<"\n"<<city<<endl;

    }

    Address(string *building, string *street, string *city,int *pin)
    {
      this->building= * building;
      this->street= * street;
      this->city=* city;
      this->pin = * pin;

    }
    void accept()
    {
        cout<<"Please enter building";
        cin>>building;
        cout<<"Please enter street";
        cin>>street;
        cout<<"Please enter city";
        cin>>city;
         cout<<"Please enter pincode";
        cin>>pin;
    }
    
    void display()
    {
        cout<<"\n Address is : \n"<<building<<"\n"<<street<<"\n"<<city;
    }

    string get_building(Address * a1)
    {
        return a1->building ;

    }

    string get_street(Address * a1)
    {
        return  a1->street;
        
    }

    string get_city(Address * a1)
    {
        return a1->city;
    }

    int get_pin(Address * a1)
    {
        return a1->pin;
    }

    void set_building(Address * a1)
    {
         this->building = building;
    }

    void set_street(Address * a1)
    {
        this->street= street;
    }

    void set_city(Address * a1)
    {
        this->city= city;
    }

    void set_pin(Address * a1)
    {
        this->pin = pin;
    }
    

};
int main()
{
    Address a1;
   
    a1.accept();

    a1.display();

    string building = a1.get_building(&a1);

    cout<<"\nBuilding is : "<<building;

   string street = a1.get_street(&a1);

    cout<<"\n street is : "<<street;

    string city=a1.get_city(&a1);

    cout<<"\n city is : "<<street;

   int pin = a1.get_pin(&a1) ;

   cout<<"\n Pin is : "<<pin;

    a1.set_building(&a1);

    a1.set_street(&a1);

    a1.set_city(&a1);

    a1.set_pin( &a1);

     string building2= "Zindal heights";
    string street2="Libra street";
    string city2="conyak";
    int pin2= 785623;
   
    Address a2(&building2,&street2,&city2,&pin2);
  
    a2.display();

  string building1= a2.get_building(&a1);

    cout<<"\n Building is : "<<building1;

   string street1= a2.get_street(&a1);

    cout<<"\n street is : "<<street1;

    string city1=a2.get_city(&a1);

    cout<<"\n city is : "<<city1;

   int pin1= a2.get_pin(&a1) ;

   cout<<"\n Pin is : "<<pin;

    a2.set_building(&a1);

    a2.set_street(&a1);

    a2.set_city(&a1);

    a2.set_pin( &a1);



    return 0;
}