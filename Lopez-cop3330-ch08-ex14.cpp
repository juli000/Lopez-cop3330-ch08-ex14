/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Julio Lopez
 */

#include "std_lib_facilities.h"

/*int addOne(const int a){
*    a = a + 1;
*    return a;
* }
*/

//Here we can see that if we uncomment the code it will not allow us to modify the
//value of a as it is a constant

int addOne(int a){
    a = a + 1;
    return a;
}

//Here is an example to show that without the const the non-refernce argument
//is able to be modified

//1. A non-reference function argument is an argument which is simply not referencing any point,
// A reference function argument can be show by f(int& r).
//
//2. A use of adding const to a non-reference function argument might be to elimate any possiblity
//of changing the variable as well as minimizing the chance that any runtime is wasted through
//useless check statements
//
//3.People don't do this often because it is simply not needed and it is essentially a back-up 
//in case you tried to modify something that did not need to be modified.
