#include <iostream>

void solve() {
    int x0, y0, R;
    std::cin >> x0 >> y0 >> R;
    
    // Basic loop checking all possible integer x-coordinates around x0
    for (int x = x0 - R; x <= x0 + R; ++x) {
        int dy_squared = R * R - (x - x0) * (x - x0);
        
        // Find the integer square root manually without using cmath
        int dy = 0;
        while (dy * dy < dy_squared) {
            dy++;
        }
        
        // Check if it forms a perfect square
        if (dy * dy == dy_squared) {
            int y = y0 + dy;
            std::cout << x << " " << y << "\n";
            return; // Found a valid point, move to the next testcase
        }
    }
}

int main() {
    // Fast I/O optimization
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
