
#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Constructor to initialize values
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading unary minus (-) operator
    void operator-() {
        feet--;
        inch--;

        cout << "\nFeet & Inches (Decrement): "
             << feet << "'" << inch;
    }
};

int main() {
    Distance d1(8, 9);

    // Calling overloaded unary minus operator
    -d1;

    return 0;
}
