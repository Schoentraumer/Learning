/*
Time to travel cargo ship based on natifcal miles
*/
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int days, time;

int main()
{
    //get the distance
    printf("Pleave tell me the natical distance from one destination to the next.");
    float NAT = GetInt();
    
    //get to speed
    printf("Please tell me the speed of the boat in mph.");
    float MPH = GetInt();
    
    float time = NAT / MPH;
    float days = time / 24;
    
    printf("The number of days is: %.2f\n", days);
    
    return 0;
    
}
