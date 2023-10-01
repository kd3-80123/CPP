#include <iostream>

class TollBooth 
{
private:
    unsigned int totalCars;
    double totalMoney;

public:
    
    TollBooth() : totalCars(0), totalMoney(0.0) {}

    
    void payingCar() {
        totalCars++;
        totalMoney += 0.50;
    }

    
    void nopayCar() {
        totalCars++;
    }

    
    void printOnConsole() {
        std::cout << "Total Cars: " << totalCars << std::endl;
        std::cout << "Total Money Collected: $" << totalMoney << std::endl;
        std::cout << "Number of Paying Cars: " << totalMoney / 0.50 << std::endl;
        std::cout << "Number of Non-Paying Cars: " << totalCars - (totalMoney / 0.50) << std::endl;
    }
};

int main() {
    TollBooth tollbooth;

    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            tollbooth.payingCar();
        } else {
            tollbooth.nopayCar(); 
        }
    }

    
    tollbooth.printOnConsole();

    return 0;
}
