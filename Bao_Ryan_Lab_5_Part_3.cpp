//Ryan Bao
//Lab 5 Part 3
//10/8/2024

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std; 

int main() 
{   
    /*
    //PART 1
    srand(time(0));                                     //initialize variables
    int west;
    int east;
    int north;
    int south;
    north = 0;
    south = 0;
    east = 0;
    west = 0;
    int direct;
    int final_destination_x;
    int final_destination_y;
    string x_direct;
    string y_direct;

    for (int i = 0; i < 25; i += 1)         //start for statement to get robot movement                                                              
    {
        direct = rand() % 4 + 1;                
        switch(direct)                     //cases for different direction values               
        {
        case 1:
            north += 1;
            break;
        case 2:
            south += 1;
            break;
        case 3:
            east += 1;
            break;
        case 4:
            west += 1;
            break;
        }
    }

    if (north > south)                            //to write less lines i used 4 if statements to calculate the overall direction the robot moved in
    {
        final_destination_x = north - south;
        x_direct = "north";
    }
    if (south > north)
    {
        final_destination_x = south - north;
        x_direct = "south";
    }
    if (west > east)
    {
        final_destination_y = west - east;
        y_direct = "west";
    }
    if (east > west)
    {
        final_destination_y = east - west;
        y_direct = "east";
    }

    if (north > south || south > north && west > east || east > west)                                //different scenarios for results
    {
        cout << "The robot has traveled " << final_destination_x << " blocks to the " << x_direct << " and " << final_destination_y << " blocks to the " << y_direct << "." << endl;
    }
    if (north == south)
    {
        cout << "The robot has traveled " << final_destination_y << " blocks to the " << y_direct << endl;
    }
    if (west == east)
    {
        cout << "The robot has traveled " << final_destination_x << " blocks to the " << x_direct << endl;
    } 

PART 1
North: 4           
South: 8
East: 6
West: 7
The robot has traveled 4 blocks to the south and 1 blocks to the west.
*/

    //PART 2
    srand(time(0));
    int east2;                            //initialize variables
    int north2;
    east2 = 0;
    north2 = 0;
    int direct2;
    int i = 0;
    int printed;
    printed = 0;

    while (i != 25)                               //set number of loops to 25. I didn't set it any higher because I felt like any more than that would never reach (2,3) if it didn't do so already                                          
    {
        direct2 = rand() % 4 + 1;                
        switch(direct2)                    
        {
        case 1:
            north2 += 1;
            break;
        case 2:
            north2 -= 1;
            break;
        case 3:
            east2 += 1;
            break;
        case 4:
            east2 -= 1;
            break;
        } 
        i += 1;                                      //continue i for loop
        cout << i << endl;                                      //code checking
        cout << "North: " << north2 << endl;                    //code checking
        cout << "East: " << east2 << endl;                      //code checking
        if (east2 == 2 && north2 == 3)             //if destination reached print number of steps and break the while loop by setting i equal to 25 and set printed to 1 so next if statement won't print robot didnt make it
        {
            cout << "It took " << i << " steps to get to this destination (2,3)." << endl;
            printed = 1;
            i = 25;
        }
    }
    if (printed == 0)                         //if robot didn't make it print it
    {
        cout << "The robot didn't make it. " << endl;
    }
return 0;
}

/*
1
North: 0
East: 1
2
North: 1
East: 1
3
North: 1
East: 2
4
North: 0
East: 2
5
North: 0
East: 3
6
North: 1
East: 3
7
North: 2
East: 3
8
North: 3
East: 3
9
North: 3
East: 4
10
North: 3
East: 5
11
North: 2
East: 5
12
North: 2
East: 6
13
North: 2
East: 5
14
North: 2
East: 6
15
North: 1
East: 6
16
North: 2
East: 6
17
North: 2
East: 5
18
North: 3
East: 5
19
North: 3
East: 4
20
North: 3
East: 3
21
North: 3
East: 2
It took 21 steps to get to this destination (2,3).
*/