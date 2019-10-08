#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    string a="            ";
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        a[i]=65+rand()%26;

    }
   a[x]='\n';
    for(int i=0;i<x;i++){
        cout<<a[i];
    }cout<<endl;
    cout<<a;
    return 0;
}
