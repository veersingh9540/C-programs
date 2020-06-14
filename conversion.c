//
//  main.c
//  c programs
//
//  Created by veer singh on 13/06/20.
//  Copyright © 2020 veer singh. All rights reserved.
// The distance between the two cities is (in km ) is input through the keyboard write a program to convert the entered distance in cm , inches and centimeters.


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code
    int city_dist;
    printf("Hi guys Enter the distance \n");
    scanf("%d",&city_dist);
    int dist_cm = city_dist*100000;
    int dist_m = city_dist*1000;
    int dist_inch = city_dist*39370.1;
    printf("The distance in cm is  %d\n", dist_cm);
    printf("The distance in Metre is %d\n",dist_m);
    printf("The distance in inch is %d\n", dist_inch);
    return 0;
}
