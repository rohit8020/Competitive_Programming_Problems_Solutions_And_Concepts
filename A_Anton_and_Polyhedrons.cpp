#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string t="Tetrahedron";
    string c="Cube"; 
    string o="Octahedron";
    string d="Dodecahedron";
    string i="Icosahedron";

    int T=4;
    int C=6;
    int O=8;
    int D=12;
    int I=20;

    int ans=0;
    for (int j = 0; j < n; j++)
    {
        string temp;
        cin>>temp;

        if(t==temp){
            ans+=T;
        }else if(c==temp){
            ans+=C;
        }else if(o==temp){
            ans+=O;
        }else if(d==temp){
            ans+=D;
        }else if(i==temp){
            ans+=I;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}