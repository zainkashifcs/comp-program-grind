#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    
    int n{};
    std::cin >> n;

    std::vector<int> arr;

    for(int i = 0; i < n; i++){
        int x {};
        std::cin >> x;

        arr.push_back(x);
    }

    std::sort(arr.begin(), arr.end());

    int count {1};

    for (int j = 1; j < arr.size(); j++){

        if(arr[j] != arr[j-1]){
            count++;
        }
    }
    std::cout << count;

    return 0;

}

