// Define a function to print prime factors of a numbers

#include <iostream>

void PrimeFactors(int num)
{
    bool isprime, found=false;
    std::cout << "Listing the Prime Factors..." << '\n';
    for(int i=num; i>1; i--)
    {
        // To find if the number is prime
        isprime = true;
        for(int j=i-1; j>1; j--)
        {
            if(i%j==0)
            {
                isprime = false;
                break;
            }
        }

        // Condition to check prime and factor
        if(isprime && num%i==0)
        {
            std::cout << i << '\n';
            found=true;
        }
    }

    // Report if no prime factors are found
    if(!found)
        std::cout << "There are no Prime Factors for the number" << '\n';

}

int main()
{
    int number;
    std::cout << "Enter an integer greater than 1:";
    std::cin >> number;
    PrimeFactors(number);
}
