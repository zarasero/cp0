
#include "ClapTrap.hpp"

//      CANONICAL      //
ClapTrap::ClapTrap() // Конструктор по умолчанию
{
    std::cout << "ClapTrap constructor called" << std::endl; // Вывод сообщения при вызове конструктора
    this->_ad = 0; // Инициализация урона (AD) значением 0
    this->_ep = 10; // Инициализация очков энергии (EP) значением 10
    this->_hp = 10; // Инициализация очков здоровья (HP) значением 10
    return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name) // Конструктор с параметром имени
{
    std::cout << "ClapTrap constructor called" << std::endl; // Вывод сообщения при вызове конструктора
    this->_ad = 0; // Инициализация урона (AD) значением 0
    this->_ep = 10; // Инициализация очков энергии (EP) значением 10
    this->_hp = 10; // Инициализация очков здоровья (HP) значением 10
    return ;
}

ClapTrap::ClapTrap(const ClapTrap& src) // Конструктор копирования
{
    *this = src; // Копирование данных из другого объекта (использование оператора присваивания)
    return ;
}

ClapTrap::~ClapTrap() // Деструктор
{
    std::cout << "ClapTrap destructor called" << std::endl; // Вывод сообщения при уничтожении объекта
    return ;
}

// Оператор присваивания
ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
    if (this != &rhs) // Проверка, чтобы не происходило самоприсваивание
    {
        this->_name = getName(); // Копирование имени
        this->_ep = getEP(); // Копирование очков энергии
        this->_hp = getHP(); // Копирование очков здоровья
        this->_ad = getAD(); // Копирование урона
    }
    return (*this); // Возвращаем текущий объект
}

// Метод атаки
void ClapTrap::attack(const std::string& target)
{
    if (_hp > 0) // Если объект жив
    {
        if (_ep > 0) // Если есть энергия для атаки
        {
            std::cout << _name << "[" << _ep << "]" << " attacks " << target << ", causing " << _ad << " points of damage!" << std::endl;
            setEP(_ep - 1); // Уменьшаем очки энергии после атаки
        }
        else
            std::cout << _name << " has " << _ep << " then, he can't attack." << std::endl; // Сообщение, если нет энергии
    }
    else
        std::cout << _name << " can't attack, he is dead" << std::endl; // Сообщение, если объект мертв
    return ;
}

// Метод получения урона
void ClapTrap::takeDamage(unsigned int amount)
{
    setHP(_hp - amount); // Уменьшаем HP на значение урона
    if (_hp >= 0)
        std::cout << _name << " lost " << amount << " HP, he's now " << _hp << std::endl; // Выводим новое количество HP
    else
        std::cout << _name << " is dead" << std::endl; // Если HP стало меньше или равно 0, выводим сообщение о смерти
    return ;
}

// Метод восстановления здоровья
void ClapTrap::beRepaired(unsigned int amount)
{
    if (_ep > 0) // Если есть энергия для восстановления
    {
        std::cout << _name << "[" << _ep << "]" << " took " << amount << "HP, he's now " << _hp + amount << " HP points" << std::endl;
        return ;
    }
    else
        std::cout << _name << " has " << _ep << " then, he can't be regenerate." << std::endl; // Сообщение, если нет энергии для восстановления
}

// Геттер для HP
int ClapTrap::getHP(void) const
{
    return (this->_hp); // Возвращаем количество HP
}

// Сеттер для HP
void ClapTrap::setHP(int hp)
{
    this->_hp = hp; // Устанавливаем новое значение HP
    return ;
}

// Геттер для EP
int ClapTrap::getEP(void) const
{
    return (this->_ep); // Возвращаем количество EP
}

// Сеттер для EP
void ClapTrap::setEP(int ep)
{
    this->_ep = ep; // Устанавливаем новое значение EP
    return ;
}

// Геттер для AD (атака)
int ClapTrap::getAD(void) const
{
    return (this->_ad); // Возвращаем урон от атаки
}

// Сеттер для AD (атака)
void ClapTrap::setAD(int ad)
{
    this->_ad = ad; // Устанавливаем новый урон от атаки
    return ;
}

// Геттер для имени
std::string ClapTrap::getName(void) const
{
    return (this->_name); // Возвращаем имя
}

// Сеттер для имени
void ClapTrap::setName(std::string name)
{
    this->_name = name; // Устанавливаем новое имя
}
