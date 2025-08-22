#include<iostream>
using namespace std;
int div(int n)
{
    int count =0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
           count +=1;
        }
    }cout<<"count is "<<count;
}
int main()
{
    int n=9;
    div(n);
    return 0;
}

// int arm_strong(int n)
// {
//     int sum=0;
//     int dup=n;
//     while(n!=0)
//     {
//         int digit=n%10;
//         sum += (digit*digit*digit);
//         n=n/10;
//     }
//     if(sum==dup)
//     {
//         return sum;
//     }
//     return 0;
// }
// int main()
// {
//     int n=153;
//     cout<<arm_strong(n);
//     return 0;
// }