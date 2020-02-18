//
//  Industry.hpp
//  idleForms
//
//  Created by Salixe St-Amand on 2020-02-17.
//

#ifndef Industry_hpp
#define Industry_hpp

#include <stdio.h>
#include "ofMain.h"
#include <string>
#include <glm/glm.hpp>

class Industry : public ofImage
{
public:
    Industry();
    ~Industry();
    void setup(unsigned int = 0, unsigned int = 100);
    void drawIndustry() const;
    void buy();
    void sell();
    unsigned int getId() const;
    unsigned int getSize() const;
    unsigned int getPrice() const;
    unsigned int getValue() const;
    unsigned int getQuantity() const;
    
private:
    unsigned int m_id;          // The identifient of the Industry in the Factory
    unsigned int m_size;        // The size of the Industry in pixels
    unsigned int m_price;       // The price to buy an instance of this Industry
    double _price;              // A more precise instance of m_price for inflation equations
    unsigned int m_value;       // How much coins per second the instances of this Industry give
    unsigned int m_quantity;    // How much instances of this Industry are possed
    glm::vec2 m_position;       // Vector of position of the logo (center of the circle)
    ofTrueTypeFont font;
};

#endif /* Industry_hpp */
