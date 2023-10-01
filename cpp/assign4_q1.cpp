#include<iostream>
using namespace std;

class Time{
    private:

    int Hr;
    int min;
    int sec;
    public:
    Time()
    {   
        Hr=0;
        min=0;
        sec=0;
    }   

    Time(int h,int m,int s)
    {
        this->Hr = h;
        this->min = m;
        this->sec = sec;

    }

    int getHour()
    {
        return this->Hr;
    }

    int getMinute()
    {
        return this->min;
    }

    int getSeconds()
    {
        return this->sec;
    }

    void printTime()
    {
        cout<< "The time is:"<<Hr<<min<<sec<<endl;
    }

    void setHour(int Hr)
    {
        this->Hr = Hr;
    }
    int setMinute(int min)
    {
        this->min = min;

    }
    int setSeconds(int sec)
    {
        this->sec = sec;
    }

};

int main()
{
    int hr,min,sec;

    Time **arr = new Time *[2];
    for (int i=0; i<2;i++)
        arr[i] = new Time();
    

    arr[0]->getHour();
    arr[0]->getMinute();
    arr[0]->getSeconds();
    arr[0]->printTime();
    arr[0]->setHour(hr);
    arr[0]->setMinute();
    arr[0]->setSeconds();





    return 0;

}