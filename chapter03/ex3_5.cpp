#include <iostream>
#include <string>
//声明
using std::cin;using std::cout;using std::endl;using std::string;
int main()
{
    string line1; string line2; string line;
    if(!cin)
    {
        cout << "输入错误" << endl;
        return 1;
    }
    cout << "请输入第一行字符串:" << endl;
    getline(cin, line1);
    cout << "请输入第二行字符串:" << endl;
    getline(cin, line2);
    cout << "两行字符串连接后的结果为:" << endl;
    line = line1 + line2;
    cout << line << endl;
    cout << "分隔结果" << endl;
    cout << line1 + " " + line2 << endl;
    return 0;
}