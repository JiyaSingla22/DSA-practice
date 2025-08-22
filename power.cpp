#include<iostream>
using namespace std;
int power(int num,int pwr){
    if(pwr==0)
    return 1;
    return num* power(num,pwr-1);
}
int main(){
    cout<<power(2,3);
    return 0;
}