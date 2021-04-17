#include<bits/stdc++.h>
using namespace std;

void convertString(string &str,int i,int j)
{
        while(i<j)
        {
            char temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
}

int main()
{
    string str="  a good day  ";
    if(str.length()==0)
        cout << "done";
    int begin=0;
    int end=str.length()-1;
    int i=0;
    int j=0;
    int wordstart=0;
    while(i <= str.length())
    {
        while(str[i]==' ' && i<str.length()) i++;
        wordstart=j;
        while(str[i]!=' ' && i<str.length())
        {
            str[j]=str[i];
            i++;
            j++;
        }
        convertString(str,wordstart,j-1)
        begin++;
        end--;


    }
    cout << str <<endl;

}