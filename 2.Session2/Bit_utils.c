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
#define CRSHFT_REG(REG,NO)      (REG) = ((REG>>NO)|((REG)<<(sizeof(REG)-NO)))
// Circular Left Shift
#define CLSHFT_REG(REG,NO)      (REG) = ((REG<<NO)|((REG)>>(sizeof(REG)-NO)))
// Assign a Value to a Register
#define ASSIGN_REG(REG,VALUE)   (REG) 
// Set The Register [1s]
#define SET_REG(REG)            (REG) &= -1
// Clear the Register [0s]      
#define CLR_REG(REG)            (REG) &= 0x0
// Toggle a Bit in Register
#define TGL_BIT(REG,Bit_NO)     (REG) ^= (1<<BIT_NO)
// Toggle a Register Value
#define TGL_REG(REG)                
// Set The High Nibble in a Register
#define SET_H_NIB(REG)
// Set The Low Nibble in a Register
#define SET_L_NIB(REG)
// Clear The High Nibble in a Register
#define CLR_H_NIB(REG)
// Clear The Low Nibble in a Register
#define CLR_L_NIB(REG)
// Get The High Nibble in a Register
#define GET_H_NIB(REG)
// Get The Low Nibble in a Register
#define GET_L_NIB(REG)
// Assign The High Nibble in a Register
#define ASSIGN_H_NIB(REG,VALUE)
// Assign the Low Nibble in a Register
#define ASSIGN_L_NIB(REG,VALUE)
// Toggle the High Nibble in a Register
#define TGL_H_NIB(REG)
// Toggle the Low Nibble in a Register
#define TGL_L_NIB(REG)
// Swap the Nibbles in a Register
#define SWAP_NIB(REG)



#endif
