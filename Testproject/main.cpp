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
    Human Husband;
    Human Wife;
    vector<Human> child;
public:

    
    Family(const Human& Husband, const Human& Wife, const vector<Human>& children) : Husband(Husband), Wife(Wife), child(child) {}

    void UserInterface() const{
        cout << "Husband:" << endl;
        cout << "Height:" << Husband.getHeight() << endl;
        cout << "Name:" << Husband.getName() << endl;
        cout << "Surnname:" << Husband.getSurname() << endl;
        cout << "Wife:" << endl;
        cout << "Height:" << Wife.getHeight() << endl;
        cout << "Name:" << Wife.getName() << endl;
        cout << "Surnname:" << Wife.getSurname() << endl;

        
        cout << "Name of our Parants:" << endl;
        cout << "MOM:\n" << Wife.getName() << endl;
        cout << "PAPA:\n" << Husband.getName() << endl;
    }


   
};


int main() {
    // TODO
    // Create 2 different humans
    Human Man(86.8, "ALEX", "DAO");
    Human Woman(43.6, "Alice", "DAO");

    int number;
    cin >> number;

    // an array of child
    vector<Human> child;
    for (int i = 0; i < number; ++i) {
        float height;
        string Name, Surnname;
        cout << "enter Height:\n " << i + 1 << ":";
        cin >> height;
        cout << "enter Name:\n" << i + 1 << ":";
        cin >> Name;
        cout << "enter surnname:\n " << i + 1 << ":";
        cin >> Surnname;
        child.push_back(Human(height, Name, Surnname));
    }

    cout << "Child" << endl;
    for (const auto& child : child)
    {
        cout << "Height: " << child.getHeight() << endl;
        cout << "Name: " << child.getName() << endl;
        cout << "Surname: " << child.getSurname() << endl;
    }

    Family myFamily(Man, Woman, child);
    myFamily.UserInterface();

    return 0;

};