#include <bits/stdc++.h>

using namespace std;

 string isValid(string s)
{
    int n = s.size();
    stack<char> st;
    string ans = "true";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' or s[i] == '[' or s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = "false";
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else{
                ans = "false";
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = "false";
                break;
            }
        }
    }
    if (!st.empty())
    {
        ans = "false";
    }
    return ans;
}

int main()
{
    string Paranthesis;
    cout << "Write A Paranthesis to check its validity !" << endl;
    getline(cin, Paranthesis);
    cout << isValid(Paranthesis) << endl;
    return 0;
}