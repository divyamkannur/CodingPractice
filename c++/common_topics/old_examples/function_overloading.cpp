#include <iostream>
#include <cmath>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----

//square find area
int find_area(int side_length);

// rectangle find area
double find_area(double side_a, double side_b);


//----WRITE YOUR FUNCTION PROTOTYPES ABOVE THIS LINE----
//----DO NOT MODIFY THE CODE BELOW THIS LINE----

void area_calc() {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    int square_area{0};
    double rectangle_area{0};        
    square_area = find_area(2); // calls find area of square
    rectangle_area = find_area(4.5, 2.3); // calls find area of rectangle
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----


int find_area(int side_length)
{
    int area_of_square{0};
    area_of_square = side_length*side_length;
    return area_of_square;
}

double find_area(double length, double width)
{
    double area_of_rectangle{0};
    area_of_rectangle = length * width;
    return area_of_rectangle;
}



