#include<iostream>
using namespace std;
int main()
{
	int *p;
	int arr[5],i;
	cout<<"Enter the five element  ";
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p=arr;
	cout<<"The elements you entered are :";
	for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
}
