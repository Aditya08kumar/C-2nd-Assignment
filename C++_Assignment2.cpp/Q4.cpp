//Q4. WAP for finding the volume of the cylinder by taking radius and height as input.


#include<iostream>
using namespace std;
int main()
{
    float r,h,pi = 3.1415;
    printf("Enter the value of radius of cylinder : ");
    cin>>r;
    printf("Enter the value of height of cyclinder : ");
    cin>>h;

    float volume = pi*r*r*h;

    cout<<"The volume of cylinder is : "<<volume;
    return 0;
}