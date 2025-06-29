#include <iostream>
using namespace std;

float divide(int numerator = 0, int denominator = 0)
{
    if (denominator == 0)
    {
        throw runtime_error("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main()
{
    int numerator = 0, denominator = 0;

    cout << "Enter Numerator: ";
    cin >> numerator;
    cout << "Enter Denominator: ";
    cin >> denominator;

    try
    {
        double result = divide(numerator, denominator);
        cout << "Result: " << result << endl;
    }
    catch (runtime_error e)
    {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
