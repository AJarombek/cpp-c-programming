// Declaration of the Asset class
// Author: Andrew Jarombek
// Date: 5/10/2023

#ifndef ACCOUNTTESTS_ASSET_H
#define ACCOUNTTESTS_ASSET_H

#include <string>

class Asset {
protected:
    std::string name;
    double price;
public:
    Asset(const std::string& name, double price);
    virtual ~Asset();

    [[nodiscard]] virtual double calculateValue() const = 0;
};

#endif //ACCOUNTTESTS_ASSET_H
