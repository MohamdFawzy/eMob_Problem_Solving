#include <stdio.h>

	
void merge(int arr[],int beg, int end){
	int m= (beg+end)/2;//middle index
	int temp[end-beg+1];//temp array to sort elements in and then copy back to original array
	int i=beg; //  pointer to first element in 1st subarry
	int j=m+1; //  pointer to first element in 2nd subarry
	int k=0;   //  pointer to move on temp array
	while(i<=m&&j<=end){ //filling temp array with sorted elements from two sub arrays
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else 
			temp[k++]=arr[j++];
	}
	while(i<=m) // complete the remaing elements form each sub array 
		temp[k++]=arr[i++];
	while(j<=end)
		temp[k++]=arr[j++];
	for(i=0;i<k;i++) // copy back the data into its position in the original array
		arr[beg+i]=temp[i];
}

void merge_sort(int arr[],int beg, int end){
		if (beg==end)return;
	int m=(beg+end)/2;
	merge_sort(arr,beg,m);
	merge_sort(arr,m+1,end);
	merge(arr,beg,end);
}

void print_arr(int arr[],int n){
	for (int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main(){
	int arr[6]={545,23,54,-13,32,43};
	merge_sort(arr,0,5);
	print_arr(arr,6);
	
	return 0;
}