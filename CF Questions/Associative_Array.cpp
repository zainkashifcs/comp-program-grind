// Associative Array
// std::map instead of unordered_map: anti-hash tests can make
// unordered_map O(n) per op (TLE). map is O(log n) guaranteed.
// Type 0 k v -> set a[k]=v ; type 1 k -> print a[k] (0 if unset)
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
