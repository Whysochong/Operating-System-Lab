/*************************************
* Lab 1 Exercise 3
# Name: XIAO ZHENG ZE BILL
# Student No: A0239356W
# Lab Group: B07
*************************************/

#include "functions.h"

// Initialize the func_list array here!
int (*func_list[5])(int) = {
    add_one,
    add_two,
    multiply_five,
    square,
    cube
    }/* Fill this up */;

// You can also use this function to help you with
// the initialization. This will be called in ex3.c.
void update_functions() {}
