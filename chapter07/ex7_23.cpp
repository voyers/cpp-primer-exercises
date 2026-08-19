#include <iostream>
#include <string>
using std::string;
class Screen
{
    using pos = std::string::size_type ;
    private:
    pos height = 0; //gao
    pos width = 0;  //kuan
    std::string contents;  //zifu
    pos cursor = 0;        //guangbiao
    public:
    Screen() = default;
    Screen(pos ht,pos wt) : height(ht),width(wt),contents(ht * wt,' '){};
    Screen(pos ht,pos wt,char c) : height(ht),width(wt),contents(ht * wt,c){};
    Screen& move(pos r,pos c)
    {
        cursor = r * width + c;
        return  *this;
    }
    const Screen& display(std::ostream &os) const
    {
        os << contents;   
        return *this;
    }
    Screen& set(char ch)
    {
        contents [cursor] = ch;
        return *this;
    }
};

int main()
{
    Screen s (5,5,'c');
    s.move(2,3).set('a');
    s.display(std::cout);
    return 0;
}