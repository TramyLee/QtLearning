#include <QApplication>
#include <QSplitter>
#include <QTextEdit>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QFont font("ZYSong18030",12);
    app.setFont(font);

    QSplitter *splittermain=new QSplitter(Qt::Horizontal,0);
    QTextEdit *textLeft=new QTextEdit(QObject::tr("left  widget"),splittermain);
    textLeft->setAlignment(Qt::AlignCenter);

	QSplitter *splitterright=new QSplitter(Qt::Vertical,splittermain);


	splitterright->setOpaqueResize(false);
    QTextEdit *textup=new QTextEdit(QObject::tr("Top widdget"),splitterright);
	textup->setAlignment(Qt::AlignCenter);

	QTextEdit *textButton=new QTextEdit(QObject::tr("Button widdget"),splitterright);
	textButton->setAlignment(Qt::AlignCenter);
	splittermain->setStretchFactor(1, 1);
	splittermain->setWindowTitle(QObject::tr("splitter"));
	
	splittermain->show();
    
    
   


    return app.exec();
}
