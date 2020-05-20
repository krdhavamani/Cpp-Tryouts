// Define a function to print prime factors of a numbers

#include <iostream>

void PrimeFactors(int num)
{
    bool isprime;
    for(int i=num/2; i>1; i--)
    {
        // To find if the number is prime
        isprime = true;
        for(int j=i/2; j>1; j--)
        {
            if(i%j==0)
            {
                isprime = false;
                break;
            }
        }

        // Condition to check prime and factor
        if(isprime && num%i==0)
            std::cout << i << '\n';
    }
}

int main()
{
    int number;
    std::cout << "Enter an integer greater than 1:";
    std::cin >> number;
    if(number==1)
        std::cout << "1 doesnt have any PrimeFactors" << '\n';
    else
        PrimeFactors(number);
}
