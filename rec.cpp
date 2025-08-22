#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fib(9);
    return 0;
}



// int sum(long n) //fun
// {
//     if(n==0) //base case
//     {
//          return 0; 
//     }
//        return n+sum(n-1); //function callig itself "recursion"
// }
// int main()
// {
//     cout<<sum(12343);
//     return 0;
// }