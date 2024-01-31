
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter whole number" << std::endl;

    while (std::cin >> n && n != 0)
    {
        if (n % 2 == 0)
        {
            std::cout << "even" << std::endl;
        }
        else
        {
            std::cout << "odd" << std::endl;
        }
        std::cout << "Enter 0 for ending program" << std::endl;

    }
}
