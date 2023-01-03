/*
 * complex.hpp
 *
 *  Created on: Nov 26, 2022
 *      Author: Mohamed Fawzy
 */

#ifndef COMPLEX_COMPLEX_HPP_
#define COMPLEX_COMPLEX_HPP_

struct complex{
    private:
        float real;
        float img;
    public:
        static int count; /* static variables to be class dep and shared between all objects,
         static variables to be init outside the class
         size of object does not contain this varible*/

        complex();
        complex(float r);
        complex(float r=0, float i=0);
        void SetReal(float r);
        void SetImg(float i);
        float GetReal();
        float GetImg();
        ~complex();
};




#endif /* COMPLEX_COMPLEX_HPP_ */
