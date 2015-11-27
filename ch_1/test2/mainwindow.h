#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include<QtGui>
class QLabel;
class QLineEdit;
class QCheckBox;
class QPushButton;

class FindDialog:public QDialog{
	Q_OBJECT
public:
    FindDialog(QWidget *parent=0);
    signals:
    void findNext(const QString &text,Qt::CaseSensitivity cs);
    void findprev(const QString &str,Qt::CaseSensitive,cs);
private slots:
    void findclick();
    void enabelFindButton();
private:
    QLabel *label;
QLineEdit *lineEdit;
QCheckBox *caseCheckBox;
QCheckBox *backward;
QPushButton *findButton;
QPushButton *closeButton;



};

#endif // MAINWINDOW_H
