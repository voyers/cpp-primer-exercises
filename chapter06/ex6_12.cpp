# include <iostream>
# include <string>
# include <vector>
using std::cin;using std::cout;using std::endl;using std::string;

int covert(int &p,int &q)
{
    int temp = p;
    p = q;
    q = temp;
    return 0;
}

int main()
{
    int i,j;
    string s = "输入两个整数";
    cout << s << endl;
    cin >> i >> j;
    covert(i,j);
    cout << "交换后结果为：" << endl;
    cout << i << " " << j <<endl;
    return 0;
}