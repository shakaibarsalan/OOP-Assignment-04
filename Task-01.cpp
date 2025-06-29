#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
class Pair
{
    T a;
    T b;

public:
    Pair() {}
    Pair(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    T getMax()
    {
        return maximum(a, b);
    }
};

int main()
{
    cout << "     ======== Find Maximum by using Function ========\n\n";
    cout << " -> By comparing two integers \"" << maximum<int>(2, 3) << "\" is maximum." << endl;
    cout << " -> By comparing two strings \"" << maximum<string>("Eman", "Murtaza") << "\" is maximum." << endl;
    cout << " -> By comparing two Floating Point Numbers \"" << maximum<float>(2.2, 1.1) << "\" is maximum." << endl
         << endl;

    cout << "       ======== Find Maximum by using Class ========\n\n";
    Pair<int> p1(2, 4);
    cout << " -> int:- Maximum value: " << p1.getMax() << endl;

    Pair<float> p2(7.4, 6.6);
    cout << " -> float:- Maximum value: " << p2.getMax() << endl;

    Pair<string> p3("hello", "world");
    cout << " -> string:- Maximum value: " << p3.getMax() << endl
         << endl;

    return 0;
}
