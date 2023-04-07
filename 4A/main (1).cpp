/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

void calcWeight(int m)
{
    int div=m;
    
    if(m==2)
    {
        cout<<"NO";
    }
    else
    {
    if((div%2)==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    }
}


int main()
{   
    int n;
    cin>>n;
    calcWeight(n);
}
