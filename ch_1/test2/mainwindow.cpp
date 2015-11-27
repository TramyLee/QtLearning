#include "mainwindow.h"
#include "ui_mainwindow.h"


#include<QtGui>
FindDialog::FindDialog(QWidget *parent):
    QDialog(parent){
    label=new QLabel(tr("Find &what"));
    lineEdit=new QLineEdit;
    label->setBuddy(lineEdit);
    caseCheckBox=new QCheckBox(tr("Math &case"));
    backward=new QCheckBox(tr("search &back"));

    findButton=new QPushButton(tr("&find"));
    findButton->setDefault(true);
    findButton->setEnable(false);

    closeButton=new QPushButton(tr("close"));


    connect(lineEdit,SIGAL(textChanged(const QString &)),this,SLOT(enabelFindButton()));
            //this,SLOT(enabelFindButton(const QString &)));

    connect(findButton,SIGAL(clicked()),this,SLOT(findclick()));
    connect(closeButton,SIGAL(clicked()),this,SLOT(close()));



    QHBoxLayout *topLeftLayout=new QHBoxLayout;


    

}
