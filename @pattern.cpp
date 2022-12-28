#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cout << "Enter number of rows: ";
cin >> n;
for(i = n; i >= 1; i--)
{
for(s = i; s < n; s++)
cout  <<"  ";
for(j = 1; j <= (2 * i - 1); j++){
if(j==1||j==2*i-1)
cout<<"@ ";
else
cout << "* ";
}
cout << "\n";
}
return 0;
}
