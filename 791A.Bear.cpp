#include <iostream>

int main(){

int years = 0;
int a;
int b;
std::cin >> a;
std::cin >> b;

while(a <= b){
    a= a * 3;
    b= b * 2;
    years++;


}

std::cout << years;

    return 0;
}