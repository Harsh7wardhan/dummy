#include <bits/stdc++.h>

using namespace std;

int power(int n)
{
    //base
    if(n==0)
    {
        return 1;
    }
    //recursive
    return 2*power(n-1);
}


int main()
{
    cout<<power(5);

    return 0;
}