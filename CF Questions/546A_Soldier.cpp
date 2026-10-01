#include <iostream>

int main(){

int k {}, n {}, w {};
std::cin >> k >> n >> w;          // same order as the input

int total = k * w * (w + 1) / 2;  // 30 for the example

if (total > n) {                  // not enough money
    std::cout << total - n;       // borrow the difference
} else {                          // enough money
    std::cout << 0;               // borrow nothing
}


    return 0;
}