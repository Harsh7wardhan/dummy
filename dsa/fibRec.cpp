#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    int ans=fib(n-1)+fib(n-2);
    return ans;
}

int main()
{
    int n;
    cin >> n ;
    cout<<fib(n);   
}
//Fibonacci Series using Recursion
// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n)
// {
// 	if (n <= 1)
// 		return n;
// 	return fib(n-1) + fib(n-2);
// }

// int main ()
// {
// 	int n = 9;
// 	cout << fib(n);
// 	// getchar();
// 	// return 0;
// }


