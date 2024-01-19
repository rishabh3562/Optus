#include<iostream>
using namespace std;
int main()
{
   int temperature[3][5]={
    
        {25,27,28,30,32},//week1
         {29,31,33,30,28},//week2
          {26,28,30,32,34},//week3
       
    
   
      };
  cout<<"Temperatures for 3 weeks:\n";
      for(int i=0;i<3;i++){
        cout<<"week "<<i<<":\n";
        for(int j=0;j<5;j++){
            
                cout<<"temperature["<<i<<"]["<<j<<"]"<<temperature[i][j]<<endl;
            
        }
        cout<<endl;
      }
      // cout<<"letters[0][0] is:"<<letters[0][0];
       return 0;
   

  
}

