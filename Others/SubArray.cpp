// Given an array of integers, print all sub-arrays with 0 sum

#include <iostream>
#include <vector>

void findSum(int a[], int size, int Sum)
{
    int sum;
    std::vector<std::pair<int,int>> sum_index;
    for(int i=0; i<size; i++)
    {
        sum = a[i];
        for(int j=i+1; j<=size; j++)
        {
            if (sum == Sum)
            {
                sum_index.push_back(std::make_pair(i,j-1));
            }
            if (j!=size)
                sum += a[j];
        }
    }

    // print the sub-arrarys
    for(const auto &p:sum_index)
    {
        for(int i=p.first;i<=p.second;i++)
            std::cout << a[i] << '\t';
        std::cout << '\n';
    }
}

int main()
{
    int a[12] = { 3, 4, -7, 0, 0, 3, 1, 3, 1, -4, -2, -2 };
    int sum = 7, size = sizeof(a)/sizeof(a[0]);
    findSum(a, size, sum);
    return 0;
}
