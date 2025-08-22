#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 ="Jiya ";
    string str2="Singla";
    string str3 =str1+str2;
    cout<<(str1.length()>str2.length())<<endl;
    
    return 0;
}


// char maxOccCH(string st)
// {
//     int array[26]={0};
//     for (int i =0;i<st.length();i++)
//     {
//         char ch = st[i];
//         int num =0;
//         if(ch>='a' &&  ch<='z')
//         {
//             num= ch-'a';
//         }
//         else
//         {
//             num=ch-'A';
//         }
//         array[num]++;
//     }
//     int maxi=-1;
//     int ans = -1;
//     for(int i =0;i<26;i++)
//     {
//         if(maxi<array[i])
//         {
//             ans =i;
//             maxi=array[i];
//         }
         
        
//     }
//    if(maxi<=1)
//    {
//     return '\0';
//    }
    
    
//     return ans+'a';
    
// }

// int main()
// {
//     string st="Pokemonp";
//     char result = maxOccCH(st);
//      if (result == '\0' )
//         cout << "none";
//         else
//     cout<<"The max occuring character is "<< result;
//     return 0;
// }


// // void str(const string &stringg , const char name [] )
// // {
    
// //     cout<<stringg <<endl;
// //     cout<<name<<endl;
// // }
// // int main()
// // {
// //     string stringg("Ji\0ya",5);
// //     char name[3]={'a','\0','b'};
// //     str(stringg,name);
// //     return 0;
// // }