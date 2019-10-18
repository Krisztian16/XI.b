#include <iostream>

using namespace std;

int main()
{
    int i,n,j;
cin>>n;
int m[n][n];
j=0;
for(i=n-1;i>=0;i--)cin>>m[i][j];
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(j%2==0)m[i][j]=m[i][0];
        if(j%2!=0)m[i][j]=m[n-1-i][0];
        cout<<m[i][j]<<" ";
    }cout<<endl;
}
    cout << "Hello world!" << endl;
    return 0;
}
