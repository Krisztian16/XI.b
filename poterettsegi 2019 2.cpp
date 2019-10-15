#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a="",b;
    getline (cin,b);
    if(b.size()<3){
        a="nederminat";
    }else a.append(b,b.size()-3,3);
    cout<<a;



    return 0;
}
