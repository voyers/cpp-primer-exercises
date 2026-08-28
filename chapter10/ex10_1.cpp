#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;using std::vector;using std::cout;using std::cin;using std::endl;

int main()
{
    vector <int> num;int n;
    int size;
    cin >> size;

    for(int i = 0;i < size;++i)
    {
        cin >> n;
        num.push_back(n);
    }

    int val;
    cin >> val;

    int reslut = count(num.begin(),num.end(),val);
    cout << reslut << endl;
    return 0;
}
