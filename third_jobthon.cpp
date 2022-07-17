#include <bits/stdc++.h>
using namespace std;

bool my_compare(string a, string b)
{
    if (a.compare(0, b.size(), b) == 0
        || b.compare(0, a.size(), a) == 0)
 
        return a.size() > b.size();
    else
        return a < b;
}

void permute(string a, int l, int r,vector<string> &strs)
{
    if (l == r)
        strs.push_back(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r,strs);
            swap(a[l], a[i]);
        }
    }
}

bool isPrefix(string str, int len, int i, int k)
{
    if (i + k > len)
        return false;
    for (int j = 0; j < k; j++)
    {
        if (str[i] != str[j])
            return false;
        i++;
    }
    return true;
}

bool isKPeriodic(string str, int len, int k)
{
    for (int i = k; i < len; i += k)
        if (!isPrefix(str, len, i, k))
            return false;
    return true;
}

int main()
{
    string s = "abba";
    int k=2;
    vector<string> kp;
    vector<string> strs;
    permute(s, 0, s.length()-1,strs);

    for(auto str:strs){
        if(isKPeriodic(str,str.length(),2)){
            kp.push_back(str);
        }
    }

    sort(kp.begin(), kp.end(),my_compare);

    cout<<kp[0]<<endl;

    return 0;
}