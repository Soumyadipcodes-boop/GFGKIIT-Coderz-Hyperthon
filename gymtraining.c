#include <stdio.h>
#include <string.h>

void displayWeekSchedule();
void displayWorkoutDetails(char* day);
void personalizedTraining();
void printChestWorkout();
void printLegsWorkout();
void printArmsWorkout();
void printAbsWorkout();
void printShouldersWorkout();

int main() {
    int choice;
    char day[20];


displayWeekSchedule();
printf("Press 1 for GeeksforGeeks week training\n");
printf("Press 2 to do personalized training\n");
printf("Press 3 to skip\n");
scanf("%d", &choice);
getchar(); 

switch (choice) {

case 1:
    printf("Enter today's day for fitness program: ");
    fgets(day, sizeof(day), stdin);
    day[strcspn(day, "\n")] = 0; 
    displayWorkoutDetails(day);
    break;

    case 2:
    personalizedTraining();
    break;

    case 3:
    printf("Skipping today's workout... but don't forget to write some clean code instead!\n");
    break;
    }

    return 0;
}
void displayWeekSchedule() {
    printf("\nGeeksforGeeks Workout Plan:\n");
    printf("Monday: Chest Day\n");
    printf("Tuesday:Legs Day\n");
    printf("Wednesday: Arms Day\n");
    printf("Thursday: Cheat Day\n");
    printf("Friday: Abs Workout Day\n");
    printf("Saturday: Shoulders Day\n");
    printf("Sunday: Gym Closed\n");
}

void displayWorkoutDetails(char* day) {
    if (strcmp(day, "Monday") == 0) {

        printChestWorkout();

    } else if (strcmp(day, "Tuesday") == 0)
     {
        printLegsWorkout();

    } 
    else if (strcmp(day, "Wednesday") == 0)
     {
        printArmsWorkout();

    } 
    else if (strcmp(day, "Thursday") == 0) 
    {
        printf("Thursday: Cheat Day.\n");
    }
     else if (strcmp(day, "Friday") == 0) {

        printAbsWorkout();

    } 
    else if (strcmp(day, "Saturday") == 0) 
    {
        printShouldersWorkout();

    } 
    else if (strcmp(day, "Sunday") == 0)
     {
        printf("Sunday: Code Shutdown. Gym Closed.\n");
    } 
    else {
        printf("Invalid day name entered.\n");
    }
}

void personalizedTraining() {
    int choice;
    printf("\nPersonalized Training:\n");
    printf("Press 1 for Chest Workout\n");
    printf("Press 2 for Legs Workout\n");
    printf("Press 3 for Arms Workout\n");
    printf("Press 4 for Abs Workout\n");
    printf("Press 5 for Shoulders Workout\n");
    printf("Press 6 to go back\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printChestWorkout();
            break;
        case 2:
            printLegsWorkout();
            break;
        case 3:
            printArmsWorkout();
            break;
        case 4:
            printAbsWorkout();
            break;
        case 5:
            printShouldersWorkout();
            break;
        case 6:
            printf("Going back \n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}
