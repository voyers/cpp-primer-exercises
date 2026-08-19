#include <iostream>
#include <string>
using std::cin;using std::cout;using std::string;using std::endl;

struct Salse_data
{
    //数据成员
    string bookNo;//书号
    unsigned units_sold;//售出数量
    double revenue;//单价
    //构造函数
    Salse_data(string s = " ",int n = 0,double p = 0.0):bookNo(s),units_sold(n), revenue(p){};
    //成员函数
    string isbn() const;
    Salse_data& combine(const Salse_data& rhs);
};

Salse_data& Salse_data::combine(const Salse_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

string Salse_data::isbn() const
{
    return bookNo;
}

int main()
{
    Salse_data total;
    if(cin >> total.bookNo >> total.units_sold >> total.revenue)
    {
        Salse_data trans;
        while(cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue
                 << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else
    {
        cout << "No data" << endl;
        return -1;
    }
    return 0;
}