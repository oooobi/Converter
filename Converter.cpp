#include <iostream>

int main()
{
    double dollars;
    std::cout << "Input dollars amount. \n";
    std::cin >> dollars;

    double naira = dollars * 375;

    std::cout << dollars << " dollars is equal to " << naira << " naira.\n";
}