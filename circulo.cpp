#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{
    setXpos(175);
    setYpos(175);
}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

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
