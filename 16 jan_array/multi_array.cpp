#include<iostream>
using namespace std;
int main()
{
   string letters[2][4]={
    {"A","B","C","D"},
    {"E","F","G","H"} 
      };
      letters[0][0]="Z";
      // pattern print
      for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
          cout<<"letters["<<i<<"]["<<j<<"]:"<<letters[i][j]<<endl;
        }
      }
      // cout<<"letters[0][0] is:"<<letters[0][0];
       return 0;
   

  
}

