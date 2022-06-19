/*
CS1010E 1112L2P1: What time is it?
Problem statement:
Given a start time ST and end time ET, expressed by the hour (0 to 23) and minute (0 to 59)
Show the total elapsed time (hour and minute) between start time and end time 
For simplicity: You can assume that ST and ET are in the same day, so ST is always smaller than ET
*/

#include <stdio.h>

int main() {
    
    //declare variables
    int startHour = 0, startMin = 0, endHour = 0, endMin = 0;
    int elapseHour = 0, elapseMin = 0;
    
    //scan user input
    printf("Input the Hours and Mins of the Start Time in 24H format: ");
    scanf("%d %d", &startHour, &startMin);
    printf("Input the Hours and Mins of the End Time in 24H format:");
    scanf("%d %d", &endHour, &endMin);
    
    //calculate elapsed time
        if (endMin<startMin){
    elapseMin = 60 - (startMin - endMin);
    elapseHour= endHour - startHour - 1;   
    }
    else {
    elapseMin = endMin - startMin;
    elapseHour= endHour - startHour;           
    }
    
    //output to user
    printf("The elapsed from %d:%d to %d:%d is: %d hours and %d mins ", startHour, startMin, endHour, endMin, elapseHour, elapseMin);
    
    return 0;
}

