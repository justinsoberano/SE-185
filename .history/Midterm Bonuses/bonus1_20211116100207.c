#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int highAge();

int medAge();

int femalelowAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));





}

int main() {

    int age;
    int gender;
    double height;
    double weight;
    double BMI;
    int 

    printf("Enter your age: ");
    scanf("%d", age);
        if (age < 20 ) {
            printf("You are not old enough to take this test.\n");
            exit(0);
        } else if (age > 79) {
            printf("\n\nWARNING: You may not get an accurate BMI\n\n");
        }
    printf("Enter your height in meters (m)\n");
    scanf("%lf", height);

    printf("Enter your weight in kilograms (kg)\n");
    scanf("%lf", weight);

    printf("0 - Female\n 1 - Male\n ");
    printf("What is your gender?\n");
    scanf("%d", gender);

    if (age >= 20 && age <= 39 && gender == 0) {
        BMI = femalelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 0) {
        BMI = femalemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 0) {
        BMI = femalehighAge(age, gender, height, weight);
    } else if (age >= 20 && age <= 39 && gender == 1) {
        BMI = malelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 1) {
        BMI = malemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 1) {
        BMI = malehighAge(age, gender, height, weight);
    } 

}