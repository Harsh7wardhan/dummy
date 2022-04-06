// #include<iostream>
// using namespace std;

// *********************************************************METHOD-1***********************************************************************
// int main(){
//     int row,col;
//     cin>>row>>col;
//     int arr[row][col];
// // 
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cin>>arr[i][j];
//         }
//     }


  
//     //SPIRAL PRINT
//         int sr=0;
//         int sc=0;
//         int er=row-1;
//         int ec=col-1;

//         while(sr<=er && sc<=ec){
//             //printing starting column 
//             for(int i=sr;i<=er;i++){
//                 cout<<arr[i][sc]<<", ";
//             }
//             sc++;

//             //printing end row
//             for(int i=sc;i<=ec;i++){
//                 cout<<arr[er][i]<<", ";
//             }
//             er--;

//             //printing last column
//             if(sc<=ec){
//                 for(int i=er;i>=sr;i--){
//                     cout<<arr[i][ec]<<", ";
//                 }
//                 ec--;
//             }

//             //printing starting row
//             // if(sr<=er){
//                 for(int i=ec;i>=sc;i--){
//                     cout<<arr[sr][i]<<", ";
//                 }
//                 sr++;
//             }
            
//     }
// 	cout<<"END";
    

//     return 0;
// }

// *************************************************************METHOD-2********************************************************************************************
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int> >& matrix) 
{ 
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++; 
        } 
        return ans;
}

int main()
{
        vector<vector<int>> matrix{ { 1, 2, 3, 4 },
                                { 5, 6, 7, 8 },
                                { 9, 10, 11, 12 },
                                { 13, 14, 15, 16 }};

        for (int x : spiralOrder(matrix)) 
        {
            cout << x << " " ;
        }

        return 0 ;

}   