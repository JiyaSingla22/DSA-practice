#include<iostream>
using namespace std;
int unique(int arr[],int size)
{
  int ans=0;
   for(int i=0;i<size;i++)
   {
     ans=ans^arr[i];
     
   }
    for(int i=0;i<size;i++)
   {
     if(arr[i]==ans)
     {
      cout<<"The index is : "<<i<<endl;
     }
     
   }
  
   return ans;
}
int main(){
   int array[5]={2,2,9,3,3};
   cout<< "The element is: "<<unique(array,5);
   return 0;
}
// int rev(int arr[],int size)
// {
//   int start=0;
//   int end=size-1;
//   while(start<=end)
//   {
//    swap(arr[start],arr[end]);
//    start++;
//    end--;
//   }
// }
// int main()
// {
//    int array[5]={1,2,3,4,5};
//    cout<< rev(array,5);
//    for(int i=0;i<5;i++)
//    {
//       cout<<array[i]<<" ";
//    }
  
//    return 0;
// }
// int sum(int arr[],int n)
// {
//    if(n==0)
//    {
//       return 0;
//    }
//    return arr[0]+sum(arr+1,n-1);
// }
// int main()
// {
//    int array[5]={1,2,3,4,5};
//    cout<<sum(array,5)<<endl;
//    int number[4];
//    cout<<"the array is: ";
//      for(int i=0;i<4;i++)
//    {
//       cin>>number[i];
//    }
  
//    cout<<sum(number,4);
//    return 0;
// }


// int main()
// {
//    int arr[5]={1,2,3,4,5};
//    int sum=0;
//    for(int i=0;i<5;i++)
//    {
//       sum+=arr[i];
      
//    }cout<<sum;
//    return 0;
// }



// int update(int arr[],int size)
// {
//    arr[0]=123;
//    for (int i=0;i<size;i++)
//    {
//       cout<<arr[i]<<" ";
//    }cout<<endl<<"hello"<<endl;
// }
// int main()
// { 
//    int array[5]={1,2,3,4,5};
//     update(array,5);
//    for(int i=0;i<=4;i++)
//    {
//       cout<<array[i]<<" ";
//    }
   
//    return 0;
// }









    
 
