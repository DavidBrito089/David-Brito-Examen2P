#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    xpos=450;
    ypos=450;
}

int Circulo::getXpos() const
{
    return xpos;
}

void Circulo::setXpos(int value)
{
    xpos = value;
}

int Circulo::getYpos() const
{
    return ypos;
}

void Circulo::setYpos(int value)
{
    ypos = value;
}
