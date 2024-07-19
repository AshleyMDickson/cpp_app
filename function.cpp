#include <vector>
#include <iostream>

using namespace std;

int f(int a, int b)
{
    vector<int> factors{};

    for(int i = a; i < b; ++i)
    {
        
        factors.push_back(i);
    }

    return 0;
}