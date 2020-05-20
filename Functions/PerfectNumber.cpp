/*
Define a function named 'perfect' that determines if parameter number is a
perfect number. Use this function in a program that determines and prints all
the perfect numbers between 1 and 1000. [An integer number is said to be a
'perfect' number if its factors, including 1(but not the number itself), sum
to the number. E.g., 6 is a perfect number because 6=1+2+3].
*/

#include <iostream>

bool perfect(int num)
{
    int sum=0;
    for (int i=num/2; i>0; i--)
        if (num%i==0)
            sum+=i;
    return num==sum;
}

int main()
{
    for (int number=1; number<=1000; number++)
        if(perfect(number))
            std::cout << number << '\n';
    return 0;
}
