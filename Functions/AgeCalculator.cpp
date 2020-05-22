/*
Write a function that takes your date of birth in YYYY, MM and format(seperated
by spaces) as input as well as the current date, in the same format and
calculates your age in years, months and days. You must check for leap years
also. Write a separate function to check for leap year.
*/

#include <iostream>
#include <vector>
#include <cmath>

std::vector<int> inputDate()
{
    int input = 0;
    std::vector<int> date;
    for (int i=0; i<3; i++)
    {
        std::cin >> input;
        date.push_back(input);
    }
    return date;
}

bool leapYear (int lyear)
{
    return !(lyear%4);
}

int dateCompensator(std::vector<int> cDate)
{
    int dateComp;
    if (cDate.at(1) == 3)
    {
        if(leapYear(cDate.at(0)))
        {
            dateComp = 29;
        }
        else
        {
            dateComp = 28;
        }
    }
    else if (cDate.at(1) > 7)
    {
        if (cDate.at(1)%2 == 0)
        {
            dateComp = 31;
        }
        else
        {
            dateComp = 30;
        }
    }
    else
    {
        if(cDate.at(1)%2 == 0)
        {
            dateComp = 30;
        }
        else
        {
            dateComp = 31;
        }
    }
    return dateComp;
}

void calculateAge()
{
    std::vector<int> dateofBirth, currentDate, compensator, leapYears;
    std::cout << "Enter your date of birth(YYYY MM DD[separated by spaces]): ";
    dateofBirth = inputDate();
    std::cout << "Enter the current date(In same format): ";
    currentDate = inputDate();

    // Overall Logic for Age
    if (currentDate.at(1) > dateofBirth.at(1))
    {
        if (currentDate.at(2) >= dateofBirth.at(2))
        {
            compensator = { 0, 0, 0};
        }
        else
        {
            compensator = { 0, -1, dateCompensator(currentDate)};
        }
    }
    else if (currentDate.at(1) < dateofBirth.at(1))
    {
        if (currentDate.at(2) >= dateofBirth.at(2))
        {
            compensator = { -1, 12, 0};
        }
        else
        {
            compensator = { -1, 11, dateCompensator(currentDate)};
        }
    }
    else
    {
        if (currentDate.at(2) >= dateofBirth.at(2))
        {
            compensator = { 0, 0, 0};
        }
        else
        {
            compensator = { -1, 11, dateCompensator(currentDate)};
        }
    }

    // Finding Leap years
    for (int i=currentDate.at(0); i>=dateofBirth.at(0); i--)
    {
        if (leapYear(i))
        {
            leapYears.push_back(i);
        }
    }
    // Final Calculation
    int months = std::abs(compensator.at(1) + currentDate.at(1) - dateofBirth.at(1));
    int days = std::abs(compensator.at(2) + currentDate.at(2) - dateofBirth.at(2));
    int years = std::abs(compensator.at(0) + currentDate.at(0) - dateofBirth.at(0));

    // Output the Results
    std::cout << "Your age is " << years << " years " << months << " months " << days << " days " << '\n';
    if (leapYears.size())
    {
        std::cout << "Between the given years, these are leap years:" << '\n';
        for (int i=leapYears.size()-1; i>=0; i--)
        {
            std::cout << leapYears.at(i) << '\n';
        }
    }
    else
    {
        std::cout << "Between the given years, there are no leap years" << '\n';
    }
}

int main()
{
    calculateAge();
    return 0;
}
