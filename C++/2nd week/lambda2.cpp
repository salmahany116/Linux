#include<iostream>
#include<algorithm>

int main(){

    int arr[]={1,2,3,4,5,8,7};
    int size =sizeof(arr)/sizeof(arr[0]);
    
   auto s =[](int arr[],int& size){
    std::cout<<"array in ascending order "<<std::endl;
    std::sort(arr,arr+size);
    for (int i=0;i<size;i++){
        std::cout<<arr[i]<<std::endl;
    }
    std::cout<<"array in descending order "<<std::endl;
   std::sort(arr,arr+size,std::greater <int> ());
   for (int i=0;i<size;i++){
        std::cout<<arr[i]<<std::endl;
    }
   };
    s(arr ,size);
    
}