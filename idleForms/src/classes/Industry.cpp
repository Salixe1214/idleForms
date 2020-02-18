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

void Industry::setup(unsigned int p_id, unsigned int p_size)
{
    m_id = p_id;
    m_size = p_size;
    
    m_position.x = m_size/2;
    m_position.y = (m_id * m_size) + (m_size/2);
    
    _price = 15 * exp(m_id);
    m_price = ceil(_price);
    
    m_quantity = 1;
    m_value = m_quantity * (m_id + 1);
    
    font.load("AquaKana.ttc", 32);
}

void Industry::drawIndustry() const
{
    ofNoFill();
    ofSetColor(ofColor::black);
    ofSetCircleResolution(m_id + 1);
    ofDrawCircle(m_position, m_size/2);
    
    font.drawString(std::to_string(m_price), m_position.x + m_size, m_position.y);
    
}

void Industry::buy()
{
    if(ofGetMouseX() >= m_position.x - (m_size/2) &&
       ofGetMouseX() <= m_position.x + (m_size/2) &&
       ofGetMouseY() >= m_position.y - (m_size/2) &&
       ofGetMouseY() <= m_position.y + (m_size/2)){
        
        _price = 15 * exp(m_id) * exp(m_quantity * 0.02);
        m_price = ceil(_price);
        
        m_quantity++;
        
        m_value = m_quantity * (m_id + 1);
    }
}

void Industry::sell()
{
    
}
