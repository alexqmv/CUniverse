/*
    ! ***                 CUniverse                ***
    - Alien Killer Mod | Russian translated version!

    - Anyone is able to use this open-source code.
    - Author - @alex.qmv

    - OPEN-SOURCE FOUNDATION***.


    - Used:
    iostream for cout, cin ... , time.h or ctime for random module, unistd.h for sleep().

    

    - FileSize - 2.5kB

    
    - *Under development*

*/

#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;

void giveup() 
{
    cout << "In process of development!";
}

void crystal()
{
    cout << "In process of development!";

    
}

void gun(){

    int g;
    int y;
    string dn;
    int amo;
    cout << "Выбери пушку: " << endl;
    cout << "1. AK47\n";
    cout << "2. Uzi\n";
    cout << "3. M14\n";
    cout << "Выберите оружие (1,2 или 3): ";
    cin >> g;
    if (g == 1) {
        cout << "Вы выбрали " << g;
    }else {
        cout << "Вы выбрали " << g;
    }
    cout << "Введи количетсво патронов";
    cin >> amo;
    cout << "Находим кристалл 'Лизерод'... (Введите 1 для улучшения поиска)";
    cin >> y;
    
    sleep(3);
    cout << endl;
    cout << "Мы нашли Кристалл Лизерод!";
    cout << "ВАШ ИНВЕНТАРЬ: ";
    cout << g << " - Ваш выбор оружия"<< endl;
    cout << amo<< " - Количество патронов (PAT)" << endl;
    cout << "\nРано радоваться,пришельцы совсем рядом!";
    cout << " Зарядите и выстрелите в пришельца! (1)";
    int zar;
    cin >> zar;
    srand(time(NULL));
    int c = rand() % 100;
    sleep(4);
    cout << "Успешно попал в " << c << " Пришельцев!";
    

}

int main () 
{
    string start;
    int varr;
    cout << "Приветствую воин.Ты находишься в космошаре где вокруг тебя одни пришельцы. Отбивайся от них. Что бы это сделать заряди пушку патронами но для этого тебе потребуются криссталлы. Найди их и победи пришельцев!";
    cout << "\nНажми на любую клавишу что бы продолжить!";
    cin >> start;

    cout << "\t\t\t1. Зарядить пушку \n";
    cout << "\t\t\t2. Найти крисстал\n";
    cout << "\t\t\t3. Сдаться\n";
    cout << "> ";
    cin >> varr;
    switch(varr){
        case 1:
            gun();
            break;
        case 2:
            crystal();
            break;
        case 3:
            giveup();
            break;
    }
    

    return 0; 
}
