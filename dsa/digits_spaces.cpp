#include <bits/stdc++.h>
using namespace std;
int main()
{
    // given a sentence, calculate digits spaces etc
    char ch;
    ch=cin.get();  
    int digits=0;
    int spaces=0;
    int alpha=0;
    
    while (ch!='\n')
    {
        if(ch>='0' and ch<='9')
        {
            digits++;
        }
        else if( (ch>='a' and ch<='z') or (ch>='A' and ch<='Z'))
        {
            alpha++;
        }
        else if (ch=' ' or ch=='\t')
        {
            spaces++;
        }

        ch=cin.get();
    }

    cout<<"alphabet "<<alpha<<endl;
    cout<<"spaces "<<spaces<<endl;
    cout<<"digits "<<digits<<endl;

}