#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void malelowAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (height * height);

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 25) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 19.01 && BFP < 25) { 
        printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 19) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

void malemedAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 28) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 22.01 && BFP < 28) { 
         printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 22) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

void malehighAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 30) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 25.01 && BFP < 30) { 
         printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 25) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

void femalelowAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 39) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 33.01 && BFP < 39) { 
         printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 33) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

void femalemedAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 40) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 35.01 && BFP < 40) { 
         printf("Your bidy fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 35) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

void femalehighAge(int age, int gender, int height, int weight) {
    double BMI;
    double BFP;

    BMI = (weight / (pow(height,2)));

    BFP = (1.39 * BMI) + (0.16 * age) - (10.34 * gender) - 9;

    if (BFP >= 42) {
        printf("You body fat percentage is HIGH.\n");
        printf("Your health may be at risk. Seek advice from a GP.\n");
    } else if (BFP > 36.01 && BFP < 42) { 
         printf("Your body fat percentage is ABOVE AVERAGE.\n"); 
        printf("Make an honest assessment of your diet and excercise levels.\n");
    } else if (BFP <= 36) {
        printf("Your body fat percentage is NORMAL.\n");
        printf("Maintain healthy diet and exerside regime.\n");
    }

}

int main() {

    int age;
    int gender;
    double height;
    double weight;
    double BMI;

    printf("Enter your age: ");
    scanf("%d", &age);
        if (age < 20 ) {
            printf("You are not old enough to take this test.\n");
            exit(0);
        } else if (age > 79) {
            printf("\nWARNING: You may not get an accurate BMI\n\n");
        }
    printf("Enter your height in meters (m): ");
    scanf("%lf", &height);

    printf("Enter your weight in kilograms (kg): ");
    scanf("%lf", &weight);

    printf("0 - Female\n1 - Male\n");
    printf("What is your gender?: ");
    scanf("%d", &gender);

    if (age >= 20 && age <= 39 && gender == 0) {
        femalelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 0) {
        femalemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 0) {
        femalehighAge(age, gender, height, weight);
    } else if (age >= 20 && age <= 39 && gender == 1) {
        malelowAge(age, gender, height, weight);
    } else if ( age >= 40 && age <= 59 && gender == 1) {
        malemedAge(age, gender, height, weight);
    } else if ( age >= 60 && gender == 1) {
        malehighAge(age, gender, height, weight);
    } 

    return 0;

}