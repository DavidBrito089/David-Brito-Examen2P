#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    lienzo = QPixmap(500,500);
    this->dibujar();
    ui->marco->setPixmap(lienzo);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
    if(ui->btnAbajo->isChecked()){
        on_btnAbajo_released();
    }
}

Juego::~Juego()
{
    delete ui;
}


void Juego::on_btnArriba_released()
{
    Configuracion a;
    QPainter painter(&lienzo);
    QPen pens;
    pens.setColor(a.color());
    pens.setWidth(450);
    painter.setPen(pens);
    painter.drawEllipse(m_circulo->x(),m_circulo->y()+10,m_circulo->x(),m_circulo->y()+10);
}


void Juego::on_btnAbajo_released()
{
    Configuracion a;
    QPainter painter(&lienzo);
    QPen pens;
    pens.setColor(a.color());
    pens.setWidth(450);
    painter.setPen(pens);
    painter.drawEllipse(150,150,150,150);
    update();
}


void Juego::on_btnIzqueirda_released()
{

}


void Juego::on_btnDerecha_released()
{

}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    Configuracion a;
    lienzo.fill(Qt::white);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
        m_circulo->setX(centro.x());
        m_circulo->setY(centro.y());
    QPainter painter(&lienzo);
    QPen pens;
    pens.setColor(a.color());
    pens.setWidth(360);
    painter.setPen(pens);
    painter.drawEllipse(m_circulo->x(),m_circulo->y(),m_circulo->x(),m_circulo->y());

}

