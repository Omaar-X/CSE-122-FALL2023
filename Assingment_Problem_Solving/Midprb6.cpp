#include <iostream>
using namespace std;

class SumPrinter {
public:
    void printSum(int num1, long num2) {
        cout << "Sum (int, long): " << num1 + num2 << endl;
    }

    void printSum(int num1, int num2, int num3) {
        cout << "Sum (int, int, int): " << num1 + num2 + num3 << endl;
    }
};

int main() {
    SumPrinter sumPrinter;

    int a = 5, b = 10;
    long x = 1000;

    sumPrinter.printSum(a, x); // প্রথম মেথড কল হবে যেখানে একটি int এবং একটি long প্যারামিটার পাস হচ্ছে

    return 0;
}

