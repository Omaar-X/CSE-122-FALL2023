#include <iostream>
#include <cmath>
using namespace std;

class AustraliaCircleField {
private:
    double radius;

public:
    AustraliaCircleField(double r = 100.0) : radius(r) {}

    void setRadius(double r) { radius = r; }
    double getArea() { return M_PI * radius * radius; }
    double getRadius() { return radius; }
};

void testAustraliaCircleField() {
    AustraliaCircleField australia1(100.0), australia2(120), australia3(240);

    cout << "Australia 1 - Radius: " << australia1.getRadius() << ", Area: " << australia1.getArea() << endl;
    cout << "Australia 2 - Radius: " << australia2.getRadius() << ", Area: " << australia2.getArea() << endl;
    cout << "Australia 3 - Radius: " << australia3.getRadius() << ", Area: " << australia3.getArea() << endl;

    australia2.setRadius(350);
    cout << "Updated Australia 2 - Radius: " << australia2.getRadius() << ", Area: " << australia2.getArea() << endl;
}

int main() {
    testAustraliaCircleField();
    return 0;
}
