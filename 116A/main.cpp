#include<iostream>
using namespace std;

int main()
{   
    
    
    int n;
    cin>>n;
     int a,b;
     int tot=0,max,pretot=-1;
     int bfin=0;
    for(int i=0;i<n;i++)
    {
   
    
    cin>>a>>b;
        
        if(i!=0)
        a=bfin-a;
        
        tot=a+b;
        bfin=tot;
       

        if(tot>pretot)
        {
            pretot=tot;
        }
        
        
    
    }
    cout<<pretot;
    
}