#include<iostream>
using namespace std;

int functionM(string s, int i){
    char c = '>';
    int count = 0;
    for (int j = i; j < s.size(); j++)
    {
        if (s[j] == c)
        {
            count++;
        }
        else
            break;
    }
    return count;
}
int functionN(string s, int i){
    char c = '<';
    int count = 0;
    for (int j = i; j < s.size(); j++)
    {
        if (s[j] == c)
        {
            count++;
        }
        else
            break;
    }
    return count;
}

int calc(string s, int n){
    int cmax = 2;
    int cn = 1;
    for (int i = 0; i < n; i++)
    {
        if (cn == 1)
        {
            if (s[i] == '>' && s[i + 1] == '<')
            {
                cn = 2;
                i += 1;
            }
            else if (s[i] == '<' && s[i + 1] == '>')
            {
                i += 1;
                cn = 1;
            }
        }
        else
        {
            if (s[i] == '>')
            {
                int nmth = functionM(s, i);
                if (cn - 1 < nmth)
                {
                    int chg = nmth - (cn - 1);
                    cmax += chg;
                    cn = 1;
                }
                else if (cn - 1 == nmth)
                {
                    cn = 1;
                }
                else
                {
                    cn = cn - nmth;
                }
                i += (nmth - 1);
            }
            else if (s[i] == '<')
            {
                int nlth = functionN(s, i);
                cn += nlth;
                cmax = max(cmax, cn);
                i += (nlth - 1);
            }
        }
    }
    return cmax;
}
int main(){
    string s;
    cin >> s;
    int ans = calc(s, s.size());
    cout << ans << endl;
    return 0;
}