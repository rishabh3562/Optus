#include <iostream>
#include <stack>

using namespace std;

string reverseWords(string str) {
    stack<string> wordsStack;
    stringstream ss(str);

    string word;
    while (ss >> word) {
        wordsStack.push(word);
    }

    string reversedStr;
    while (!wordsStack.empty()) {
        reversedStr += wordsStack.top() + " ";
        wordsStack.pop();
    }

    // Remove the trailing space
    if (!reversedStr.empty()) {
        reversedStr.pop_back();
    }

    return reversedStr;
}

int main() {
    string str = "How are you";
    string rev = reverseWords(str);
    cout << rev << endl;
    return 0;
}
