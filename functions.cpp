#include<iostream>
using namespace std;
// Create a function that finds the maximum of three numbers
int fun_max(int a, int b ,int c)
{
      if((a>=b)&&(a>=c))
    {
        cout<<a<< " is greater "; 
    }
      if((b>=a)&&(b>=c))
    {
      cout<<b<< " is greater "; 
    }
    
    else{
        cout<<c<<" is greater ";
    }
}
int main()
{
    fun_max(334,334,334);
    return 0;
}





// int fun_rev(int num)
//     {
//         int rev=0;
//         while(num !=0)
//         {
//            int digit= num%10;
//            rev= rev*10+digit;
//            num= num/10;
//         }
// return rev;
     
// }
// int main(){
//     int num=12345;
//     int reversed_number= fun_rev(num);
//     cout<<reversed_number;
  
//     return 0;
// }
//     fun_fibbo() {
//     int a=0;
//     int b=1;
//     int c;
//     for(int i=1;i<=num;i++)
//     {
//         cout<<a<<" ";
//         c=a+b;
//         a=b;
//         b=c;
//     }
    // fun_prime_series() {
    // int count,i,j;
    // for(i=2;i<=num;i++)
    // {count=0;
    //     for(j=1;j<=i;j++)
    //     {
    //         if(i%j==0)
    //         count++;
    //     }
    //     if (count==2)
    //     cout<<i<<endl;
    

// int fun_prime(int num)
// {
//     int count=0;
//     for(int i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         count++;
//     }
//     if(count==2)
//     cout<<num<<endl;
   
// }
// int main(){
//     fun_prime(2);
//     fun_prime(3);
//     fun_prime(245);
//     fun_prime(2654322);
//     return 0;
// }