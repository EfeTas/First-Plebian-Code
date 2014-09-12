#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Please type a number: " << endl;
    cin >> number;
    cin.ignore();
    cout << "You've entered this number: " << number << endl;
    cin.get();

    return 0;
}
