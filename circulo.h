#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
    int getXpos() const;
    void setXpos(int value);

    int getYpos() const;
    void setYpos(int value);
private:
    int xpos;
    int ypos;
};

#endif // CIRCULO_H
