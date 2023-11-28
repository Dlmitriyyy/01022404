#include <iostream>
#include <string>

using namespace std;

class Monsters
{
public:
    string name;
    string attack;
    int hp;
    int damage;

    Monsters() {}
    virtual ~Monsters() {}

    virtual void printMonster()
    {
        cout << "Це монстр просто монстр, його ніяк не звати та у нього немає жодної одиниці здоров'я, він не може тебе атакувати." << endl;
    }
};

class Orks : public Monsters
{
public:
    Orks() : Monsters()
    {
        name = "Больг";
        attack = "Може напасти на вас з мечем або коп’єм чи використати магію.";
        hp = 150;
        damage = 20;
    }

    void printMonster() override
    {
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Тип монстра       : Орк" << endl;
        cout << "Його ім'я         : " << name << endl;
        cout << "Кількість здоров'я: " << hp << " од." << endl;
        cout << "Завданя шкоди     : " << damage << " од." << endl;
        cout << "Доступні атаки    : " << attack << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    }
};

class Trolls : public Monsters
{
public:
    Trolls() : Monsters()
    {
        name = "Берт";
        attack = "Може напасти на вас з великим тупим обрубником.";
        hp = 200;
        damage = 30;
    }

    void printMonster() override
    {
        cout << "Тип монстра       : Троль" << endl;
        cout << "Його ім'я         : " << name << endl;
        cout << "Кількість здоров'я: " << hp << " од." << endl;
        cout << "Завданя шкоди     : " << damage << " од." << endl;
        cout << "Доступні атаки    : " << attack << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    }
};

class BigSpiders : public Monsters
{
public:
    BigSpiders() : Monsters()
    {
        name = "Шелоб";
        attack = "Може створити павутинну пастку, у ближніх атаках гострими клешнями та зубами може нанести значну    шкоду та отруїти вас.";
        hp = 500;
        damage = 50;
    }

    void printMonster() override
    {
        cout << "Тип монстра       : Великий павук" << endl;
        cout << "Його ім'я         : " << name << endl;
        cout << "Кількість здоров'я: " << hp << " од." << endl;
        cout << "Завданя шкоди     : " << damage << " од." << endl;
        cout << "Доступні атаки    : " << attack << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    }
};

class Dragons : public Monsters
{
public:
    Dragons() : Monsters()
    {
        name = "Смауг";
        attack = "Може видихувати потужний вогонь який змітає усе на свому шляху, завдає великої шкоди.";
        hp = 1000;
        damage = 80;
    }

    void printMonster() override
    {
        cout << "Тип монстра       : Дракон" << endl;
        cout << "Його ім'я         : " << name << endl;
        cout << "Кількість здоров'я: " << hp << " од." << endl;
        cout << "Завданя шкоди     : " << damage << " од." << endl;
        cout << "Доступні атаки    : " << attack << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
    }
};
int main()
{
    system("chcp 1251>nul");

    cout << "Ця програма описує види монстрів, їх імена, кількість здоров'я, та атаки які вони можуть застосовувати і кількість шкоди яку вони завдають." << endl << endl;

    decltype(Orks()) ork;        
    decltype(Trolls()) troll;   
    decltype(BigSpiders()) spider;
    decltype(Dragons()) dragon;

    ork.printMonster();
    troll.printMonster();
    spider.printMonster();
    dragon.printMonster();
    return 0;
}
