#include <iostream>

int main()
{
    int level = 20;

    if (level >= 1 && level <= 5)
    {
        std::cout << "Bronze\n";
    }

    else if (level >= 6 && level <= 10)
    {
        std::cout << "Silver\n";
    }

    else if (level >= 11 && level <= 15)
    {
        std::cout << "Gold";
    }

    else if (level >= 16 && level <= 20)
    {
        std::cout << "Platinum";
    }

    else if (level >= 21 && level <= 25)
    {
        std::cout << "Diamond";
    }
    return 0;
}
