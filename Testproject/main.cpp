#include<iostream>
#include<string>
#include <vector>

using namespace std;

class Human
{
private:
    float height;
    string Name;
    string Surnname;

    // TODO
    // Define public methods to manipulate our data
public:

    Human(const float& height, const string& Name, const string& Surnname) : height(height), Name(Name), Surnname(Surnname) {
    };

    float getHeight() const {
        return height;
    }

    const string& getName() const {
        return Name;
    }

    const string& getSurname() const {
        return Surnname;
    }

};
//TOD
// create a class family
class Family {
private:
};
int main() {
    // TODO
    // Create 2 different humans
    Human Man(86.8, "ALEX", "DAO");
    Human Woman(43.6, "Alice", "Whiteman");

    int number;
    cin >> number;

    // an array of humans
    vector<Human> people;
    for (int i = 0; i < number; ++i) {
        float height;
        string Name, Surnname;
        cout << "enter Height:\n " << i + 1 << ":";
        cin >> height;
        cout << "enter Name:\n" << i + 1 << ":";
        cin >> Name;
        cout << "enter surnname:\n " << i + 1 << ":";
        cin >> Surnname;
        people.push_back(Human(height, Name, Surnname));
    }

    for (const auto& peoples : people) {
        cout << "height: \n " << peoples.getHeight() << endl;
        cout << "Name:\n" << peoples.getName() << endl;
        cout << "Surnname:\n" << peoples.getSurname() << endl;

    }

    // Print info about humans
    cout << "Man height \n " << Man.getHeight() << endl;
    cout << "Man Name\n" << Man.getName() << endl;
    cout << "Man Surnname\n" << Man.getSurname() << endl;
    cout << "Woman height\n" << Woman.getHeight() << endl;
    cout << "Woman Name\n" << Woman.getName() << endl;
    cout << "Woman Surnname\n" << Woman.getSurname() << endl;

    return 0;

};