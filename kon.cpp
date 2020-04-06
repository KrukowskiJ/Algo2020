#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
     int a = 0, b = 1;

     for(int i=0;i<n;i++)
     {
            b += a;
            a = b-a;

            a=a%10;
            b=b%10;
     }
     return b;
}

int main()
{
    int n;

    scanf("%d",&n);


    cout<<fibonacci(n);

return 0;
}
