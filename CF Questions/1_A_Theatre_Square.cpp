// CF 1A - Theatre Square (rating 1000)
// Cover an n x m square with a x a tiles (tiles can go past the edge). How many tiles?
// Tiles along each side = that side / a, ROUNDED UP:
//   if (n % a != 0) then n / a + 1, otherwise n / a (the same for m).
//   % = remainder, / = division. Don't mix them up!
//   Use integer rounding, NOT ceil() (decimals can be inaccurate with huge numbers).
// Answer = tilesN * tilesM.
// LONG LONG everywhere: n and m are up to 1e9, so the answer can reach 1e18,
//   and an int (max ~2.1e9) would overflow.
// No loop needed: it's pure maths.
// Complexity: O(1)


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