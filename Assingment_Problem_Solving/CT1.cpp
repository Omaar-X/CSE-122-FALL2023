#include <iostream>

class Umar {
private:
    double real, imaginary;

public:
    void input() {
        std::cout << "Enter real and imaginary parts: ";
        std::cin >> real >> imaginary;
    }

    void display() {
        std::cout << real << " + " << imaginary << "i";
    }

    Umar operator+(const Umar& other) {
        Umar result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    Umar operator-(const Umar& other) {
        Umar result;
        result.real = real - other.real;
        result.imaginary = imaginary - other.imaginary;
        return result;
    }

    Umar operator*(const Umar& other) {
        Umar result;
        result.real = real * other.real - imaginary * other.imaginary;
        result.imaginary = real * other.imaginary + imaginary * other.real;
        return result;
    }
};

int main() {
    Umar S3, ID118;

    std::cout << "Enter values for 'S3' complex number: ";
    S3.input();

    std::cout << "Enter values for 'ID118' complex number: ";
    ID118.input();

    std::cout << "\nComplex number 'S3': ";
    S3.display();
    std::cout << "\nComplex number 'ID118': ";
    ID118.display();
    std::cout << '\n';

    std::cout << "\nSum: ";
    (S3 + ID118).display();
    std::cout << "\nDifference: ";
    (S3 - ID118).display();
    std::cout << "\nProduct: ";
    (S3 * ID118).display();
    std::cout << '\n';

    return 0;
}

