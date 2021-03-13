#include<iostream>
#include<set>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	set<int> s1;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s1.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		s1.insert(b[i]);
	}
	cout<<s1.size()<<endl;
	return 0;
}
