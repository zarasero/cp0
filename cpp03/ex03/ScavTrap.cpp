
#include "ScavTrap.hpp"

// CANONICAL FORM
// КОНСТРУКТОР ПО УМОЛЧАНИЮ
ScavTrap::ScavTrap() 
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    return; // Завершаем конструктор
}

// КОНСТРУКТОР С ПАРАМЕТРОМ ИМЕНИ
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // Конструктор с параметром имени, передаем его в базовый класс ClapTrap
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора

    setAD(20); // Устанавливаем атаку для ScavTrap
    setEP(50); // Устанавливаем очки энергии для ScavTrap
    setHP(100); // Устанавливаем здоровье для ScavTrap
    return; // Завершаем конструктор
}

// ПЕРЕЗАГРУЗКА ОПЕРАТОРА ПРИСВАИВАНИЯ
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) // Оператор присваивания для копирования данных из rhs в текущий объект
{
    if (this != &rhs) // Проверка на самоприсваивание
    {
        setAD(rhs.getAD()); // Копируем атаку
        setEP(rhs.getEP()); // Копируем очки энергии
        setHP(rhs.getHP()); // Копируем здоровье
        setName(rhs.getName()); // Копируем имя
    }
    return (*this); // Возвращаем ссылку на текущий объект
}

// ДЕСТРУКТОР
ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap destructor called" << std::endl; // Выводим сообщение о вызове деструктора
    return; // Завершаем деструктор
}

// КОНСТРУКТОР КОПИРОВАНИЯ
/*ScavTrap::ScavTrap(const ScavTrap& src)
{
    *this = src; // Используем оператор присваивания для копирования данных из src
    return; // Завершаем конструктор
}*/
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) // Инициализация базового класса
{
    this->_ad = src.getAD();
    this->_ep = src.getEP();
    this->_hp = src.getHP();
    this->_name = src.getName();
    std::cout << "ScavTrap copy constructor called" << std::endl;
}


// ПРОВЕРКА КАНОНИЧЕСКОЙ ФОРМЫ

// МЕТОД GUARDGATE
void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl; // Выводим сообщение о том, что ScavTrap вошел в режим охраны
    return; // Завершаем метод
}

/*Подробные комментарии:
Конструктор по умолчанию (ScavTrap::ScavTrap()):

Этот конструктор выводит сообщение о вызове конструктора и завершает выполнение без изменения атрибутов.
Конструктор с параметром имени (ScavTrap::ScavTrap(std::string name)):

Этот конструктор принимает строку с именем и передаёт её базовому классу ClapTrap, а затем инициализирует дополнительные атрибуты для ScavTrap (атака, очки энергии, здоровье).
Оператор присваивания (ScavTrap::operator=):

Этот оператор присваивания копирует все атрибуты из объекта rhs в текущий объект.
Перед этим проверяется, что текущий объект не самоприсваивается.
Деструктор (ScavTrap::~ScavTrap()):

Этот деструктор выводит сообщение о вызове деструктора и завершает его выполнение.
Конструктор копирования (ScavTrap::ScavTrap(const ScavTrap& src)):

Конструктор копирования использует оператор присваивания для копирования значений из объекта src.
Метод guardGate():

Метод выводит сообщение, что ScavTrap вошел в режим охраны.
Общее замечание:
Код корректно реализует каноническую форму для класса ScavTrap с операторами копирования, присваивания и деструктором.
Метод guardGate() добавляет уникальную функциональность для этого класса.






*/