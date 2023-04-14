#include<iostream>
using namespace std;

int main()
{   
    int cases;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        string str;
        cin>>str;
        
        
        if(str.length()>10)
        {   
            int len=str.length()-2;
            
            cout<<str[0];
            cout<<len;
            cout<<str[len+1]<<endl;
            
        }
        else
        {
            cout<<str<<endl;
        }
        
        
        
    }
    return 0;
    
}