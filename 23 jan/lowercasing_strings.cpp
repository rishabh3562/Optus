#include<iostream>
#include<string>
using namespace std;

string toLowercase(string str) {
    for(int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    string str = "STRING HAI YE";
    string lowstr = toLowercase(str);
    
    cout << "Original string: " << str << endl;
    cout << "Uppercase string: " << lowstr << endl;
    
    return 0;
}
