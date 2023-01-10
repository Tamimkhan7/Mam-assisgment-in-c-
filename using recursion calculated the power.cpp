#include <bits/stdc++.h>
using namespace std;
int calculate(int base, int power)
{
    if (power !=0)
        return base*calculate(base,power-1);
    else
        return 1;
}

int main()
{
    int base, power;
    cin>>base>>power;
    int result = calculate(base, power);
    cout<<result<<endl;


}
