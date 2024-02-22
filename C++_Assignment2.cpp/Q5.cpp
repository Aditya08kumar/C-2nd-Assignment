//Q5. WAP to find the difference between ASCII of two characters ,take them as input .


#include<iostream>
using namespace std;
int main()
{
    char ch_1,ch_2;
    cout<<"Enter the first character : ";
    cin>>ch_1;
    cout<<"Enter the second character : ";
    cin>>ch_2;

    int x = (int)ch_1;
    int y = (int)ch_2;

    cout<<"The difference between ASCII of two characters i.e. "<<ch_1<<" and "<<ch_2<<" is "<<x-y;
    return 0;
}