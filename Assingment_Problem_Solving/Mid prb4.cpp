#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    float cgpa;

public:
    // প্যারামিটারাইজড কনস্ট্রাক্টর
    Student(string n, int i, float c) : name(n), id(i), cgpa(c) {}

    // ছাত্রের সিজিপিএ পেতে মেথড
    float getCGPA() { return cgpa; }
};

// সংখ্যা অবজেক্টের গড় সিজিপিএ গণনা করতে ফাংশন
float calculateAverageCGPA(Student students[], int count) {
    float totalCGPA = 0;
    for (int i = 0; i < count; ++i) totalCGPA += students[i].getCGPA();
    return totalCGPA / count;
}

int main() {
    Student students[2] = {{"Alice", 1, 3.8}, {"Bob", 2, 3.6}};
    cout << "Average CGPA of all students: " << calculateAverageCGPA(students, 2) << endl;
    return 0;
}

