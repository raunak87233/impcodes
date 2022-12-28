#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> A){
    for(int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
        cout<<endl;
    }
}
int getIndexOFminelementitoend(vector<int> A, int i){
    int n=A.size();
    int minIndex=i;
    for(int j=i+1; j<n; j++){
        if(A[j]<A[minIndex]){
            minIndex=j;
        }
}
return minIndex;
}
void sort(vector<int>&A){
    for(int i=0; i<A.size(); i++){
        
int j=getIndexOFminelementitoend(A,i);
swap(A[i],A[j]);
    }
};
int main(){
    vector<int>A={5,2,4,7,8,3,1,9};
    sort(A);
     
    cout<<"sorted\n";
    printVector(A);
    return 0;
}


