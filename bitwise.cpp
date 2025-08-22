#include<iostream>
using namespace std;
int rev(int num,int revv=0)
{
    if (num==0)
    return revv;
    
    int digit =num%10;
    
    revv=revv*10+digit;
    return  rev(num/10,revv);
}
int main(){
    cout<<rev(123);
    return 0;
}
// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     int digit=n%10;
//     return digit+sum(n/10);
// }
// int main(){
//     cout<<sum(12323);
//     return 0;
// }



/* int fun_pal(int num)
{
    if(num==0)
    {
        return ;
    }
    int digit,rev=1;
    digit=num%10;
    rev = rev *10+digit;
    num=num/10;
    if(num==rev)
   { 
    return fun_pal(true);
   }
   else 
   {
    return fun_pal(false);}
}
int main()
{
    fun_pal(12321);
    return 0;
}*/


// {
//     if(n==1)
//     return 1 ;
//     return n+sum(n-1);
// }
//     int main()
// {
//    cout<<sum(4);
//    return 0;

// }
    // if(n==0)
    
    //     return 1;
    
    // return n* fact(n-1);
//    if(n<i)
//    return n;
//    print_num(n,i+1);
//    cout<<i<<" ";
//    if(n==0)
//    return n;
//    print_num(n-1);
//    cout<<n<<" ";



