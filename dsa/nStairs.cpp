#include<bits/stdc++.h>
using namespace std;

int jump(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }

    int ans=jump(n-1)+jump(n-2);
    return ans;
}

int main()
{
    int n=3;
    cout<<jump(3);
}