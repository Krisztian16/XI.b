#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int n,m,i,j,a;
    in>>n;
    in>>m;
    int ma[n][m];
    for(i=0;i<n;i++){
     for(j=0;j<m;j++){
        in>>ma[i][j];

      }
     }
     a=ma[n-1][m-1];
     for(i=0;i<n;i++){
      for(j=0;j<m;j++){
       if (i==0)ma[i][j]=a;
        if(j==0)ma[i][j]=a;
        if(i==n-1)ma[i][j]=a;
        if(j==n-1)ma[i][j]=a;
      }
     }

    for(i=0;i<n;i++){
     for(j=0;j<m;j++){
        cout<<ma[i][j]<<" ";

      }cout<<endl;
     }

    return 0;
}
