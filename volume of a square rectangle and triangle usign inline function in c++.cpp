#include <bits/stdc++.h>
using namespace std;
inline int square(int a)
{
    return (a*a*a);
}
inline int triangle(int a,int b, int c)
{
    return ((a*b*c)/2);
}
inline int rectangle (int a, int b, int c)
{
    return (a*b*c);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<square(a)<<endl;
    cout<<triangle(a,b,c)<<endl;
    cout<<rectangle(a,b,c)<<endl;

}
