#include <iostream>
#include <string>
#include <vector>
//声明
using std::cin;using std::cout;using std::endl;
using std::string;using std::vector;
int main()
{
    int num;//声明一个整型变量
    vector<int> number;//声明一个整型向量
    while (cin >> num)//当输入一个整型数时
    {
        number.push_back(num);//将输入的整型数存入向量中
    }
    cout << "输入的整型数为：" << endl;
    for (auto i : number)//遍历向量中的每一个元素
    {
        cout << i << " ";//输出向量中的每一个元素
    }
    return 0;
}
