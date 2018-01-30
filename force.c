//The purpose of this program is to calculate the applied force of a mechanical system as a function of time. Laura Cadenas Sainz 

#include <stdio.h>
#include <math.h>

int main(void)
{
	//Declare the variables
	double time, force;
	
	//Set up output
	printf("Time     Force\n");

	//Set up a for loop to perform calculations as the time increases
	for(time = 0; time <= 10; time+= 0.5)
	{
		if(time >= 0 && time <= 3.0)
		    force = 20;
		else
		if(time > 3.0 && time <= 6.0)
		    force = 4 * (time + 2);
		else
		    force = 4 * (pow(time,2) + 2* time);
		
		printf(" %.1f      %.1f\n", time, force);
	}
	
	return 0;
}
