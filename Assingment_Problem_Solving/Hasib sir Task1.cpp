#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    static int cur_id;

public:
    Person() {
        cur_id++;
    }

    virtual void getdata() {

        cout <<  "Input Name: ";
        cin >> name;

        cout << "Input Age: ";

        cin >> age;
    }

    virtual void putdata() {
        cout << "Name: " << name << " Age: " << age << " ";
    }
};

int Person::cur_id = 0;

class Professor : public Person {
private:
    int publications;
    int cur_id;

public:
    Professor() : publications(0) {
        cur_id = Person::cur_id;
    }

    void getdata() {
        Person::getdata();

        cout << "Input PUblication Number: ";
        cin >> publications;
    }

    void putdata() {
        cout << "Professor:\n" << "Name: ";
        Person::putdata();
        cout << "\nPublication: " << publications << endl;
    }
};

class Student : public Person {
private:
    int marks[6];
    int cur_id;

public:
    Student() {
        for (int i = 0; i < 6; i++) {
            marks[i] = 0;
        }
        cur_id = Person::cur_id;
    }

    void getdata() {
        Person::getdata();

        cout << "Input marks: \n";

        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() {
        cout << "Student: \n" << "Name: ";
        Person::putdata();
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout << "\nMark: " << sum << " " << "Cur_ID: " << cur_id << endl;
    }
};

int main() {
    int n;
    cin >> n;
    Person *people[n];

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            people[i] = new Professor;
        } else {
            people[i] = new Student;
        }
        people[i]->getdata();
    }

    for (int i = 0; i < n; i++) {
        people[i]->putdata();
    }

    return 0;
}
