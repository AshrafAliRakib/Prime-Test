#include <bits/stdc++.h>
#include<fstream>

using namespace std;

int main()
{
    ifstream ifile; ///input file
    ofstream ofile; ///output file
    ///open input file
    ifile.open("in.txt");
    ///output file
    ofile.open("out.txt");
    ///read from input file

    int x,n,y,i,flag=0,z;

    ifile>>n;
    if(n==1||n==0)
    {
         flag=1;
        //ofile<<("NO");
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
    {
        //cout<<"YES"<<endl;
        flag=1;
        //break;
    }

    }
    if(flag==0)
    {
        ofile<<"YES"<<endl;
    }
    else
    {
        ofile<<"NO"<<endl;
    }
    ifile.close();
    ofile.close();

    return 0;
}

