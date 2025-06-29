#include <iostream>
using namespace std;

class book;
class author
{
    string name;
    int age;
    string country;
    book *b1;

public:
    author(string name = "", int age = 0, string country = "");

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getCountry()
    {
        return country;
    }

    void getAuthorInfo()
    {
        cout << "Author's Name: " << name << endl;
        cout << "Author's Age: " << age << endl;
        cout << "Author's Country: " << country << endl;
    }
};

class book
{
    string title;
    int year;
    author *a1;

public:
    book(string title = "", int year = 0)
    {
        this->title = title;
        this->year = year;
    }

    void setTitle(string title = "")
    {
        this->title = title;
    }
    void setYear(int year = 0)
    {
        this->year = year;
    }
};

author ::author(string name, int age, string country)
{
    b1 = new book();
    this->name = name;
    this->age = age;
    this->country = country;
}

int main()
{
    author a1("Eman Murtaza", 40, "USA");

    a1.getAuthorInfo();

    return 0;
}