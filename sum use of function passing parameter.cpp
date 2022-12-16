#include <iostream>
using namespace std;
void display(int a, int b)
{
    int sum;
    sum = a+b;
    cout<<sum<<endl;
}
int main ()
{
    int a, b;
    cin>>a>>b;
    display(a,b);

    return 0;
}
