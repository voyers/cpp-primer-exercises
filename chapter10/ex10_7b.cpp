#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> vec;
    vec.reserve(10);
    for(int i = 0;i < 10;++i)
    {
        vec.push_back(i);
    }
    for(auto x : vec)
    {
        cout << x << " ";
    }
    fill_n(vec.begin(),10,0);
    for(auto n : vec)
    {
        cout << n << " ";
    }
}