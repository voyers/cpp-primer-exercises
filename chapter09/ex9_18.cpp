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
    string line;deque<string> s;
    while (getline(cin, line))
    {
        s.push_back(line);
    }
    for(const auto &l : s)
    {
        cout << l << endl;
    }
    return 0;
}