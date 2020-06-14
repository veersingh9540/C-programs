//
//  main.c
//  c programs
//
//  Created by veer singh on 13/06/20.
//  Copyright © 2020 veer singh. All rights reserved.
//
// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% basic salary, and house rent allowance is 20% of basic salry. write a program to calculate his gross salary .


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code
    int salary;
    printf("Enter the basic salary\n");
    scanf("%d",&salary);
    int house_allowance = salary *0.2;
    int allowance = salary * 0.4;
    int gross_sal = house_allowance + allowance+ salary;
    printf("%d",gross_sal);
    return 0;
}
