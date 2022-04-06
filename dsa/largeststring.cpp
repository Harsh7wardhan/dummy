#include<bits/stdc++.h>
using namespace std;
int main()
{
   char str[1000];
   char largest[1000];

   int n;
   cin>>n;

   cin.get();
    int largest_length=0;
    
   while(n--)
   {
       cin.getline(str,1000);
       int len=strlen(str);
       if(len>largest_length)
       {
           largest_length=len;
           strcpy(largest,str);
       } 

   }

   cout<<"largest sentence is  "<< largest <<endl;
}