
#include "ClapTrap.hpp"

//      CANONICAL      //
ClapTrap::ClapTrap() // Конструктор по умолчанию
{
    std::cout << "ClapTrap constructor called" << std::endl; // Вывод сообщения при вызове конструктора
    this->_ad = 0;  // Инициализация значения урона
    this->_ep = 10; // Инициализация значения энергии
    this->_hp = 10; // Инициализация значения здоровья
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) // Конструктор с параметром имени
{
    std::cout << "ClapTrap constructor called" << std::endl; // Вывод сообщения при вызове конструктора
    this->_ad = 0;  // Инициализация значения урона
    this->_ep = 10; // Инициализация значения энергии
    this->_hp = 10; // Инициализация значения здоровья
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& src) // Конструктор копирования
{
    *this = src; // Копирование всех данных из другого объекта
    return ;
}

ClapTrap::~ClapTrap() // Деструктор
{
    std::cout << "ClapTrap destructor called" << std::endl; // Вывод сообщения при удалении объекта
    return ;
}

// Оператор присваивания
ClapTrap &ClapTrap::operator=(const ClapTrap& rhs)
{
    if (this != &rhs) // Проверка на самоприсваивание
    {
        this->_name = getName(); // Копируем имя
        this->_ep = getEP();     // Копируем энергию
        this->_hp = getHP();     // Копируем здоровье
        this->_ad = getAD();     // Копируем урон
    }
    return (*this); // Возвращаем ссылку на текущий объект
}

// Функция атаки
void ClapTrap::attack(const std::string& target)
{
    if (_hp > 0) // Проверка на смерть (не можем атаковать, если персонаж мертв)
    {
        if (_ep > 0) // Проверка на наличие энергии для атаки
        {
            std::cout << _name << "[" << _ep << "]" << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
            setEP(_ep - 1); // Уменьшаем энергию на 1 после атаки
        }
        else
            std::cout << _name << " has " << _ep << " energy, so he can't attack." << std::endl; // Сообщение, если нет энергии
    }
    else
        std::cout << _name << " can't attack, he is dead" << std::endl; // Сообщение, если персонаж мертв
    return ;
}

// Функция получения урона
void ClapTrap::takeDamage(unsigned int amount)
{
    setHP(_hp - amount); // Уменьшаем здоровье на полученный урон
    if (_hp >= 0) // Проверка, если персонаж еще жив
        std::cout << _name << " lost " << amount << " HP, he's now " << _hp << std::endl; // Вывод нового количества здоровья
    else
        std::cout << _name << " is dead" << std::endl; // Сообщение о смерти персонажа
    return ;
}

// Функция восстановления здоровья
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0) // Проверка на наличие энергии для восстановления здоровья
    {
        std::cout << _name << "[" << _ep << "]" << " repaired " << amount << " HP, he's now " << _hp + amount << " HP points" << std::endl;
        setHP(_hp + amount); // Восстановление здоровья
        return ;
    }
    else
        std::cout << _name << " has " << _ep << " energy, so he can't be repaired." << std::endl; // Сообщение, если нет энергии
}

// SETTERS / GETTERS HP

int ClapTrap::getHP(void) const
{
    return (this->_hp); // Возвращаем текущее здоровье
}

void ClapTrap::setHP(int hp)
{
    this->_hp = hp; // Устанавливаем новое значение здоровья
    return ;
}

// SETTERS / GETTERS EP

int ClapTrap::getEP(void) const
{
    return (this->_ep); // Возвращаем текущее количество энергии
}

void ClapTrap::setEP(int ep)
{
    this->_ep = ep; // Устанавливаем новое количество энергии
    return ;
}

// SETTERS / GETTERS AD

int ClapTrap::getAD(void) const
{
    return (this->_ad); // Возвращаем текущее количество урона
}

void ClapTrap::setAD(int ad)
{
    this->_ad = ad; // Устанавливаем новый уровень урона
    return ;
}

// SETTERS / GETTERS NAME

std::string ClapTrap::getName(void) const
{
    return (this->_name); // Возвращаем имя персонажа
}

void ClapTrap::setName(std::string name)
{
    this->_name = name; // Устанавливаем новое имя
}
/*Конструкторы: Два конструктора создают объект ClapTrap, один из них инициализирует объект по умолчанию, другой - с заданным именем.
Конструктор копирования: Копирует значения из существующего объекта ClapTrap в новый.
Деструктор: Сообщает, когда объект уничтожается.
Оператор присваивания: Позволяет присваивать один объект другому.
Методы атаки, получения урона и восстановления: Симулируют бой, где объект атакует, получает урон или восстанавливает здоровье.
Геттеры и сеттеры: Методы для получения и установки значений различных свойств объекта (здоровье, энергия, урон и имя).
Этот класс моделирует поведение персонажа в игре, с возможностью атаковать, получать урон, восстанавливать здоровье и использовать энергию для своих действий.*/