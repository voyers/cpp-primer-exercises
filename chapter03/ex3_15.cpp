#include <iostream>
#include <string>
#include <vector>
//声明
using std::cin;using std::cout;using std::endl;
using std::string;using std::vector;
int main()
{
    string line;//声明一个字符串变量
    vector<string> numbers;//声明一个字符串向量
    while (cin >> line)//当输入一个字符串时
    {
        numbers.push_back(line);//将输入的字符串存入向量中
    }
    for(auto s : numbers)//遍历向量中的每个字符串
    {
        cout << s << endl;//输出每个字符串
    }
    return 0;
}