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
        Chair(int nunLegs, const double priceArray[3]) {
            leg = numLegs;
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

}