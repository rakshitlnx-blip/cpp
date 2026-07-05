#include <iostream>

int main()
{
    char grade;

    std::cout << "Write your grade (A, B, C, D, F): ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "You are GOAT!";
        break;

    case 'B':
        std::cout << "You are GOOD!";
        break;

    case 'C':
        std::cout << "Average performance.";
        break;

    case 'D':
        std::cout << "You passed.";
        break;

    case 'F':
        std::cout << "You failed.";
        break;

    default:
        std::cout << "Invalid grade!";
    }

    return 0;
}
