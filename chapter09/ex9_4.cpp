#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <fstream>
using std::string;using std::vector;using std::cin;using std::cout;
using std::endl;using std::deque;using std::list;

bool search(const vector<int> &v, const int &n)
{
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if(*it == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector <int> v ={1,2,3,4,5,6,7,8,9};
    int n;
    cin >> n;
    if(search(v,n))
    cout << "Found" << endl;
    else
    cout << "Not Found" << endl;
    return 0;
}