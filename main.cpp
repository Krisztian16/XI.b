#include <iostream>

using namespace std;

int main()
{
    int i,j,n,m,a,b=0;
    cin>>m;
    cin>>n;
    int ma[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
        cin>>ma[i][j];
    }}
    for(i=0;i<m;i++){
            j=0;a=1;
        while (j<n/2 && b==0){
            if(ma[i][j]==ma[i][n-a]){
                j++;a++;
            }else b=1;
        }
    }
    if (b==0)cout<<"da";
        else cout<<"nu";

    return 0;
}
