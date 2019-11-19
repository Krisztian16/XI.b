#include <iostream>

using namespace std;
int a=9999999;
int f( int x){
if (x==0) return 0;
if (x<10 && x!=0 && a<x)return a;
if (x<10 && x!=0 && a>x)return x;
if(x%10<a)a=x%10;
  f(x/10);

}
int main()
{
    cout << f(0)<< endl;
    return 0;
}
