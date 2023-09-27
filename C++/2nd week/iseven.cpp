#include<iostream>
int even (int arr[],int& size){
    int y=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            y+=1;
        }
        else{
            y-=1;
        }
    }
    return y;
}
int main(){
int arr[5],size,x;
size=sizeof(arr)/sizeof(arr[0]);
std::cout<<"please enter 5 numbers"<<std::endl;
for(int i=0;i<size;i++){
    std::cin>>arr[i];
}
x=even(arr,size);
if(x<0)
{
    std::cout<<"array contain odd numbers"<<std::endl;
}
else{
        std::cout<<"array only have even numbers"<<std::endl;

}

}