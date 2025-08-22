#include<iostream>
using namespace std;
void insertion_sort(int array[] ,int n)
{
 if(n<=1) return;
 insertion_sort (array,n-1);  


 int last = array[n-1];
 int j = n-2;
 while(j>=0 && array [j]>last)
 {
    array [j+1]= array [j];
    j--;
 } 
 array[j+1]=last;



}

    
//     for(int i = 1; i <n ; i++)
//     {
//         int temp = array[i];
//         int j = i-1 ;
//         for(; j>=0 ;j--)
//         {
//             if( array[j]>temp)
//             {
//                 array[j+1]=array[j];
//             }
//             else
//             break;
//         }
//         array[j+1]=temp;
//     }
// }


int main()
{
    int sort[]={2};
    int n = sizeof(sort)/sizeof(sort[0] );
    insertion_sort (sort,n) ;
    for(int i = 0;i < n;i++)
    {
        cout<<sort[i]<<" ";
    }
    return 0;
}