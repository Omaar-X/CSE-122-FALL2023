#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int stones_to_remove = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            stones_to_remove++;
        }
    }

    cout << stones_to_remove << endl;

    return 0;
}
