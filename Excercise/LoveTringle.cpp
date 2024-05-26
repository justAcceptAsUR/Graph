#include<iostream>
using namespace std;

int main(){
    int n,ans=0;
    cin>>n;
    int likes[n+1];
    for(int i=1; i<=n; i++)  cin>>likes[i];

    for(int i=1; i<=n; i++){
        int a=i;
        int b=likes[a];
        int c=likes[b];
        int d=likes[c];
        if(a!=b && b!=c && c!=a && a==d){
            ans = 1;
            break;
        }
    }
    if(ans) cout<<"YEs"<<endl;
    else    cout<<"no"<<endl;
}