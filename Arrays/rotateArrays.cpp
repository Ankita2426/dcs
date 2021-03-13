#include<iostream>
using namespace std;
int rotateArrays(int a[],int start,int end){
	while(start<end){
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	rotateArrays(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
