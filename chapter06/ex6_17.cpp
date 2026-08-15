# include <iostream>
# include <string>
# include <vector>
#include <cctype>
using std::cin;using std::cout;using std::endl;using std::string;

bool haUpper(const string& p)
{
    for(auto c : p)
    {
        if(c >= 'A' && c <= 'Z')
        {
            return true;
        }
    }
    return false;
}

void covert(string &c)
{
   for(int i = 0; i < c.size(); ++i)
    {
        c[i] = tolower(c[i]);
    }
    return;
}

int main()
{
    string s;
    getline(cin,s);
    haUpper(s);
    if(haUpper(s))
    {
        cout << "The string has upper case letters." << endl;
    }
    else
    {
        cout << "The string has no upper case letters." << endl;
    }
    covert(s);
    cout << "The string after converting to lower case is: " << endl;
    cout << s << endl;
    return 0;
}