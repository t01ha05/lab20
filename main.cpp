#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Chair {
    private:
        int legs;
        double prices[3];

    public:
        Chair() {
            legs = (rand() % 2)+ 3;
            for (int i=0; i < 3; ++i) {
                const int MIN = 10000, MAX = 99999;
                prices[i] = (rand() % (MAX - MIN +1) + MIN) / 100.0; 
            }
        }

        Chair

}