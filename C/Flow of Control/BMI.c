/*
WAP to calculate bmi of a person and print the bmi values as per the following range
bmi= weight(kgs)/(height(mtr)*height(mtr))
starvation    <15
anaerobic     15.1 to 17.5
underweight   17.6 to 18.5
ideal         18.6 to 24.9
overweight    25 to 29.9
obese         30 to 39.9
morbidly obese 40.0 or above
*/
#include <stdio.h>
int main()
{
    float weight, height, bmi;
    printf("Enter the weight of the person in kgs: ");
    scanf("%f", &weight);
    printf("Enter the height if the person in mtrs: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("BMI of the person is: %.2f\n", bmi);
    if (bmi < 15)
    {
        printf("The person is in starvation !! ");
    }
    else if (bmi >= 15.1 && bmi <=17.5)
    {
        printf("The person is in anaerobic state !! ");
    }
    else if (bmi >= 17.6 && bmi <= 18.5)
    {
        printf("The person is underweight");
    }
    else if (bmi >=18.6 && bmi <= 24.9)
    {
        printf("The person is in ideal state");
    }
    else if (bmi >=25 && bmi<= 29.9)
    {
        printf("The person is overweight");
    }
    else if (bmi >= 30 && bmi <= 39.9)
    {
        printf("The person is obese");
    }
    else
    {
        printf("The person is morbidly obese !!");
    }
}