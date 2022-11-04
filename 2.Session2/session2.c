/* 1. assign value from i to j bits in 32 integer
N    =  1000 0000 0000 0000
i,j  = 2,6 
MASK =  1111 1111 1000 0011  mask to clear from i to j and then shift M by i and OR with MASKED N
M    = 10011

#define MASK                     ((1 << (j-i+1))-1)                 0001 1111
#define MASK                     (((1 << (j-i+1))-1)<< i)           0111 1100
*/
#define MASK                     (~(((1 << (j-i+1))-1)<< i))        1000 0011
#define ASSIGN_VALUE(N,M,i,j)    N = ((N& (~(((1 << (j-i+1))-1)<< i)))|(M<<i))
/***********************************************************************************************************************/
/* 2. longest chain of ones 
 num =     110 1110 1111
find indexes of zero 
calculate the diff between indices
*/
#include <stdio.h>


int main(void){
	long n;
	scanf("%ld",&n);
	int zero_index[(sizeof(int)*8)]={0};
	int index=0;
	int i=0;
	int size=0;  //no of bits 
	int max=0; //max no of 1s in chain
	while (n>0) {
		if((n&1)==0){ //this bit is zero 
			zero_index[i]= index;
			i++;
		}
		n>>=1;
		size++;
		index++;
	}
	zero_index[i]=(--size);
	for(int j=0; j<=i;j++)printf("%d\n",zero_index[j]);
	//for(int j=0; j<i;j++)    
	//printf("%d\n",size);
    for(int j=0;j<=i;j++)  // jumping by one means to flip that 0 to one
	    if ((zero_index[j+2]-zero_index[j])>max) max =(zero_index[j+2]-zero_index[j]);
	printf("%d\n",max);    
	return 0;
}
/***************************************************************************************************************/
/* 3. no of bits to flip reach the other number
xor both number
count 1s in result
*/
#include <stdio.h>


int main(void){
	int n;
	int m;
	scanf("%ld",&n);
	scanf("%ld",&m);
	int result = n^m;
	int count=0;

	while (result>0) {
		if((result&1)==1) //this bit is one
		    count++;
		result>>=1;    
	} 
	printf("%d\n",count);    
	return 0;
}
/*******************************************************************************************************************/
/* 4. swap odd and even bits in integer



