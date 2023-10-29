//
//  main.c
//  theVelocity
//
//This program calculates the required speed after taking the time and distance from the user.
//
//  Created by Akif Duran on 29.10.2023.
//

#import <stdio.h>

int main(){
    
    //defining the variables:
    float duration, distance, reqSpeed;
    
    //getting inputs
    printf("Please enter the duration (in hour): \n");
    scanf("%f", &duration);
    
    printf("Please enter the distance (in km): \n");
    scanf("%f", &distance);
    
    
    //the operation:
    reqSpeed = distance / duration ;
    
    printf("The speed you need is: %f \n", reqSpeed);
    
    
    
    return 0;
}

