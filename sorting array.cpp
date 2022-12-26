#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
        cout<<endl;
    }
}
void sort(vector<int>&A){
    for(int i=0; i<A.size(); i++){
        int j= (A,i);
        swap(A[i], A[j]);
        printf("vector(A)");
        cout<<"i"<<i<<"array";
    }
};
int main(){
    vector<int>A={5,2,4,7,8,3,1,9};
    sort(A);
     printf ("vector(A)");
    cout<<"sorted";
}
