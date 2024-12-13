#include <iostream>

using namespace std;
int LCM(int a, int b){
    int g,l,tmp=a*b;
    g=a%b;
    while(g!=0){
        a=b;
        b=g;
        g=a%b;
    }
    g=b;
    l=tmp/g;
    return l;
 }


int main()
{
int m,n;
cin >> m >> n;
cout << endl;
cout << " LCM : " << LCM(m,n);
    return 0;
}
