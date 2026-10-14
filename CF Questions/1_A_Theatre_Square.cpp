#include <iostream>

int main(){

    long long n {};
    long long a {};
    long long m {};
    long long total {};

    std:: cin >> n;
    std:: cin >> m;
    std:: cin >> a;

    if (n % a != 0){
        n = n / a + 1;
    }
    
    else{
        n = n / a;
    }

    if( m % a != 0){

        m = m / a + 1;
    }

    else{
        
        m= m / a ;
    }

    total = m * n;
    std::cout << total;
    


    return 0;
}