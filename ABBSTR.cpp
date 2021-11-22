#include <iostream>
#include <iomanip>
#include<string>
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("ABBSTR.INP", "r", stdin);
    freopen("ABBSTR.OUT","w",stdout);
    string s;
    cin >>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]<=90)
            s[i]= char(s[i]+32);
        switch(s[i])
        {
        case 'a':
        case 'i':
        case 'e':
        case 'o':
        case 'u':
        case 'y':
            s.erase(i,1);
            i--;
            break;
        default:
            s.insert(i,".");
            i++;
            break;

        }
    }
    cout << s;
}




