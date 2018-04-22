#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n<0)
        cout<<"bilangan negatif tidak dapat di hitung";
    else

    {
        int product=1;
        for(int i=1;i<=n;i++)
            product*=i;
        cout<<product;
        return product;
    }
}
int main()
{   int n;
        cout<<"masukin angka:";
       cin>>n;
       cout<<"nilai Faktorialnya :";factorial(n);
}

