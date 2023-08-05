#include <iostream>
using namespace std;
int main() {
    int n;
    std::cin >> n;

    int problemsSolved = 0;

    for (int i = 0; i < n; ++i) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        // If the sum of sure views is greater than or equal to 2, increment the count
        if (petya + vasya + tonya >= 2) {
            ++problemsSolved;
        }
    }

    std::cout << problemsSolved << std::endl;

    return 0;
}

