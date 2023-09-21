
#include <iostream>
int search (int arr[],int size,int num){
	int n=0;
	for(int i=0 ;i<size;i++){
		if(arr[i]==num){
			n=arr[i];
		}
	}
	return n;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int x;
	std::cout<<"choose number (1,2,3,4,5)"<<std::endl;
	std::cin>>x;
	std::cout<<search(arr,size,x)<<std ::endl;
	return 0;
}
