#include <iostream>
using namespace std;
class tollBooth{
    unsigned int totalCars;
    double totalCash;
        public:
        tollBooth() : totalCars(0), totalCash(0.0){}
        void payingCar() { totalCars++; totalCash+= 0.50; }
        void Nopecar() { totalCars++; }
        void display() {
            cout << "Cars: " << totalCars << ", Cash: $" << totalCash << endl;
        }
};