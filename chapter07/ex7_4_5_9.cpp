#include <iostream>
#include <string>
using std::cin;using std::cout;using std::string;using std::endl;
using std::istream;using std::ostream;

class Person
{
    private:
    //数据成员
    string name;       //姓名
    string address;    //地址
    //成员函数
    public:
    string get_name() const {return name;}
    string get_address() const {return address;}
    //友元声明
    friend istream& read(istream &is,Person &human);
    friend ostream& print(ostream &os,const Person &human);
};
istream& read(istream &is,Person &human)
    {
        is >> human.name >> human.address;
        return is;
    }
ostream& print(ostream &os, const Person &human)
    {
        os << human.name << human.address;
        return os;
    }
int main() {
    Person p;
    cout << "请输入姓名和地址：" << endl;
    read(cin, p);
    cout << "您输入的信息是：" << endl;
    print(cout, p) << endl;
    return 0;
}