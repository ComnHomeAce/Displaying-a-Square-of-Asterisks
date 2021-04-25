//This program prints a square of user-defined size

#include <iostream>
using namespace std;

char squareOfAsterisks(int side)
{
    //Loop for printing each line
    for (int i = 0; i < side; i++)
    {
        //Loop for printing the asterisks
        for (int j = 0; j < side; j++)
        {
            cout << "* "; //I added a space after the asterisk so it prints a true square shape
        }
        cout << "\n";
    }
    return 0;
}

int main()
{
    int side;

    cout << "This program prints a square of user-defined size\n\n";
    cout << "Enter side length of square: ";
    cin >> side;
    cout << "\n";

    cout << squareOfAsterisks(side);
}