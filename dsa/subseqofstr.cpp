#include<bits/stdc++.h>
using namespace std;

void solve(string str , int index, string output , int index,vector<string> &ans)
{
    //base case
    if(index>=str.length())
    {
        if(str.length()>0)
        {
            ans.push_back(output);
        }
        
        return;
    }

    //exclude
    solve(str,index+1,output,ans);

    //include
    char element = str[index];
    output.push_back(element);
    solve(str,index+1,output,ans);

}

vector<string> subseq(string str)
{
    string output ="";
    //int index = 0;
    vector<string> ans;
    solve(str,0,output,ans);
    return ans;
}

int main()
{
    subseq("abc");
    return 0;    
}