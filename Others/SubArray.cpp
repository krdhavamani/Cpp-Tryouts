// Given an array of integers, print all sub-arrays with 0 sum

#include <iostream>
#include <vector>

int main()
{
    int a[10] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int sum, size = sizeof(a)/sizeof(a[0]);
    std::vector<std::pair<int,int> > sum_index;

    for(int i=0; i<size; i++)
    {
        sum = a[i];
        for(int j=i+1; j<size; j++)
        {
            sum += a[j];
            if (sum == 0)
            {
                sum_index.push_back(std::make_pair(i,j));
            }
        }
    }

    for(const auto &p:sum_index)
    {
        for(int i=p.first;i<=p.second;i++)
            std::cout << a[i] << '\t';
        std::cout << '\n';
    }

    return 0;
}
