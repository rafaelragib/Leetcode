#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> strs={"eat","nick","ate","tea"};
    map<string,vector<int>> m;

    for(int i=0;i<strs.size();i++)
    {
        string s=strs[i];
        sort(s.begin(),s.end());
        m[s].push_back(i);
    }
    int i=0;
    vector<vector<string>> output;
    vector<string> s;
    for(auto str:m)
        {
            for(auto x:str.second)
            {

                s.push_back(strs[x]);
            }
            output.push_back(s);
            s.clear();
            i++;
        }

}
