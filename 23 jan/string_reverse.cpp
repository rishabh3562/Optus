#include<iostream>
using namespace std;
int main()
{
    string name="rishabh";
    int len=name.size();

    cout<<"string is:"<<name<<endl;
    cout<<"the string in reverse is:";
    for(int i=len-1;i>=0;i--){
cout<<name[i];
    }
    return 0;
}