#include <iostream>
#include <string>
#include <vector>
//声明
using std::cin;using std::cout;using std::endl;
using std::string;using std::vector;
int main()
{
    int num;//定义一个整数变量
    vector<int> number;//定义一个整数向量
    cout << "请输入一个整数：";
    while(cin >> num)//输入整数
    {
        number.push_back(num);//将输入的整数添加到向量中
    }    
    
    for(auto i = number.begin(); i != number.end(); ++i)//遍历向量
    {
        cout << *i << endl;//输出向量中的整数
    }
    return 0;
}
