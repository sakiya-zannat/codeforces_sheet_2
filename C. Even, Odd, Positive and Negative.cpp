#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int n,i,x;
    cin>>n;
    int even,odd,positive,negative;

    for(int i=1; i<=n; i++)
    {cin>>x;

    if(x==0 || x%2== 0 )
    even++;
    else 
    odd++;
     
    if (x>0)
    positive++;
    else if(x<0)
    negative++;
    }
   
   cout<<"Even: "<<even<<endl;
   cout<<"Odd: "<<odd<<endl;
   cout<<"Positive: "<< positive<<endl;
   cout<<"Negative: "<<negative<<endl;
}