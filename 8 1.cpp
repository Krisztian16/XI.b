#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream in("input.txt");

    ofstream out("output.txt");

    int N;
    in>>N;
    string a;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
        in>>a;
        if(j>i){transform(a.begin(),a.begin()+2,a.begin(), ::toupper);}
        if(j<i){transform(a.end()-2,a.end(),a.end()-2, ::toupper);}
          out<<a<<" ";
        }out<<endl;
    }



    return 0;
}
