#include <iostream>

int main(){

    int t {};
    std::cin >> t;

    for (int i = 0; i < t ; i++){
        int x {};
        int y {};
        int R {};

        std::cin >> x;
        std::cin >> y;
        std::cin >> R;

        std::cout << x + R << ' ' << y << '\n';
        



    }
    




    return 0;
}