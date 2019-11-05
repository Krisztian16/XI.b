#include <iostream>

using namespace std;
void inserare(int & n){
int usz=0,t1,t2;
int prev=n%10;
n=n/10;
int hatv=1;
usz+=prev*hatv;
hatv=hatv*10;
while(n>0){
    int c=n%10;
    n=n/10;
    int deff=(prev-c);
    if(deff<0)deff=-deff;
    usz+=deff*hatv;
    hatv=hatv*10;
    usz+=c*hatv;
    hatv=hatv*10;
    prev=c;
}

n=usz;
}
int main()
{
    int n;
    cin>>n;

    inserare(n);
    cout<<n;
    return 0;
}
