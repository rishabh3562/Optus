#include<iostream>
using namespace std;
bool isPalindrome(string str){
int left=0;
int size=str.size();
int right=size-1;
while(left<right){
    if(str[left++]!=str[right--
    
    ]){
        return false;

    }

}
return true;
}
int main()
{
    cout<<"Rishabh:"<<isPalindrome("Rishabh")<<endl;
    cout<<"Naman:"<<isPalindrome("Naman")<<endl;
    cout<<"naman:"<<isPalindrome("naman")<<endl;
    cout<<"121:"<<isPalindrome("121")<<endl;
    cout<<"1212:"<<isPalindrome("1212")<<endl;
    return 0;
}