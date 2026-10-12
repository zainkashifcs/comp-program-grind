#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int t {};
    std::cin >> t;

    for(int i = 0; i < t; i++ ){

        int n {};
        std::cin >> n;

        std::vector<int> a;

        for(int j = 0; j < n; j++){

            int x{};
            std::cin >> x;

            a.push_back(x);
        }

        std::sort(a.begin(), a.end());
        bool ok = true;

        for(int k = 0; k < a.size() - 1; k++){
            if (a[k + 1] - a[k] >1){
                ok = false;
            }
        }

        if (ok){
            std::cout << "YES\n";
        } else{
            std::cout << "NO\n";
        }




    }




    return 0;
}