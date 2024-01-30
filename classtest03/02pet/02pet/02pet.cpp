#include <iostream>
using namespace std;

class Pet
{
public:
    string getName() { return name; }
    bool getNeuterSpayed(){ return neuterSpayed; }
    bool getTalks() { return talks; }
    Pet(string newname="");
    virtual void printDescription() { cout << "I don't know what pet it is" << endl; };;
private:
    string name;
    bool neuterSpayed;
    bool talks;
};
Pet::Pet(string newname) :name(newname), neuterSpayed(false), talks(false) { }


class Dog :public Pet
{
public:
    void printDescription() {
        cout << "Dog named " << getName() << endl;
        cout << "Neuter/Spayed: " << getNeuterSpayed() << endl;
    }
    Dog(string newname = "");
};
Dog::Dog(string newname) :Pet(newname) {}


class Cat :public Pet
{
public:
    void printDescription() {
        cout << "Cat named " << getName() << endl;
        cout << "Neuter/Spayed: " << getNeuterSpayed() << endl;
    }
    Cat(string newname = "");
};
Cat::Cat(string newname) :Pet(newname) {}


class Bird :public Pet
{
public:
    void printDescription() {
        cout << "Bird named " << getName() << endl;
        cout << "Talks: " << getTalks() << endl;
    }
    Bird(string newname = "");
};
Bird::Bird(string newname) :Pet(newname) {}


void printDes(Pet &p)
{
    p.printDescription();
}
int main()
{
    Pet* pet[3];
    pet[0] = new Dog("Little Dog");
    pet[1] = new Cat("Little Cat");
    pet[2] = new Bird("Little Bird");
    
    for (int i = 0; i < 3; i++)
    {
        printDes(*pet[i]);
    }

    return 0;
}