#include <iostream>
using namespace std;
int main() {
    int w;
    std::cin >> w;

    // Check if the weight is odd or less than 2
    if (w % 2 != 0 || w == 2) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
    }

    return 0;
}
