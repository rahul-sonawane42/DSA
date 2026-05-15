#include <bits/stdc++.h>
#include <vector>

using namespace std;

void setz(vector<vector<int>> &arr, int r, int c){
    vector<bool> zrow(r,false);
    vector<bool> zcol(c,false);

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (arr[i][j] == 0){
                zrow[i] = true;
                zcol[j] = true;
            }
        }
    }

    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (zrow[i] || zcol[j]){
                arr[i][j] = 0;
            }
        }
    }
    
}

int main() {
    int row = 3;
    int col = 4;
    vector<vector<int>> mat = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    setz(mat,row,col);

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