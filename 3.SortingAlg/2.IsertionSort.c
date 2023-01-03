#include <stdio.>

void insertsort(int arr[],int size){
	for (int i=0;i<n;i++){
		int temp = arr[i];
		int j;
		for(j=i;j>0 && temp<arr[j-1];j--){
			arr[j]=arr[j-1];
		}
		arr[j]=temp;
	}
}

int main(){
	
}