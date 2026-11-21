// CF 474B - Worms
// Prefix sums over pile sizes, then lower_bound for each query.
// Time: O(n + m log n)   Space: O(n)
#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> pre(n);
    for(int i = 0; i < n; i++){
        int a;
        std::cin >> a;
        pre[i] = a + (i ? pre[i-1] : 0);
    }

    int m;
    std::cin >> m;
    while(m--){
        int q;
        std::cin >> q;
        // first pile whose running total reaches q
        std::cout << (std::lower_bound(pre.begin(), pre.end(), q) - pre.begin()) + 1 << '\n';
    }
}
