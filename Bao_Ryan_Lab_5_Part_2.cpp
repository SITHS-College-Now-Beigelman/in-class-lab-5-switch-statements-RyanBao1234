//Ryan Bao
//Lab 5 Part 2
//10/8/2024

#include <iostream>                                       //io stream for ease of coding
#include<iomanip>

using namespace std;                                      //std for ease of coding

int main()                                                //initialize main
{
    float gigs_in_plan;                                    //initialize variables
    float low_quality;
    float medium_quality;
    float high_quality;
    string plan;
 
    cout << "What type of streaming do you want to do and how many gigabytes do you have in your monthly plan?  Ex: LOW 20   ";  
    cout << endl;                    
    cin >> plan >> gigs_in_plan;
    cout << endl;

    gigs_in_plan = gigs_in_plan * 1000; 
    cout << fixed << setprecision(2);                                             
    if (plan == "LOW")
    {
        low_quality = gigs_in_plan/43.2;
        cout << "Low Quality: " << low_quality << " hours" << endl;
    }
    if (plan == "MEDIUM")
    {
        medium_quality = gigs_in_plan/72;
        cout << "Medium Quality: " << medium_quality << " hours" << endl;
    }
    if (plan == "HIGH")
    {
        high_quality = gigs_in_plan/115.2;
        cout << "High Quality: " << high_quality << " hours" << endl;
    }
    
return 0;
}

/*
What type of streaming do you want to do and how many gigabytes do you have in your monthly plan?  Ex: LOW 20   
LOW 20
Low Quality: 462.96 hours
*/