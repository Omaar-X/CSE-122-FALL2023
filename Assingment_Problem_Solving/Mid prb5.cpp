#include <iostream>

using namespace std;

class SumPrinter {
public:
    // দুটি পূর্ণসংখ্যার যোগফল প্রদর্শন করার মেথড
    void printSum(int a, int b) {
        cout << "Sum of two integers:" << a + b << endl;
    }

    // দুটি লংসংখ্যার যোগফল প্রদর্শন করার মেথড
    void printSum(long a, long b) {
        cout << "Sum of two long integers: " << a + b << endl;
    }
};

int main() {
    SumPrinter sumPrinter;

    int intNum1 = 10, intNum2 = 20;
    sumPrinter.printSum(intNum1, intNum2);

    long longNum1 = 1000, longNum2 = 2000;
    sumPrinter.printSum(longNum1, longNum2);

    return 0;
}

