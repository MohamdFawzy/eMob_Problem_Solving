// bit_utils.c - eMobility ITI, Winter 2022
// Mohamed Fawzy

// TODO: Implement the following Macros like a function in a generic way !
// NOTE: If there're multiple ways please feel free to implement all possible solutions .


#ifndef BIT_UTILS_H
#define BIT_UTILS_H

#define SET_BIT(REG,Bit_NO)     (REG) |= (1<<(Bit_NO)) // For example !
#define CLR_BIT(REG,Bit_NO)     (REG) &= (~(1<<BIT_NO))
// Get The Bit number Bit_NO
#define GET_BIT(REG,Bit_NO)     (REG) &= (1<<BIT_NO)
// Right Shift by No
#define RSHFT_REG(REG,NO)       (REG) = (REG)>>(NO)
// Left Shift by NO
#define LSHFT_REG(REG,NO)       (REG) = (REG)<<(NO) 
// Circular Right Shift
#define CRSHFT_REG(REG,NO)      (REG) = ((REG>>NO)|((REG)<<(8*sizeof(REG)-NO)))
// Circular Left Shift
#define CLSHFT_REG(REG,NO)      (REG) = ((REG<<NO)|((REG)>>(8*sizeof(REG)-NO)))
// Assign a Value to a Register
#define ASSIGN_REG(REG,VALUE)   (REG) =VALUE
// Set The Register [1s]
#define SET_REG(REG)            (REG) &= (-1u)
// Clear the Register [0s]      
#define CLR_REG(REG)            (REG) &= (0x0)
// Toggle a Bit in Register
#define TGL_BIT(REG,Bit_NO)     (REG) ^= (1<<BIT_NO)
// Toggle a Register Value
#define TGL_REG(REG)            (REG) ^= (-1u)   
// Set The High Nibble in a Register
#define SET_H_NIB(REG)          (REG) |= (~((1<<((8*sizeof(REG)/2)+1))-1))        //1111 0000
// Set The Low Nibble in a Register
#define SET_L_NIB(REG)          (REG) |= ((1<<((8*sizeof(REG)/2)+1))-1)           //0000 1111
// Clear The High Nibble in a Register
#define CLR_H_NIB(REG)          (REG) &= ((1<<((8*sizeof(REG)/2)+1))-1)           //0000 1111
// Clear The Low Nibble in a Register
#define CLR_L_NIB(REG)          (REG) &= (~((1<<((8*sizeof(REG)/2)+1))-1))       //1111 0000
// Get The High Nibble in a Register
#define GET_H_NIB(REG)          (REG) &= (~((1<<((8*sizeof(REG)/2)+1))-1))       //1111 0000
// Get The Low Nibble in a Register
#define GET_L_NIB(REG)          (REG) &= ((1<<((8*sizeof(REG)/2)+1))-1)           //0000 1111
// Assign The High Nibble in a Register
#define ASSIGN_H_NIB(REG,VALUE) (REG) = (((REG) & ((1<<((8*sizeof(REG)/2)+1))-1)) | (VALUE<<(8*sizeof(REG)/2)))
// Assign the Low Nibble in a Register
#define ASSIGN_L_NIB(REG,VALUE) (REG) = ((REG) & (~((1<<((8*sizeof(REG)/2)+1))-1)) | (VALUE))
// Toggle the High Nibble in a Register
#define TGL_H_NIB(REG)         (REG) ^= (~((1<<((8*sizeof(REG)/2)+1))-1))       //1111 0000
// Toggle the Low Nibble in a Register
#define TGL_L_NIB(REG)         (REG) ^= ((1<<((8*sizeof(REG)/2)+1))-1)           //0000 1111
// Swap the Nibbles in a Register
#define SWAP_NIB(REG)          (REG) = ((REG>>(8*sizeof(REG)/2)|((REG)<<(8*sizeof(REG)/2)))   



#endif
