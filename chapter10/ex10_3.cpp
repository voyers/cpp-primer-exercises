#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector <int> num;
    int n;
    cin >> n;
    for(int i = 0;i < n;++i)
    {
        int number;
        cin >> number;
        num.push_back(number);
    }
    int sum = accumulate(num.begin(),num.end(),0);
    cout << sum << endl;
    return 0;
}