#include<iostream>
using namespace std;

class Box{

private:
    double length;
    double width;
    double height;

public:
    // Empty constructor

    Box(){
    length=0.0;
    width=0.0;
    height=0.0;
    }
// Constructor with parameters
Box(double len, double wid, double hgt) {
        length = len;
        width = wid;
        height = hgt;
    }
double getArea() {
        return 2 * (length * width + width * height + height * length);
    }

};
    int main() {
    // Creating an object using the parameterized constructor
    Box myBox(5.0, 3.0, 4.0);

    // Calculating and displaying the area of the box
    double area = myBox.getArea();
    cout << "Area of the box: " << area << std::endl;

    return 0;
}

