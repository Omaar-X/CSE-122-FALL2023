#include <iostream>

using namespace std;

// BAT ক্লাস ডিফাইন
class BAT {
private:
    float height;

public:
    // উচ্চতা সেট করার মেথড
    void setHeight(float h) { height = h; }

    // উচ্চতা প্রাপ্তির মেথড
    float getHeight() { return height; }
};

// Square ক্লাস ডিফাইন
class Square {
private:
    float side;

public:
    // কনস্ট্রাক্টর
    Square(float s) : side(s) {}

    // চতুর্ভুজের ক্ষেত্রফল প্রাপ্তির মেথড
    float area() { return side * side; }
};

// উচ্চতা মাপার ফাংশন
float width(Square sq) { return sq.area(); }

// মূল ফাংশন
int main() {
    // BAT ক্লাসের একটি অবজেক্ট তৈরি
    BAT myBAT;
    myBAT.setHeight(10.5); // উচ্চতা সেট

    // Square ক্লাসের একটি অবজেক্ট তৈরি
    Square mySquare(7.0);

    // উচ্চতা প্রদর্শন
    cout << "BAT's Height: " << myBAT.getHeight() << endl;

    // ক্ষেত্রফল প্রদর্শন
    cout << "Square's Width: " << width(mySquare) << endl;

    return 0;
}

