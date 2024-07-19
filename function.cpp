#include <vector>
#include <iostream>

using namespace std;

int f(int a, int b)
{
    vector<int> prime_list{};

    for(int i = a; i < b; ++i)
    {
        int factor_count = 0;
        for(int j = 2; j < i/2; ++j){
            if(i%j == 0){
                ++factor_count;
            }
            //return factor_count;
        }
        if(factor_count == 0){
            prime_list.push_back(i);
        }
    }
    for(int i: prime_list){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}