#include <bits/stdc++.h>
using namespace std;
class B;
class A
{
    int num1 = 1000;
    friend void add (A,B);
};
class B
{
    int num2 = 20000;
    friend void add (A,B);
};
void add(A o1, B o2)
{
    int c = o1.num1+o2.num2;
    cout<<c<<endl;
}

int main()
{
    A ob1;
    B ob2;
    add(ob1, ob2);

}
