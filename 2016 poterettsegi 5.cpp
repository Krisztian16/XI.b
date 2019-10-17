#include <iostream>

using namespace std;

int main()
{
    int n,k,i;
   string a[20];
   cin>>n;
   for(i=0;i<n;i++){
    cin>>a[i];
   }
    cin>>k;
    for(i=0;i<n;i++){
        if(k==a[i].length())cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++){if(k!=a[i].length())cout<<a[i]<<" ";
    }

    return 0;
}
