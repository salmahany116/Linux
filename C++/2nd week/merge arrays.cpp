#include<iostream>
void merge(int arr1[],int arr2[],int& size1,int& size2){
    for(int i=0;i<size2;i++){
        arr1[size1]=arr2[i];
        ++size1;
    }
}
int main(){
int arr1[]={1,2,3,4,5};
int arr2[]={6,7,8,9,10};
int size2=sizeof(arr2)/sizeof(arr2[0]);
int size1 =sizeof(arr1)/sizeof(arr1[0]);
merge(arr1,arr2,size1,size2);
std::cout<<"array after merged ";
for (int i=0;i<size1;i++){
std::cout<<arr1[i]<<std::endl;

}
}