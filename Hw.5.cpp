#include <iostream>

int main() {
    int highest = -1000000000;
    int x;
    std::cin >> x;

    for (int i = 1; i <= x; i++) {
        int a;
        std::cin >> a;
        if (a > highest) {
            highest = a;
        }
    }

    std::cout << highest;
    return 0;
}
