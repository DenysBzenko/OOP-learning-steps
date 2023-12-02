#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Human
{
private:
    float height;
    string Name;
    string Surnname;

public:
    Human(const float& height, const string& Name, const string& Surnname) : height(height), Name(Name), Surnname(Surnname) {
    }

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

class Family
{
private:
    Human Husband;
    Human Wife;
    vector<Human> children;

public:
    Family(const Human& Husband, const Human& Wife) : Husband(Husband), Wife(Wife) {
    }

    void addChild(const Human& child) {
        children.push_back(child);
    }

    void UserInterface() const {
        cout << "Husband:" << endl;
        cout << "Height:" << Husband.getHeight() << endl;
        cout << "Name:" << Husband.getName() << endl;
        cout << "Surnname:" << Husband.getSurname() << endl;
        cout << "Wife:" << endl;
        cout << "Height:" << Wife.getHeight() << endl;
        cout << "Name:" << Wife.getName() << endl;
        cout << "Surnname:" << Wife.getSurname() << endl;

        cout << "Children:" << endl;
        for (const auto& child : children) {
            cout << "Height:" << child.getHeight() << endl;
            cout << "Name:" << child.getName() << endl;
            cout << "Surname:" << child.getSurname() << endl;
        }
    }
};

class Friendship {
private:
    Family& family1;
    Family& family2;

public:
    Friendship(Family& family1, Family& family2) : family1(family1), family2(family2) {
    }

    void infoFriends() const {
        cout << "Friends Family:\n";
        cout << "First friends family:\n";
        family1.UserInterface();
        cout << "Second friends family:\n";
        family2.UserInterface();
        
    }
};

class FriendsTester {
public:
    static void testFriends() {
        Human Man1(80.0, "DAN", "BOLAN");
        Human Woman1(75.0, "KRIS", "BOLAN");

        Human Man2(85.0, "IVAN", "CRASH");
        Human Woman2(78.0, "NATA", "CRASH");

        Family family1(Man1, Woman1);
        Family family2(Man2, Woman2);

        Friendship friendship(family1, family2);

        friendship.infoFriends();
    }
};



class FamilyTester {
public:
    static void testFamily() {
        Human Man(86.8, "ALEX", "DAO");
        Human Woman(43.6, "Alice", "DAO");

        int number;
        cout << "Enter the number of children: ";
        cin >> number;

        vector<Human> child;
        for (int i = 0; i < number; ++i) {
            float height;
            string Name, Surnname;
            cout << "enter Height for child " << i + 1 << ": ";
            cin >> height;
            cout << "enter Name for child " << i + 1 << ": ";
            cin >> Name;
            cout << "enter surname for child " << i + 1 << ": ";
            cin >> Surnname;
            child.push_back(Human(height, Name, Surnname));
        }
        Family myFamily(Man, Woman);
        for (const auto& childs : child) {
            myFamily.addChild(childs);
        }

        myFamily.UserInterface();
    }
   
};

int main() {
    
    FamilyTester::testFamily();
    FriendsTester::testFriends();

    return 0;
}
