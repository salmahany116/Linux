
#include <iostream>
#include <string>
using namespace std;

int digits (int x){
	int temp =0,sum=0;
	std::string str =std::to_string(x);

	for(char ch : str){
		temp=ch-'0';
		sum+=temp;
	}	
	return sum;
}

int main()
{
	int x;
	std::cout<<"please enter decimal number";
	std::cin>>x;
	std::cout<<digits(x);
	return 0;
}
