#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <fstream>
#include <iterator>
using std::string;using std::vector;using std::cin;using std::cout;
using std::endl;using std::deque;using std::list;

int main()
{
    //a
    vector <string> word;
    string str;
    while(cin >> str)
    {
        if(!str.empty())
        {
            word.push_back(str);
        } 
    }
    sort(word.begin(),word.end());
    for(auto x : word)
    cout << x << endl;
    //b
    deque <string> words;
    string strs;
    while(cin >> strs)
    {
        if(!strs.empty())
        {
            words.push_back(strs);
        }
    }
    words.pop_front();
    //c
    list <int> num;
    ifstream in("data.txt");
    int n;
    while(in >> n)
    {
        num.push_back(n);
    }
    num.sort();
    for(auto n : num)
    {
        cout << n << endl;
    }
    return 0;
}