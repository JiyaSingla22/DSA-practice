#include<iostream>
using namespace std;
int dec_binary(int num)
{
    int ans=0;
    int pow=1;
    while(num>0)
    {
        int rem=num%2;
        num=num/2;
        ans+=(rem*pow);
        pow=pow*10;
      
    }  return ans;
}
int main()
{
    int answ =19;
    cout<<dec_binary(answ);
    return 0;
}
// int binary_dec(int num)
// {
//     int ans=0;
//     int pow=1;
    
//     while(num>0)
//     {
//         int rem=num%10;
//         ans+=rem*pow;

//         num=num/10;
//         pow*=2;
       
//     }
//    return ans;
// }

// int main(){
//     int num=1001;
//     cout<<binary_dec(num);
//     return 0;
// }