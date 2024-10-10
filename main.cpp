#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Chair {
    private:
        int legs;
        double prices[3];

    public:
        //default constructor
        Chair() {
            legs = (rand() % 2)+ 3; //randomly choose 3 or 4 legs
            for (int i=0; i < 3; ++i) {
                const int MIN = 10000, MAX = 99999;
                prices[i] = (rand() % (MAX - MIN +1) + MIN) / 100.0; 
            }
        }
        //parameter constructor with legs and an array of prices
        Chair(int numLegs, const double priceArray[3]) {
            legs = numLegs;
            for (int i=0; i<3; ++i) {
                prices [i] = priceArray[i];
            }
        }
        //setter for legs
        void setLegs(int numLegs){
            legs = numLegs;
        }
        //setter for prices
        void setPrices(const double priceArray[3]) {
            for (int i = 0; i < 3; ++i) {
                prices[i] = priceArray[i];
            }
        }
        //print method to display chair details
        void printDetails() const{
            cout << "Chair with " << legs << " legs and prices: ";
            for ( int i = 0; i < 3; ++i) {
                cout << "$" << prices[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    srand(time(0)); //seed for random num. gen.

    //first, create a defualt chair object and use setters
    Chair chair1;
    chair1.printDetails(); //random values populated
    
    //second, create a Chair object using the parameter constructor
    double pricesArray[3] = {299.99, 450.50, 999.99};
    Chair chair2(4, pricesArray);
    chair2.printDetails();//populated via a parameter constructor
    
    // Third, create an array of Chair objects using the default constructor
    Chair chairArray[3];
    for (int i = 0; i < 3; ++i) {
        chairArray[i].printDetails(); // Random values populated by default constructor
    }
    return 0;
}