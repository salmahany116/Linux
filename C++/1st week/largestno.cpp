#include<iostream>

int main(){
    int n1,n2,n3;
    std::cout<<"please enter 3 numbers"<<std::endl; 
    std::cin >>n1>>n2>>n3;

    if(n1>n2&&n1>n3)
    std::cout<<n1<<std::endl;
    else if (n2>n1&&n2>n3)
    {
        std::cout<<n2<<std::endl;
    }
        
    else
    std::cout<<n3<<std::endl;
 }
