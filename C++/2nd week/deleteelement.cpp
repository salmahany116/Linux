#include<iostream>
void remove(int arr[],int& size,int num){
	for (int i=0;i<size;i++){
        if (num==arr[i]){
             for (int j=i;j<size-1;j++){
                arr[j]=arr[j+1];

             }
        }
}
 size--;

}
int main(){
int arr[]={1,2,3,4,5};
int size =sizeof(arr)/sizeof(arr[0]);
int num;
std::cout<<"please enter number to delete within 1:5"<<std::endl;
std::cin>>num;
remove (arr,size,num);
for (int i=0;i<size;i++){
    std::cout<<"arr after delete"<<arr[i]<<std::endl;
}
}