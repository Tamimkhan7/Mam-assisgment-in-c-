#include <bits/stdc++.h>
using namespace std;
void volume (int a)
{
    int res=a*a*a;
    cout<<res<<endl;
}
void volume (int b,int c,int d)
{
    int res = b*c*d;
    cout<<res<<endl;
}
void volume (float m, float n, float l)
{
    float res =(l*m*n)/2;
    cout<<res<<endl;
}
int main()
{
    int a,b,c,d;
    cin>>a;
    volume(a);
    cin>>b>>c>>d;
    volume(a,b,c);
    float m,n,l;
    cin>>m>>n>>l;
    volume(m,n,l);
}
