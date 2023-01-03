/*
 * complex.cpp
 *
 *  Created on: Nov 26, 2022
 *      Author: Mohamed Fawzy
 */




// Online C++ compiler to run C++ program online
//it a good practice to add the class in .h file and implment the functions in cpp file using :: "scope operator"

// i can give initilize variables
/* float real=0;
 * float img=0;
 */

/*uniform initilization
 * float real {0};
 * float img {0};
 *
 */

/*initilizier list
 * complex():real(r),img(i) {} // before passing arguments inside function u can initliize before entering and go into func
 */

/*delegate constructor
 * it look beside ":"before entering the func
 * complex() : complex(2.5,5.9){}
 * complex(float r) :complex(r,0){}
 *
 * complex (float r, float i){ //delegate constructor to be used(shared)between all other constructors
 * real=r;
 * img=i
 * }
 *
 * when passing complex c1
 * it calls the constructor it go to default check for : and then try to preform delegate
 */

/*complex()=default;
 * to force the compiler to make a default constructor
 * be ware that the default constructor is only added when there is no constructors implemented (paramterized)
 */

/* complex()=delete;
 * this is when u force the compilier to not add a default constructor
 */

#include <iostream>
#include "complex.hpp"

complex::complex(){
    real=0;
    img=0;
}
complex :: complex(float r=0){
    real=r;
}
complex::complex(float r, float i){
    real=r;
    img=i;
}
void complex:: SetReal(float r){
    real=r;
}

void complex:: SetImg(float i){
    img=i;
}
float complex:: GetReal(){
    return real;
}
float complex:: GetImg(){
    return img;
}
complex :: ~complex(){
    std::cout<<"DISTRUCTOR";
}


/*static variables accessed by class , non static variables accessed by object
 * can be increamented in constructor
 */
int complex :: count  =0;
