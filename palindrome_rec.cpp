#include<iostream>
using namespace std;
int rev_num(int num,int rev=0)
{
    if(num==0)
    return rev;

    int digit = num%10;
    rev=rev*10+digit;
   
    return rev_num(num/10, rev);
}
bool is_pal(int num)
{
    return num==rev_num(num);
}
int main(){
    int num=12321;
    if (is_pal(num))
    cout<<num;
    else 
   cout<<"Not a palindrome number";
    return 0;
}