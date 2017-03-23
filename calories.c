/* Ciara Routly */

/* This program acts as a calorimeter to gauge the user's net 
calorie gain or loss throughout the day */ 

#include <stdio.h>

#define WALK_CAL 5
#define STAND_CAL 2
#define DRINK_CAL 20
#define FOOD_CAL 40
#define CALS_PER_POUND 3500

int main()
{
	int min_walking, min_standing;
	int min_drinking, min_eating;
	float total_calories;
	float pounds_lost;
	
	/* Prompt user to enter how many minutes they were walking and get info */
	printf("How many minutes were you walking?\n");
	scanf("%d", &min_walking);
	
	/*Prompt user to enter how many minutes they were standing and get info */
	printf("How many minutes were you standing?\n");
	scanf("%d", &min_standing);

	/* Prompt user to enter how many minutes they were drinking and get info */
	printf("How many minutes were you drinking?\n");
	scanf("%d", &min_drinking);

	/* Prompt user to enter how many minutes they were eating and get info */
	printf("How many minutes were you eating?\n");
	scanf("%d", &min_eating);

	/* Calculate the total calories */
	total_calories = (WALK_CAL*min_walking + STAND_CAL*min_standing)-
	(DRINK_CAL*min_drinking + FOOD_CAL*min_eating);

	/* Calculate pounds lost */
	pounds_lost = total_calories/CALS_PER_POUND;

	/* Check for the case that pounds lost is greater than 0, and edit pounds
	lost accordingly */
	if (pounds_lost > 0)
	printf("You lost %.3lf pounds today!\n", pounds_lost);
	else 
	printf("Weight loss is %.3lf pounds.\n", pounds_lost);
	
system ("pause");
return 0;
}
