/*
You are given two non-empty linked lists representing two non-negative
integers. The digits are stored in reverse order and each of their nodes
contain a single digit. Add the two numbers and return it as a linked list.
You may assume the two numbers do no contain any leading zero, except the
number 0 itself.
*/

#include <iostream>
#include <list>

std::list<int> addition(std::list<int> num1, std::list<int> num2)
{
    std::list<int> sum{};
    std::list<int>::iterator it1, it2;
    int operand1, operand2, temp{}, carry{};
    it1 = num1.begin();
    it2 = num2.begin();

    while(it1!=num1.end() || it2!=num2.end() || carry==1)
    {
        // Populate Operand1
        if (it1 != num1.end())
        {
            operand1 = *it1;
            it1++;
        }
        else
        {
            operand1 = 0;
        }

        // Populate Operand2
        if (it2 != num2.end())
        {
            operand2 = *it2;
            it2++;
        }
        else
        {
            operand2 = 0;
        }

        // Add the digits
        temp = carry + operand1 + operand2;

        // Populate carry for next addition
        carry = 0;
        if (temp > 9)
        {
            temp -= 10;
            carry = 1;
        }

        // Update the linked list
        sum.push_back(temp);
    }

    return sum;
}

int main()
{
    std::list<int> Number1 = {1, 3, 4, 5, 7, 0, 4, 3};
    std::list<int> Number2 = {9, 9, 3, 2, 4};
    std::list<int> Sum = addition(Number1, Number2);

    // Print Sum
    for (auto it=Sum.begin(); it!=Sum.end(); it++)
    {
        std::cout << *it;
    }
    std::cout << " is the sum" << '\n';
    return 0;
}
