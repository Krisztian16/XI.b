#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in1("nr1.txt");
    ifstream in2("nr2.txt");
    int m,n,x,y;
    in1>>n;
    in2>>m;
    while(in1>>x && in2>>y)
    {
      while(x<y && in1>>x){}
      while(y<x && in2>>y){}
      if(x==y)
      {
          cout<<x<<" ";
      }
    }







    return 0;
}
