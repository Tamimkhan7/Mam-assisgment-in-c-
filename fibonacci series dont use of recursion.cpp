#include <iostream>
using namespace std;
int main ()
{
    int f1=0, f2=1,f;
    int n, i;
    cin>>n;
    for (i=1; i<=n; i++)
    {
        if (i==1)
        {
            cout<<f1<<" "<<endl;
        }
        else if(i==2)
        {
            cout<<f2<<" "<<endl;
        }
        else
        {
            f= f1+f2;
            f1=f2;
            f2=f;
            cout<<f<<" "<<endl;
        }
    }


    return 0;
}
