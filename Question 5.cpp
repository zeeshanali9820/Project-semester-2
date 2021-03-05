#include<iostream>
using namespace std;
int main()
{
	
	int Arr[10];
	int n,sum=0;
	int *ptr;
	
	cout<<"Size : ";
	cin>>n;
	
	ptr=&sum;
	
	for(int i=0;i<n; i++)
	{
	cout<<"Array's Element "<<i<<" : ";
	cin>>Arr[i];
	sum=sum + *ptr++;
	}
	cout<<"\nSum is : "<<sum<<endl;
	
	cout<<"\n Elements ALong With memory Address : \n";
	for(int j=0; j<n; j++)
	{

		cout<<"\n"<<ptr++<<"  "<<Arr[j]<<"\n";
	}	

	return 0;
}
