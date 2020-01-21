#include <iostream>

using namespace std;

void honoi(int n, int from, int aux, int to){
if(n==2){
    cout<<"1.korong "<<from<<"->"<<aux<<endl; cout<<"2.korong "<<from<<"->"<<to<<endl; cout<<"1.korong "<<aux<<"->"<<to<<endl;
    }
    else {honoi(n-1,from,to,aux); cout<<n<<".korong "<<from<<"->"<<to<<endl; honoi(n-1, aux, from, to);}

};

int main()
{
honoi (3, 1, 2, 3);
    return 0;
}
