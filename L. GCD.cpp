#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;

    int gcd=1;
    for(int i=1; i<=n1 && i<=n2 ;i++)
   { if(n1% i == 0 && n2%i == 0)
    {gcd = i;}}
    cout << gcd<< endl;
   }
