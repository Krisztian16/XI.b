#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n=5,i,j;
    int matrix[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            matrix[i][j]=rand()%10;
            if (i==j)matrix[i][j]=0;
            if (i>j)matrix[i][j]=-matrix[i][j];
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }



    return 0;
}
