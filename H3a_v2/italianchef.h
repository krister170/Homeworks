#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "Chef.h"

class ItalianChef : public Chef {
public:

    ItalianChef(const std::string& chefName);


    ~ItalianChef();


    void makePasta();
    std::string getName();
};

#endif
