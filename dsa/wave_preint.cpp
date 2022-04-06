#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrint(vector<vector<int>> &arr ,int nRows, int nCols)
{

    vector<int> ans;
    for(int col=0;col<nCols;col++)
    {
        //odd index->bottom to top
        if(col%2!=0)
        {
            for(int row=nRows-1;row>=0;row--)
            {
                ans.push_back(arr[row][col]);
            }
        }

        else{
            //even index or 0 -> top to bottom
            for(int row=0;row<nRows;row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}



int main()
{
        vector<vector<int>> arr{ { 1, 2, 3, 4 },
                                { 5, 6, 7, 8 },
                                { 9, 10, 11, 12 },
                                { 13, 14, 15, 16 }};

        for (int x : wavePrint(arr,4,4)) 
        {
            cout << x << " " ;
        }

        return 0 ;

}