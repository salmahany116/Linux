#include<iostream>

int main(){
    int x;
    std::cout<<"please enter number"<<std::endl;
    std::cin>>x;
   auto sq =[](int x)-> int{
    int y;
    y=x*x;
    return y;
   };
   std::cout<<"square of number is : "<<sq(x)<<std::endl;
}