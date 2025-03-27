#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp" // Важно убедиться, что путь к файлу корректен
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource { // Наследуем интерфейс
private:
    AMateria* _templates[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const & other);
    MateriaSource& operator=(MateriaSource const & other);
    virtual ~MateriaSource();

    virtual void learnMateria(AMateria* m);
    virtual AMateria* createMateria(std::string const & type);
};

#endif // MATERIASOURCE_HPP
