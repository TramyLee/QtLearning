#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QStackWidget>
#include <QLabel>
#include <QDialog>


class StackDialog : public QDialog 
{
    Q_OBJECT

public:
    StackDialog(QWidget *parent = 0);
    ~StackDialog();
 private:
 	QListWidget *list;
 	QStackWidget *stack;
 	QLabel *label1;
 	QLabel *label2;
 	QLabel *label3;

};

#endif // MAINWINDOW_H
