// Write a program to reverse the digits a number using pointers

#include <iostream>
#include <vector>

void reverseNumber(int *ptr)
{
    std::vector<int> reverse;
    for (int i=10; *ptr >= 1; *ptr /= i)
    {
        reverse.push_back(*ptr % i);
    }

    *ptr = 0;
    int place = 1;
    for (auto it=reverse.rbegin(); it!=reverse.rend(); it++)
    {
        *ptr += (*it) * place;
        place *= 10;
    }
}

int main()
{
    int number;
    std::cout << "Enter a number to reverse its digits:";
    std::cin >> number;

    // Reverse a number block
    int *ptr_num;
    ptr_num = &number;
    reverseNumber(ptr_num);
    std::cout << "The reversed number is: " << *ptr_num;
}
