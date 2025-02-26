
#include "ScavTrap.hpp"
/*
// CANONICAL FORM
// КОНСТРУКТОР ПО УМОЛЧАНИЮ
ScavTrap::ScavTrap() // CONSTRUCTOR
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    return ;
}

// КОНСТРУКТОР С ПАРАМЕТРОМ ИМЕНИ
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // CONSTRUCTOR WITH PARAM NAME
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    setAD(20); // Устанавливаем атаку на 20
    setEP(50); // Устанавливаем очки энергии на 50
    setHP(100); // Устанавливаем здоровье на 100
    return ;
}

// ПЕРЕЗАГРУЗКА ОПЕРАТОРА ПРИСВАИВАНИЯ
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) // OVERLOAD
{
    if (this != &rhs) // Проверка на самоприсваивание
    {
        setAD(rhs.getAD()); // Копируем атаку из rhs
        setEP(rhs.getEP()); // Копируем очки энергии из rhs
        setHP(rhs.getHP()); // Копируем здоровье из rhs
        setName(rhs.getName()); // Копируем имя из rhs
    }
    return (*this); // Возвращаем ссылку на текущий объект
}

// ДЕСТРУКТОР
ScavTrap::~ScavTrap() // DESTRUCTOR
{
    std::cout << "ScavTrap destructor called" << std::endl; // Выводим сообщение о вызове деструктора
    return ;
}

// КОНСТРУКТОР КОПИРОВАНИЯ
ScavTrap::ScavTrap(const ScavTrap& src) // COPY CONSTRUCTOR
{
    *this = src; // Копируем данные из src в текущий объект
    return ;
}

// КАНОНИЧЕСКАЯ ФОРМА ПРОВЕРЕНА (копирование, присваивание, деструктор)


// ФУНКЦИЯ "ГОТОВНОСТИ К ОХРАНЕ"
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl; // Выводим информацию о том, что ScavTrap вошел в режим охраны
    return ;
}
*/

#include "ScavTrap.hpp"

// CANONICAL FORM
// КОНСТРУКТОР ПО УМОЛЧАНИЮ
ScavTrap::ScavTrap() // CONSTRUCTOR
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    return ;
}

// КОНСТРУКТОР С ПАРАМЕТРОМ ИМЕНИ
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) // CONSTRUCTOR WITH PARAM NAME
{
    std::cout << "ScavTrap constructor called" << std::endl; // Выводим сообщение о вызове конструктора
    setAD(20); // Устанавливаем атаку на 20
    setEP(50); // Устанавливаем очки энергии на 50
    setHP(100); // Устанавливаем здоровье на 100
    return ;
}

// ПЕРЕЗАГРУЗКА ОПЕРАТОРА ПРИСВАИВАНИЯ
ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) // OVERLOAD
{
    if (this != &rhs) // Проверка на самоприсваивание
    {
        setAD(rhs.getAD()); // Копируем атаку из rhs
        setEP(rhs.getEP()); // Копируем очки энергии из rhs
        setHP(rhs.getHP()); // Копируем здоровье из rhs
        setName(rhs.getName()); // Копируем имя из rhs
    }
    return (*this); // Возвращаем ссылку на текущий объект
}

// ДЕСТРУКТОР
ScavTrap::~ScavTrap() // DESTRUCTOR
{
    std::cout << "ScavTrap destructor called" << std::endl; // Выводим сообщение о вызове деструктора
    return ;
}

// КОНСТРУКТОР КОПИРОВАНИЯ
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) // COPY CONSTRUCTOR
{
    *this = src; // Копируем данные из src в текущий объект
    return ;
}

// КАНОНИЧЕСКАЯ ФОРМА ПРОВЕРЕНА (копирование, присваивание, деструктор)

// ФУНКЦИЯ "ГОТОВНОСТИ К ОХРАНЕ"
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode." << std::endl; // Выводим информацию о том, что ScavTrap вошел в режим охраны
    return ;
}
