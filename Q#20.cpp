#include<iostream>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       while(!st.empty()){
        if(st[i]=='(' || st[i]=='{' || st[i]=='[' )
            st.push(st[i]):
       }
       while(!st.empty()){
        if(st[i]==')' || st[i]=='}' || st[i]=='[' )
            st.pop():
        
            if{!st.empty()}  return false;
            else true;
        } 
    }
};
    }
};
/*bool isValid(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if (s[i] == ')' && top != '(')
                return false;

            if (s[i] == '}' && top != '{')
                return false;

            if (s[i] == ']' && top != '[')
                return false;
        }
    }

    return st.empty();
}*/