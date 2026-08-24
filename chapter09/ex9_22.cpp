#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <fstream>
using std::string;using std::vector;using std::cin;using std::cout;
using std::endl;using std::deque;using std::list;

int main()
{
int some_value = 42;
vector<int> iv;
for(int i = 0; i < 100; ++i)
{
    iv.push_back(i);
}
vector<int>::iterator iter = iv.begin(),mid = iv.begin() + iv.size() / 2;
while(iter != mid)
{
    if(*iter == some_value)
    {
        iter = iv.insert(iter, 2 * some_value);
        iter += 2;
        mid = iv.begin() + iv.size() / 2;
    }
    else
    ++iter;
}
for(auto &x : iv)
{
    cout << x << endl;
}
return 0;
}
