#include<iostream>    
#include<vector> 
#include<algorithm>
using namespace std;
int main()
{  
	//vector initialisation
	vector<int> vec {5, 4, 3, 2, 1};
	
	cout<<"Before sorting vector : ";
	for(auto i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<*i;
	}
	
	std::sort(vec.begin(),vec.end());//Sorting the vector
	
	cout<<"\n\nAfter sorting vector : ";
	for(auto i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<*i;
	}
	return 0;
}
