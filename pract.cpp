#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ret(long num)
{
    int count=(int)(log10 (num)+1);
  while(num>0)
    {
        int digit= num%10;
      if(digit==0)
      
        num =num/10;
        cout<<digit<<"  ";
    }
    cout<<endl;
    cout<<"The total number of digits are "<<count;
}
int main()
{
long num=9873000;
ret(num);
return 0;
}