
#include <iostream>
#include <bitset>
#include<string>
int main()
{	
	int x;
	std::string b;
	std::cout<<"please enter Decimal number";
	std::cin>>x;
	std::bitset<10>bin(x);
	std::cout<<"it's binary representation : "<<bin<<std::endl;
	std::cout<<"please enter binary number";
	std::cin>>b;
	std::bitset<10>bin1(b);
	std::cout<<"it's decimal representation : "<<bin1.to_ulong()<<std::endl;
	return 0;
}
