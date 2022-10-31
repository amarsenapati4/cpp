#include <iostream>
#include<string>
using namespace std;
typedef int i;
typedef float d;
typedef char ch;
typedef string st;
template <typename T>

T greatest(T a, T b, T c, T d)
{
    if (a > b && a > c && a > d)
    {
        cout << a << " "
             << "is Greater";
    }
    else if(b > a && b > c && b > d)
    {
        cout << b << " "
             << "is Greater";
    }
    else if(c > a && c > b && c > d)
    {
        cout << c << " "
             << "is Greater";
    }
    else
    {
        cout << d << " "
             << "is Greater";
    }
}

int main(){
    st str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;
    greatest(str1,str2,str3,str4);
}