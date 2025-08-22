#include <iostream>
using namespace std;
int fun_fact(int num)
{   cin>>num;
    int n=1;
    for(int i=1; i<=num;i++)
    {
        n*=i;
    }
    cout<<n;
    return n;
}
int main()
{
   
   int num;
  fun_fact(num);
    cout<<" is factorial";
    return 0;
}


// int palindrome(int num)
//     {
//         int org =num;
//         int rev=0;
//         while(num>0)
//         {
//             int digit=num%10;
//             rev=rev*10+digit;
//             num=num/10;
//         } return rev == org; 
//     }
// int main()
// {
//     int num=123231;
//     if(palindrome(num))
//     {
//     cout<<"yes "<<num<<" is palindrome.";
//     }
//     else
//     {
//         cout<<"no "<<num<<" is not palindrome.";
//     }
//     return 0;
// }