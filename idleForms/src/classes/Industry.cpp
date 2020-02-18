//
//  Industry.cpp
//  idleForms
//
//  Created by Salixe St-Amand on 2020-02-17.
//

#include "Industry.hpp"

Industry::Industry()
{
    
}

Industry::~Industry()
{
    
}

void Industry::setup(int p_increment, int p_size, float p_price, int p_value, string p_fontName)
{
    size = p_size;
    _price = p_price;
    price = ceil(_price);
    value = p_value;
    increment = p_increment;
    
    font.load(p_fontName, size/3);
}

void Industry::drawIndustry(int p_positionX, int p_positionY)
{
    positionX = p_positionX;
    positionY = p_positionY;
    ofNoFill();
    ofSetCircleResolution(3);
    ofDrawCircle(positionX + (size/2), positionY + (size/2), size/2);
    font.drawString(std::to_string(price), p_positionX + size + 30, p_positionY + ((2*size)/3));
    font.drawString(std::to_string(value), 0, ofGetHeight());
}

void Industry::buy()
{
    if(ofGetMouseX() >= positionX && ofGetMouseX() <= positionX + size && ofGetMouseY() >= positionY && ofGetMouseY() <= positionY + size){
        _price = _price * exp(0.1);
        price = ceil(_price);
        value += increment;
    }
}

void Industry::sell()
{
    
}
