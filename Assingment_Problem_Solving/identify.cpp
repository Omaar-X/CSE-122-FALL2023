#include <iostream>

using namespace std;

class Sum {
private:
    int a;

public:
    Sum(int val) : a(val) {}

    Sum add(const Sum& sa, const Sum& sb) {
        Sum sc(a + sa.a + sb.a);
        return sc;
    }

    int getA() const {
        return a;
    }
};

int main() {
    Sum s1(50), s2(100), s3(0);
    s3 = s3.add(s1, s2);
    cout << "Value of a: " << s3.getA() << endl;
    return 0;
}
