// Write a program to find the factorial of a number using pointers

#include <iostream>

unsigned long long int factorial(int num, unsigned long long int *res)
{
    if (num!=1)
    {
        *res = num * factorial(num-1,res);
    }
}

int main()
{
    int number;
    unsigned long long int *result = 1;
    std::cout << "Enter a number to find its factorial:";
    std::cin >> number;
    *result = factorial(number, result);
    std::cout << "Factorial of " << number << " is " << *result;
    return 0;
}
