#include <stdio.h>




// 1. Get bit from X
#define GET_BIT(NUM,BIT)        (NUM)&=(1<<BIT)
// 2. Clear n_th bit 
#define CLR_BIT(NUM,BIT)        (NUM)&=(~(1<<BIT))
// 3. Clear right most 1
#define CLR_RM1(NUM)	        (NUM)&=(NUM-1)	
// 4. Clear Trailing 1s
#define CLR_TRAIL1s(NUM)        (NUM)&=(NUM+1)
// 5. Set right most 0
#define SET_RM0(NUM)            (NUM)|=(NUM+1)		
// 6. Set Trailing 0s
#define SET_TRAIL0s(NUM         (NUM)|=(NUM-1)
// 7. Clear all bits from MSB to n_th bit inclusive
#define CLR_LEFTBITS(NUM,BIT)   (NUM)&=((1<<BIT)-1)
// 8. Clear all bits form n_th bit to LSB (both inclusive)
#define CLR_RIGHTBITS(NUM,BIT)  (NUM)&=(~(1<<(BIT+1)-1))
// 9. Toggle n_th bit
#define TOGGLE_BIT(NUM,BIT)     (NUM)^=(1<<BIT)
//10. Isolate right most 1
#define ISO_RM1(NUM)            (NUM)&=(~(NUM-1))


int main(void){

}