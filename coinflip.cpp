#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int num = rand() % 2;

    if (num == 0)
    {
        cout << "Heads\n";
    }

    else
    {
        cout << "Tails\n";
    }

    return 0;
}