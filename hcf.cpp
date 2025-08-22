#include<iostream>
using namespace std;
int hcf_fun(int a, int b)
{
    
    while(a>0 && b>0)
    {
        if(a>b)
        a= a % b ;
         else 
         b = b % a ;
               
    }
    if(a==0)
   return b;
   return a;
}
int main(){
    cout<<hcf_fun(6,3);
    return 0;
}