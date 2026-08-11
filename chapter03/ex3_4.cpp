#include <iostream>
#include <string>
//声明
using std::cin;using std::cout;using std::endl;using std::string;
int main()
{
    string line1;string line2;//定义字符串
    getline(cin,line1);getline(cin,line2);//输入字符串
    if(!line1.empty() && !line2.empty())//输入不为空判断
    {
        if(line1 == line2)//相等时
        {
            cout << "相等" << endl;
        }
        else if(line1 > line2)
        {
            cout << line1 << endl;
        }
        else
        {
            cout << line2 << endl;
        }
    }
    return 0;
}