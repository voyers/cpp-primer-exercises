#include <iostream>
#include <string>
#include <vector>
//声明
using std::cin;using std::cout;using std::endl;
using std::string;using std::vector;
int main()
{
   vector<unsigned> scors(11,0);//初始化一个大小为11的vector，初始值为0
   unsigned grade;//定义一个无符号整型变量grade
    while(cin>>grade)//当输入的grade不为0时，循环继续
    {
         if(grade<=100)//如果grade小于等于100
         {
           *(scors.begin()+grade/10) += 1;//将scors容器中对应的元素加1
         }
    }
    for(auto i = scors.begin(); i!=scors.end();++i)//使用迭代器遍历scors容器
    {
         cout<<*i<<" ";//输出scors容器中的每个元素
    }
    return 0;
}