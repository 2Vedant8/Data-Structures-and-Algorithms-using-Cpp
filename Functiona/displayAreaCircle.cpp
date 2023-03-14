#include <iostream>
using namespace std;
//Function to calculate area of circle
float circle_area(float radius) //Defining the function
{
    float area = 3.14 * radius * radius; //Calculating the area
    return area; //Returning the area
}
//Function to calculate circumference of circle
float circle_circumference(float radius) //Defining the function
{
    float circumference = 2 * 3.14 * radius; //Calculating the circumference
    return circumference; //Returning the circumference
}
int main()
{
    float r; //Declaring the radius
    cout<<"Enter the radius"<<endl;
    cin >> r; //Taking the radius as input
    float area = circle_area(r); //Calling the function
    float circumference = circle_circumference(r); //Calling the function
    cout << "Area of Circle is " << area << endl; //Printing the area
    cout << "Circumference of Circle is " << circumference << endl; //Printing the circumference
    return 0;
}