#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int t{};
    std::cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        int n{};
        std::cin >> n;
        std::string s;
        std::cin >> s;
        std::vector<int> pile;      // fresh for each test case
        std::vector<int> unprinted; // fresh for each test case

        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
            {

                pile.push_back(i + 1);
            }

            else if (s[i] == '2' && !pile.empty())
            {

                pile.pop_back();
                unprinted.push_back(i + 1);
            }
        }
        for (int j = 0; j < pile.size(); j++)
        {
            unprinted.push_back(pile[j]);
        }

        std::sort(unprinted.begin(), unprinted.end());

        std::cout << unprinted.size() << '\n';

        for (int j = 0; j < unprinted.size(); j++)
        {
            std::cout << unprinted[j] << ' ';
        }

        std::cout << '\n';
    }
        return 0;
    
}