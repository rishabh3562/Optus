#include<iostream>
#include<string>
using namespace std;

string toUppercase(string str) {
    for(int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
    return str;
}

int main() {
    string str = "string kehte hai";
    string upstr = toUppercase(str);
    
    cout << "Original string: " << str << endl;
    cout << "Uppercase string: " << upstr << endl;
    
    return 0;
}
