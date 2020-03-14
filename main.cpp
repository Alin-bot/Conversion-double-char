#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
void DoubleToChar(double f, char s[256])
{
    int i=0, rff=0, k=0, uc;
    double cf=f;
    do
    {
        i++;
        f=f*10;
    }
    while (int(f)!=f);

    int ff=int(cf);
    while (ff)
    {
        rff=rff*10+ff%10;
        ff=ff/10;
    }

    while (rff)
    {
        uc=rff%10;
        char c=uc+'0';
        s[k]=c;
        rff=rff/10;
        k++;
    }
    if(i!=0)
        s[k]='.';


    int fractionar = (cf-(int)cf)*pow(10,i);
    rff=0;
    while (fractionar)
    {
        rff=rff*10+fractionar%10;
        fractionar=fractionar/10;
    }

    while (rff)
    {
        s[++k]=rff%10+'0';
        rff=rff/10;
    }
    s[++k]='\0';
}
int main()
{
    double f=34.56
    char s[256];
    DoubleToChar(f,s);
    cout<<s;
}
