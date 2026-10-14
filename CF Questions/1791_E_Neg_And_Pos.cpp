#include <iostream>
#include <cmath>

int main(){

    int t {};
    std::cin >> t;

    for(int i = 0; i < t; i++){

        long long sum{};
        int n {};
        int count {};
        int smallest {2000000000};

        std::cin >> n;

        for(int j = 0; j < n; j++){

            int x;
            std::cin >> x;

            if( x < 0){

                count++;
                sum += abs(x);

                if(abs(x) < smallest){

                    smallest = abs(x);
                }

            }

        }
        #include <iostream>
#include <cmath>

int main(){

    int t {};
    std::cin >> t;

    for(int i = 0; i < t; i++){

        long long sum{};
        int n {};
        int count {};
        int smallest {200000000000};

        std::cin >> n;

        for(int j = 0; j < n; j++){

            int x;
            std::cin >> x;

            if( x < 0){

                count++;
                sum += abs(x);

                if(abs(x) < smallest){

                    smallest = abs(x);
                }

            }

            if(count % 2 == 0){
                std::cout << sum << '\n';
            }
            else{
                std::cout << sum - 2 * smallest << '\n'
            }
        }


    }
}


    }
}