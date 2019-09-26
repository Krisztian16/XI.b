#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,i,j,a,k,b;
    ifstream in ("input.txt");
    ofstream out ("output.txt");
    in>>n;
    in>>m;
    int ma[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                k=0;
            in>>a;
            ma[i][j]=a;
               for(b=2;b<=a/2 && k==0;b++){
                 if(a%b==0)k=1;
                 }
                 if(k==0)out<<"1"<<" ";else out<<"0"<<" ";
        }out<<endl;
    }

        return 0;
}
