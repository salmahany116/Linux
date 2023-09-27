#include<iostream>
int main(){
    char ch,x;
std::cout<<"please enter char / digit"<<std::endl;
std::cin>>ch;
x=isdigit(ch);
if(x==0){
    std::cout<<"No"<<std::endl;
}
else{
    std::cout<<"Yes"<<std::endl;
}
}