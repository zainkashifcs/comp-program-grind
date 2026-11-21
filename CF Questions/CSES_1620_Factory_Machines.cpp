// CSES 1620 - Factory Machines
// Binary search on the answer (time). Closed interval lo<=hi, store ans.
// Upper bound: fastest machine alone makes t products in fastest*t.
// Early break stops the count overflowing.
// Time: O(n log(fastest*t))   Space: O(n)
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
