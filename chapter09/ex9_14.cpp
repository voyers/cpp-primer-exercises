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
    list<const char*> lst;
    vector<string> str;
    lst = {"Hello", "World", "!"};
    str.assign(lst.begin(), lst.end());
    for(auto &s : str)
    {
        cout << s << endl;
    }
    return 0;
}