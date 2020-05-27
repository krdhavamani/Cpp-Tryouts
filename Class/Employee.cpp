/*
Write a program by creating an 'Employee' class having the following functions and print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as parameters
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of work per day is more than 6 hours.
*/

#include <iostream>

class Employee
{
    int salary, workHours;

    void getInfo()
    {
        std::cout << "Enter the salary of the employee:";
        std::cin >> salary;

        std::cout << "Enter the number of work hours per day for employee:";
        std::cin >> workHours;
    }

    void AddSal()
    {
        if (salary < 500)
            salary += 10;
    }

    void AddWork()
    {
        if (workHours > 6)
            salary += 5;
    }
}
