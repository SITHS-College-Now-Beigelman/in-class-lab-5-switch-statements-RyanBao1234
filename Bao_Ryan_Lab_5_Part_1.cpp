//Ryan Bao
//Lab 5 Part 1
//10/8/2024

#include <iostream>                                       //io stream for ease of coding

using namespace std;                                      //std for ease of coding

int main()                                                //initialize main
{
    float exercise_duration;                                    //initialize variable
    float weight;
    float walking_slowly;
    float walking_quickly;
    float jogging;
    string type_exercise;

    cout << "What type of exercise did you do, for how long, and what is your weight in kilograms? Ex: Walking_quickly 20 50 " << endl;
    cin >> type_exercise >> exercise_duration >> weight;
    cout << endl;

    if (type_exercise == "Jogging" || type_exercise == "jogging" || type_exercise == "JOGGING")
    {
        jogging = (exercise_duration) * (8.8 * 3.5 * weight) / 200;
        cout << "Calories Burned: " << jogging << endl;
    }
    if (type_exercise == "Walking_Quickly" || type_exercise == "Walking_quickly" || type_exercise == "walking_quickly")
    {
        walking_quickly = (exercise_duration) * (3 * 3.5 * weight) / 200;
        cout << "Calories Burned: " << walking_quickly << endl;
    }
    if (type_exercise == "Walking_Slowly" || type_exercise == "Walking_slowly" || type_exercise == "walking_slowly")
    {
        walking_slowly = (exercise_duration) * (2 * 3.5 * weight) / 200;   
        cout << "Calories Burned: " << walking_slowly << endl;
    }

    //EXTRA CREDIT
    float calories_wanna_burn;
    float extra_walking_slowly;
    float extra_walking_quickly;
    float extra_jogging;
    
    cout << "How much calories do you want to burn? ";
    cin >> calories_wanna_burn;
    cout << endl;

    if (type_exercise == "Jogging" || type_exercise == "jogging" || type_exercise == "JOGGING")
    {
        extra_jogging = (calories_wanna_burn * 200)/(8.8 * 3.5 * weight);
        cout << "Minutes Needed: " << extra_jogging << endl;
    }
    if (type_exercise == "Walking_Quickly" || type_exercise == "Walking_quickly" || type_exercise == "walking_quickly")
    {
        extra_walking_quickly = (calories_wanna_burn * 200)/(3 * 3.5 * weight);
        cout << "Minutes Needed: " << extra_walking_quickly << endl;
    }
    if (type_exercise == "Walking_Slowly" || type_exercise == "Walking_slowly" || type_exercise == "walking_slowly")
    {
        extra_walking_slowly = (calories_wanna_burn * 200)/(2 * 3.5 * weight); 
        cout << "Minutes Needed: " << extra_walking_slowly << endl;
    }
    
return 0;
}

/*
What type of exercise did you do, for how long, and what is your weight in kilograms? Ex: Walking_quickly 20 50 
Jogging 20 50

Calories Burned: 154
How much calories do you want to burn? 154

Minutes Needed: 20
*/