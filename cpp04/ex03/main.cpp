#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
    // Создаем источник материй, реализующий интерфейс IMateriaSource
    IMateriaSource* src = new MateriaSource();

    // Обучаем источник двум материи: "Ice" (лед) и "Cure" (лечение)
    src->learnMateria(new Ice());  // Добавляет новый объект Ice в список доступных материй
    src->learnMateria(new Cure()); // Добавляет новый объект Cure

    // Создаем персонажа с именем "me"
    ICharacter* me = new Character("me");

    // Переменная для временного хранения материи
    AMateria* tmp;

    // Создаем материю типа "ice" из обученных шаблонов
    tmp = src->createMateria("ice");
    me->equip(tmp); // Персонаж "me" экипирует материю "ice"

    // Создаем материю типа "cure" из обученных шаблонов
    tmp = src->createMateria("cure");
    me->equip(tmp); // Персонаж "me" экипирует материю "cure"

    // Создаем второго персонажа с именем "bob"
    ICharacter* bob = new Character("bob");

    // Персонаж "me" использует материю из первого слота на "bob"
    me->use(0, *bob); // Вывод: "* shoots an ice bolt at bob *" (Ice)
    
    // Персонаж "me" использует материю из второго слота на "bob"
    me->use(1, *bob); // Вывод: "* heals bob's wounds *" (Cure)

    // Освобождаем динамически выделенную память
    delete bob;  // Удаляем персонажа "bob"
    delete me;   // Удаляем персонажа "me" и освобождаем его экипированные материи
    delete src;  // Удаляем источник материй

    return 0; // Завершаем программу
}