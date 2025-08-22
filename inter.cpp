#include<iostream>
using namespace std;
void intersection(int arr1[],int size1, int arr2[],int size2)
{
    for (int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<"{"<<arr1[i]<<"}";
                break;
            }
            
        }
        }
    }
int main()
{
    int first[5]={1,2,3,4,5};
    int second[4]={2,2,7,9};
    cout<< "The common elements are ";
    intersection(first,5,second,4);
    return 0;
}