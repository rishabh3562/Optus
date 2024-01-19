#include<iostream>
using namespace std;
int main()
{
   string letters[2][2][2]={
    {
        {"A","B"},
        {"C","D"}
    },
    {
        {"E","F"},
        {"G","H"}
    } 
      };
    //   letters[0][0]="Z";
      // pattern print
      for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<"letters["<<i<<"]["<<j<<"]"<<"["<<k<<"]:"<<letters[i][j][k]<<endl;
            }
        }
      }
      // cout<<"letters[0][0] is:"<<letters[0][0];
       return 0;
   

  
}

