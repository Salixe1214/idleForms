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

class Industry : public ofImage
{
public:
    Industry();
    ~Industry();
    void setup(int = 1, int = 100, float = 1, int = 1, string = "AquaKana.ttc");
    void drawIndustry(int = 10, int = 10);
    void buy();
    void sell();
    
private:
    int positionX;
    int positionY;
    int size;               // Size of image
    float _price;
    int price;              // What it cost to buy it
    int increment;          // How much it grow per buy
    int value;              // How much it give per second
    ofTrueTypeFont font;    // Font to type texts
    
};

#endif /* Industry_hpp */
