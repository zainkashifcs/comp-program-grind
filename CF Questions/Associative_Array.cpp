// Associative Array
// Problem: Associative Array
// Tags: data structures, maps
// Idea: q queries. "0 k v" sets a[k] = v; "1 k" prints a[k] (0 if it was never set).
//   Keys go up to 1e18, so no plain array: store them in a map.
//   Complexity: O(q log q) time, O(q) space.
// Lesson: Use std::map, not unordered_map. Anti-hash tests can force unordered_map
//   to O(n) per operation (TLE); std::map is O(log n) guaranteed.


#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int q;
    std::cin >> q;
    std::map<long long, long long> a;
    while(q--){
        int type;
        long long k;
        std::cin >> type >> k;
        if(type == 0){
            long long v;
            std::cin >> v;
            a[k] = v;
        } else {
            auto it = a.find(k);
            std::cout << (it == a.end() ? 0 : it->second) << '\n';
        }
    }
}
