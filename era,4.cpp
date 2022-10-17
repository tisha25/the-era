#include <iostream>

using namespace std;

struct student
{
    int id;
    int roll;
    char name[50];
    char colour[50];
    int model;
    int year;
} s[10];

int main()
{
    cout << "Enter Information Of Car : " << endl;

    // storing information
    for(int i = 0; i <=3 ; ++i)
    {
        s[i].roll = i+1;
        cout << "For Car " << s[i].roll << "," << endl;

        cout << "Enter Car Id: ";
        cin >> s[i].id;

        cout << "Enter Company Name : ";
        cin >> s[i].name;
        
        cout << "Enter Car Colour : ";
        cin >> s[i].colour;
        
        cout << "Enter Car Model : ";
        cin >> s[i].model;
        
        cout << "Enter Car Realies Year : ";
        cin >> s[i].year;
        

        cout << endl << endl;
    }

    cout << "Displaying Car Information: " << endl;

    // Displaying information
    for(int i = 0; i <=3 ; ++i)
    {
        cout << "\n Car number: " << i+1 << endl;
        cout << "Id : " << s[i].id<< endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Colour : " << s[i].colour << endl;
        cout << "Model : " << s[i].model << endl;
		cout << "Year : " << s[i].year << endl;
    }

    return 0;
}
