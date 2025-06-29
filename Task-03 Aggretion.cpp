#include <iostream>
using namespace std;

class author
{
    string name;
    int age;
    string country;

public:
    author(string name, int age, string country)
    {
        this->name = name;
        this->age = age;
        this->country = country;
    }

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
};

class book
{
    string title;
    int year;
    author *a1;

public:
    book(string title, int year, author *author)
    {
        this->title = title;
        this->year = year;
        this->a1 = author;
    }

    void getAuthorInfo()
    {
        cout << "Author's Name: " << a1->getName() << endl;
        cout << "Author's Age: " << a1->getAge() << endl;
        cout << "Author's Country: " << a1->getCountry() << endl;
    }
};
int main()
{
    author a1("Eman Murtaza", 40, "USA");
    book b1("Sample Book", 2023, &a1);

    b1.getAuthorInfo();

    return 0;
}