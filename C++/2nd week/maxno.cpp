#include <iostream>
int max (int arr[],int size){
	int max=arr[0];
	for (int i =1; i<size ;i++){
		if(arr[i]>max)
		{
			max =arr[i];
		}
	}
		return max;
}
int main()
{
	int arr[5];
	int size = sizeof(arr)/sizeof(arr[0]);
	std::cout<<"please enter numbers"<<std::endl;
	for (int i=0;i<size;i++){
		std::cin>>arr[i];
	}
	std::cout<<max(arr,size)<<std ::endl;
	return 0;
}
