#include <iostream>
#include <string.h>




int main()
{
    std::string USER = "root";
    std::string PASS = "root";
    std::string USER_INPUT;
    std::string PASS_INPUT;

    std::cout << "Enter username: ";
    std::cin >> USER_INPUT;
    std::cout << "Enter password: ";
    std::cin >> PASS_INPUT;

    if (USER_INPUT == USER && PASS_INPUT == PASS)
    {
        std::cout << "Access granted!" << std::endl;
    }
    else
    {
        std::cout << "Access denied!" << std::endl;
    }
    return 0;
}
