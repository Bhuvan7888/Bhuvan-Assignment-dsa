#include<iostream>
#include<stack>
using namespace std;



int main() {
    string str = "Bhuvan Malhotra";
    stack<char> st;

    for(char c : str){
        st.push(c);
    }

    string reversed = "" ;

    while(!st.empty()){
        reversed+=st.top();
        st.pop();
    }

    cout << "The Original string is : " << str << endl;
    cout << "The reversed string is :" << reversed << endl;

    return 0;
}
