//Jacob Block
//HW6

#include <iostream>
using namespace std;

class Monster {
    private:
        int strength = 0;
        static int count;
    public:
        Monster() {
            srand(time(0)); 
            strength = (rand() % 30) + 1;
            count++;
            cout << "Monster #" << count << " with strength " << strength << " appears." << endl;
        }
        virtual void speak() { cout << "Boo" << endl;}
        int getStrength() { return strength;}
};

int Monster::count = 0;

class Zombie: public Monster {
    public:
        Zombie() {cout << "It's a Zombie!" <<endl;}
        void speak() { cout << "Brains!" << endl;}
};

class Werewolf: public Monster {
    public:
        Werewolf() {cout << "It's a Werewolf!" <<endl;}
        void speak() { cout << "I'm a Werewolf" << endl;}
};

class Vampire: public Monster {
    public: 
        Vampire() {cout << "It's a Vampire!" <<endl;}
        void speak() { cout << "Blood!" << endl;}
};


int main()
{
    const int NUM = 5;
    string type;
    int totalStrength = 0;
    Monster *monsters[NUM];
    for (int i = 0; i < NUM; ++i) {
        cout << "Select the monster type: (Zombie, Vampire, Werewolf):";
        cin >> type;
        if(type == "Zombie") {
            monsters[i] = new Zombie;
        }
        else if(type == "Vampire") {
            monsters[i] = new Vampire;
        }
        else if(type == "Werewolf") {
            monsters[i] = new Werewolf;
        }
        else {
            cout << "Invalid Selection" <<endl;
            --i;
        }
    }
    
    cout << "Monster Greetings..." <<endl;
    for(int i = 0; i<NUM;++i) {
        monsters[i]->speak();
        totalStrength += monsters[i]->getStrength(); 
    }
    cout << "Total strenght of the monsters is " << totalStrength;
 
    return 0;
}
