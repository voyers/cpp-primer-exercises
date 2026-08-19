#include <iostream>
#include <string>
using std::cin;using std::cout;using std::string;using std::endl;
using std::istream;using std::ostream;
struct Salse_data
{
    //数据成员
    private:
    string bookNo;//书号
    unsigned units_sold;//售出数量
    double revenue;//单价
    //构造函数
    public:
    Salse_data(std::istream &is) {read(is, *this);}   // 调用友元函数 read 来填充数据
    Salse_data(string s = " ",int n = 0,double p = 0.0):bookNo(s),units_sold(n), revenue(p){};
    //成员函数
    string isbn() const;
    Salse_data& combine(const Salse_data& rhs);
    friend istream& read(istream &is,Salse_data& book);
    friend ostream& print(ostream &os,const Salse_data& book);
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

istream& read(istream &is,Salse_data &book)
    {
        is >> book.bookNo >> book.units_sold >> book.revenue;
        return is;
    }
ostream& print(ostream &os, const Salse_data &book)
    {
        os << book.bookNo << book.units_sold << book.revenue;
        return os;
    }

int main()
{
    Salse_data total(cin);
    if(!total.isbn().empty())
    {
        while(cin)
        {
            Salse_data trans(cin);
            if(total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(cout,total);
                total = trans;
            }
        }
        print(cout,total);
    }
    else
    {
        cout << "NO data" << endl;
    }
    return 0;
}