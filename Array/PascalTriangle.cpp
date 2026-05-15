#include <bits/stdc++.h>

using namespace std;

void pascal(int n, int r, int c){
    vector<vector<int>> mat(n, vector<int>(n,0));
    mat[0][0] = 1;
    for (int i = 1; i< n; i++){
        for (int j=0; j<=i; j++){
            if (j == 0){
                mat[i][j] = mat[i-1][j];
            }else{
                mat[i][j] = mat[i-1][j] + mat[i-1][j-1];
            }
        }
    }

    cout << "Element at position (r,c): " << mat[r-1][c-1] << endl;

    cout << "N-th row of Triangle: ";
    for (int j = 0; j < n; j++)
        {   
            if (mat[r-1][j] == 0){
                cout << "  ";
            }else{
                cout << mat[r-1][j] << " ";
            }
        }
        cout << endl;

    cout << "First N rows of Pascal's Triangle: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {   
            if (mat[i][j] == 0){
                cout << "  ";
            }else{
                cout << mat[i][j] << " ";
            }
        }
        cout << endl;    
    }
}

int main() {
    pascal(5,5,3);
    return 0;
}