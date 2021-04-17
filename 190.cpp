#include<bits/stdc++.h>
using namespace std;

int main()
{
    uint32_t input=4294967293;
    vector<int> num;
    for(int i=0;i<32;i++)
    {
        int result=input&1;
        num.push_back(result);
        input= input>>1;

    }
    uint32_t output;
    for(int i=0;i<num.size();i++)
        {
            cout << num[i]<<endl;
            output=output*2+num[i];
        }
    cout << output <<endl;
}
