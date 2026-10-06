#include <iostream>
#include <string>

int main(){

    int n;
    std::cin >> n;

    std::string x;
    std::cin >> x;

    int countA {0};
    int countD {0};

    for(int i = 0; i < n; i++){

    if(x[n] == 'A' > x[n] == 'D'){

        countA=countA + 1
        
    }

    else if(x[n] == 'D' > x[n] == 'A'){

        countD=countD + 1

    }
    
    else{

        std::cout<< "Frienship"
    }


    }


    return 0;
}