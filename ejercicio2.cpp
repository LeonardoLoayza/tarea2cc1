#include <iostream>
int main()
{
    int n;
    int counter = 0;
    std::cout << "N: ";
    std::cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            std::cout << i;
            if (counter < (n / 2 - 1))
            {
                std::cout << ",";
                counter++;
            }
        }
    }

    return 1;
}