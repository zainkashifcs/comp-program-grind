#include <iostream>
#include <map>
#include <algorithm>

int main()
{
    int t{};
    std::cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n{};
        std::cin >> n;

        std::map<int, int> cnt{};

        for (int j = 0; j < n; j++)
        {
            int x{};
            std::cin >> x;

            cnt[x]++;
        }

        int ans{};

        for (auto entry : cnt)
        {
            int x = entry.first;
            int current = entry.second;
            int previous{};

            if (cnt.count(x - 1))
            {
                previous = cnt[x - 1];
            }

            ans += std::max(0, current - previous);
        }

        std::cout << ans << '\n';
    }

    return 0;
}