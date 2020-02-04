#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in1("nr1.txt");
    ifstream in2("nr2.txt");
    int m,n,temp1,temp2,v[10000]={0};
    in1>>n;in2>>m;

    for(int i=0;i<n;i++){
        int x;
        in1>>x;
        v[x]++;
    }
    for(int i=0;i<m;i++){
        int x;
        in2>>x;
        v[x]++;
    }
    for(int i=0;i<10000;i++)
    {
        if(v[i]>1)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;






    return 0;
}
