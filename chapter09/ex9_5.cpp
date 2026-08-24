#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <fstream>
using std::string;using std::vector;using std::cin;using std::cout;
using std::endl;using std::deque;using std::list;

vector<int>::const_iterator finvalue(vector<int>::const_iterator beg,vector<int>::const_iterator end,int value)
{
    while (beg != end)
    {
        if (*beg == value)
        {
            return beg;
        }

        ++beg;
    }

    return end;
}

int main()
{
    vector <int> v ={1,2,3,4,5,6,7,8,9};
    int n;
    cin >> n;
    auto result = finvalue(v.begin(), v.end(), n);
    if(result != v.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}