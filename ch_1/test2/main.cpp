
#include <QApplication>
#include<QHBoxLayout>
#include<QSlider>
#include<QSpinBox>
#include<QPushButton>
#include<QLabel>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
QPushButton *button=new QPushButton("Quit");
QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));

 button->show();

t

    return a.exec();



}
