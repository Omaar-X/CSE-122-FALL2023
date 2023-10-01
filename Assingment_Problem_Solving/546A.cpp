#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost
    int total_cost = w * (w + 1) / 2 * k;

    // Calculate the borrowed money
    int borrowed_money = max(0, total_cost - n);

    cout << borrowed_money << endl;

    return 0;
}
