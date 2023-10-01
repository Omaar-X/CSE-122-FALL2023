#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    string result = "";
    for (char c : input) {
        char lower_c = tolower(c);  // Convert to lowercase for easy comparison
        if (lower_c != 'a' && lower_c != 'o' && lower_c != 'y' && lower_c != 'e' && lower_c != 'u' && lower_c != 'i') {
            result += '.';
            result += lower_c;
        }
    }

    cout << result << endl;

    return 0;
}
