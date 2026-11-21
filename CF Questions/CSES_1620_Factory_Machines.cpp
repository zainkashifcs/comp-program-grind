// CSES 1620 - Factory Machines
// Problem: CSES 1620 Factory Machines
// Link: https://cses.fi/problemset/task/1620
// Tags: binary search on the answer
// Idea: n machines, machine i makes one product every k[i] seconds. Minimum time to make t products?
//   In time T we make sum(T / k[i]) products, and that only grows as T grows (monotone),
//   so binary search on T. Upper bound: the fastest machine alone makes t in fastest * t.
//   Complexity: O(n log(fastest * t)) time, O(n) space.
// Lesson: Closed interval (lo <= hi) with a stored ans. Break out of the counting loop
//   as soon as made >= t, otherwise the sum can overflow even a long long.


#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n, t;
    std::cin >> n >> t;
    std::vector<long long> k(n);
    for(auto &x : k) std::cin >> x;
    long long fastest = *std::min_element(k.begin(), k.end());

    long long low = 1, high = fastest * t, ans = high;
    while(low <= high){
        long long mid = low + (high - low) / 2;
        long long made = 0;
        for(long long x : k){
            made += mid / x;
            if(made >= t) break;
        }
        if(made >= t){ ans = mid; high = mid - 1; }
        else low = mid + 1;
    }
    std::cout << ans << '\n';
}
