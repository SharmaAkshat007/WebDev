#include<bits/stdc++.h>
using namespace std;


void printDiagonalTraversal(vector<vector<int>>& m, int rows, int columns){

    for(int g=0;g<rows;g++){
        for(int i=g,j=0;j<columns && i>=0;i--,j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int g=1;g<=columns-1;g++){    
        for(int i=rows-1,j=g;i>=0 && j<columns;i--,j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){

    int rows, columns;

    cin>>rows>>columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>matrix[i][j];
        }
    }

    printDiagonalTraversal(matrix, rows, columns);


}