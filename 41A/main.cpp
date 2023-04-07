#include<iostream>
using namespace std;



int main()
{
    
    string s,t;
    cin>>s>>t;
    int start=0;
    int end=s.length()-1;
    bool temp=false;
    
    
    if(s.length()>100 || s.length()<1) //checks whether the length exceeds 100 or empty 
    cout<<"NO";
    else
    {
            for(int i=0;i<s.length();i++)
            {
                if(t[start]!=s[end])
                {
                    cout<<"NO"<<endl;
                    temp=true;
                    break;
                }
                start++;
                end--;
            }
            if(!temp)
            cout<<"YES"<<endl;
        
    }
}