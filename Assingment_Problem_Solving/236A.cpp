#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> distinctCharacters;

    // Count distinct characters in the username
    for (char c : username) {
        distinctCharacters.insert(c);
    }

    // Check if the number of distinct characters is even or odd
    if (distinctCharacters.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
