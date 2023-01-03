/*
 * main.cpp
 *
 *  Created on: Nov 19, 2022
 *      Author: Mohamed Fawzy
 */


/* 1. :: scope operator used when you want to use a func or method from a specified namespace
 * without using this namespace
*/

/*
 * 2. cout << boolalpha << x   to print x as true not 1
 */

/*
 * 3. wchar_t  char with size more than 1 byte
 */

#include <iostream>
#include "complex\complex.hpp"


using namespace std;
void func(char x){

}
void func(int x){

}

int main (){
	cout<<"Hello"<<endl;
	cout<<sizeof(bool);

	int arr[4]={1,2,3,4};

	for(int i :arr){
		cout << i<< endl;
	}

	std::cout << "Hello world!\n";
	complex c1(1,10);
	std::cout<<c1.GetReal()<<std::endl;

	return 0;
}
