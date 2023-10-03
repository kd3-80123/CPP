#include <iostream>
using namespace std;
class Distance
{
private:
    float feet;
    float inches;

public:
    Distance()
    {
        this->feet=0;
        this->inches=0;
    }
    Distance(float feet, float inches)
    {
        this->feet= feet;
        this->inches= inches;
    }

    Distance operator+ (Distance d2)
    {
        Distance result;
        result.feet=this->feet + d2.feet;
        result.inches=this->inches + d2.inches;
        return result;
    }

    inline void operator>>(istream &in)
    {
        cout<<" Enter the feet";
        in>>this->feet;
        cout<<"Enter the inches";
        in>>this->inches;

    }
    friend void operator<<(ostream &out,Distance &d);
    friend void operator==(Distance d1,Distance d2);
    friend void operator-(Distance d);

    void operator+()
    {
        feet ++ ;
        inches ++;
        cout<<" Feet and inches incremented"<<feet<<" and " <<inches;
    }
};
void operator-(Distance d)
{
    d.feet --;
    d.inches --;
    cout<<" Feet and inches decremented"<<d.feet<<" and " <<d.inches<<endl;
}

void operator<<(ostream &out,Distance &d)
{
    out<<"Distnace is "<<d.feet<<" feet " << d.inches << " inches " <<endl;

}


void operator==(Distance d1,Distance d2)
{
    if(d1.feet==d2.feet)
    cout<<" Feet are same"<<endl;
    else
    cout<<" Feet are not same"<<endl;

    if(d1.inches==d2.inches)
    cout<<" Inches are same "<<endl;
    else
    cout<<"Inches are not same"<<endl;
}
int main()
{
    Distance d1(5.5,6.6);
    Distance d2(8.5,6.5);
    cout<<d1;
    cout<<d2;
    d1==d2;
    +d1;
    -d2;


    return 0;
}