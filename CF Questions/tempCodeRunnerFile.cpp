
#include <iostream>
#include <vector>

int search(const std::vector<int>& a, int x) {
    int lo{};
    int hi = static_cast<int>(a.size()) - 1;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] < x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> a = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    std::vector<int> empty;

    std::cout << "23 -> " << search(a, 23) << '\n';
    std::cout << "20 -> " << search(a, 20) << '\n';
    std::cout << "2 -> " << search(a, 2) << '\n';
    std::cout << "91 -> " << search(a, 91) << '\n';
    std::cout << "1 -> " << search(a, 1) << '\n';
    std::cout << "100 -> " << search(a, 100) << '\n';
    std::cout << "Empty array -> " << search(empty, 23) << '\n';
}
