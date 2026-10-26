#pragma once 
#include "json.hpp";
using json = nlohmann::json;


class CurrencyConverter{
    private:
    public:
    
    float calculate(json data);
};





