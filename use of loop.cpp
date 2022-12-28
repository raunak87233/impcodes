#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=n; i>0; i--){
        int j=2*i-1;
        for(int l=i;l<n;l++){
            cout<<"  ";
        }
        for(int k=0; k<j; k++){
            cout<<j<<" ";
        
        }
        cout<<endl;
    }
}
