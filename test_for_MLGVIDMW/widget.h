#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_pushButton_initial_clicked();

    void on_pushButton_overlap_clicked();

    void on_pushButton_disoverlap_clicked();

    void on_pushButton_exit_clicked();

    void on_pushButton_ok_clicked();

    void on_pushButton_open_clicked();

    void on_pushButton_close_clicked();

    void on_comboBox_item_activated(int index);

private:
    Ui::Widget *ui;
    unsigned int colorTable[256] ;
    bool binitialed;
    int 	nIndex ,nIndex1;
    int     curchannel;
    unsigned int		param1;
    int		param2;
    int		param3;
    int		param4;
    bool bhex;

};

#endif // WIDGET_H
