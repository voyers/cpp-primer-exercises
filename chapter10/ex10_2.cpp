#include <iostream>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    list<string> words;
    int n;
    string word;

    cin >> n;                       // 读入数据个数
    for (int i = 0; i < n; ++i) {
        cin >> word;
        words.push_back(word);
    }

    string target;
    cin >> target;                  // 读入目标值

    cout << count(words.begin(), words.end(), target) << endl;
    return 0;
}
