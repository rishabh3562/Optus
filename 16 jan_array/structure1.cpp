#include<iostream>
using namespace std;
  struct student{
        int rollno;
        string name;
long long int phone;
    };
int main()
{
  
    student cs2;
    cs2.rollno=130;
    cs2.name="rishabh";
    cs2.phone=7489072100;
    cout<<"structure cs2:"<<endl;
    cout<<"cs2.rollno: "<<cs2.rollno<<endl;
    cout<<"cs2.name: "<<cs2.name<<endl;
    cout<<"cs2.phone: "<<cs2.phone<<endl;
 
    return 0;
}