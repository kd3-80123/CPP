#include <iostream>
using namespace std;


class Box {
private:
    double length;
    double width;
    double height;

public:
    
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    
    double calculateVolume() {
        return length * width * height;
    }
};

int main() 
{
     int choice;
    do{
        cout << "Menu:"<< endl;
        cout << "1.Calculate Box Volume"<< endl;
        cout << "2. Quit"<< endl;

       
        cout <<" Enter your choice (1/2):";
        cin >> choice;

        if (choice == 1) {
            double length, width, height;
            cout << "Enter the length of the box:";
            cin >> length;
            cout << "Enter the width of the box: ";
            cin >> width;
            cout << "Enter the height of the box:  ";
            cin >> height;

            
        Box box(length, width, height);
            double volume = box.calculateVolume();
            cout << "The volume of the box is  " << volume << " cubic units.\n" << endl;
        } else if (choice == 2) {
            cout << "Goodbye! " << endl;
            break;
        } else {
            cout << "Invalid choice. Please select a valid option" << endl;
        }
    }while (choice!=2);
    

    return 0;
}
