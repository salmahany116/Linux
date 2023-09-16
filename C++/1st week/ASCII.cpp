#include<iostream>

int main(){
    std::cout << "_____" <<"|"<<" " <<"____"<<std::endl;
    std::cout << "Char" <<"|"<<" " <<"ASCII"<<std::endl;
    std::cout << "_____" <<"|"<<" " <<"____"<<std::endl;
for(int i=0;i<=130;i++){
    unsigned char x =i;
    
    std::cout << " | "<< i <<"  "<<" | "<<"  " << x <<" | "<<std::endl;
}
std::cout << "_____" <<"|"<<" " <<"____"<<std::endl;
}
