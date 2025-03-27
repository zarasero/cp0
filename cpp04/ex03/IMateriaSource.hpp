// IMateriaSource.hpp
#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {} // Виртуальный деструктор
    virtual void learnMateria(AMateria* m) = 0; // Чисто виртуальная функция для обучения Materia
    virtual AMateria* createMateria(std::string const & type) = 0; // Чисто виртуальная функция создания Materia
};

#endif // IMATERIASOURCE_HPP
