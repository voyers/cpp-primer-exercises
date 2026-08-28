#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec;
    list<int> lst;
    int i;

    while (cin >> i)
    {
        lst.push_back(i);
    }

    cout << "lst size = " << lst.size() << endl;

    vec.resize(lst.size());

    cout << "vec size = " << vec.size() << endl;

    copy(lst.cbegin(), lst.cend(), vec.begin());

    cout << "copy done" << endl;

    for (auto n : vec)
    {
        cout << n << " ";
    }

    cout << endl;

    return 0;
}