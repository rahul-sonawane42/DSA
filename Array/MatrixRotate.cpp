#include <bits/stdc++.h>
#include <vector>

using namespace std;


void matrot(vector<vector<int>> arr, int r, int c){
    vector<vector<int>> temp(r, vector<int>(c,0));
    int col = c-1;
    for (int i = 0; i< r; i++){
        for (int j = 0; j< c; j++){
            temp[j][col] = arr[i][j];                   //row becomes column from right side
        }
        col--;
    }

    for (int i = 0; i< r; i++){
        for (int j = 0; j< c; j++){
            arr[i][j] = temp[i][j];
        }
    }
}


int main() {
    vector<vector<int>> mat = {{0, 1, 1, 2}, {2, 0, 3, 1}, {4, 5, 0, 5}, {5, 6, 7, 0}};
    int row = 4;
    int col = 4;

    matrot(mat,row,col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        } 
        cout << endl;    
    }
    return 0;
}