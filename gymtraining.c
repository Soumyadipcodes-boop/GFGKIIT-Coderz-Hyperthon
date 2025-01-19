#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    char day[20];

    printf(" Press 1 for Geeks for Geeks Gym training\n");
    printf("Press 2 for personalised training\n");
    printf("Press 3 to skip");
    scanf("%d\n",&choice);
    getchar();

    switch(choice) {
         case 1:
         printf("Enter todays day and plan your fitness training");
         fgets(day,sizeof(day),stdin);
         day[strcspn(day,"\n")]=0;

         displayWorkoutDetails(day);
         break;

         case 2:
         personalisedTraining();
         break;

         case 3:
         printf("Skip today's training");
         break;

    }
    return 0;
    }

    voidDisplayWeekSchedule() {
        printf("\nGFG Workout Plan");
        printf("Monday:Chest Day");
        printf("Tuesday:Legs Day ");
        printf("Wednesday: Arms Day");
        printf("Thursday: Cheat Day");
        printf("Abs Workout Day");
        printf("Saturday: Shoulder Day");
        printf("Sunday: Gym Closed Day");
    }

    void displayWorkoutDetails;