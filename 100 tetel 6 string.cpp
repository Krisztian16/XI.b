#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    getline(cin,a);
    size_t x=a.find(" ");

    transform(a.begin(),a.begin()+1,a.begin(), ::toupper);
    while (x!=string::npos){
    transform(a.begin()+x+1,a.begin()+x+2,a.begin()+x+1, ::toupper);x=a.find(" ",x+1);
    }cout<<a;
    return 0;
}
