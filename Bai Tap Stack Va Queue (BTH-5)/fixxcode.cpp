string isBalanced(string s)
{
    int n;
    stack<char> a;
    n = s.length();
    a.push('0');
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            a.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (a.top() == '(')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == ']')
        {
            if (a.top() == '[')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
        else if (s[i] == '}')
        {
            if (a.top() == '{')
            {
                a.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (a.size() == 0)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}
