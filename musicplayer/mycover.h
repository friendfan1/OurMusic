#ifndef MYCOVER_H
#define MYCOVER_H

#include <QWidget>

namespace Ui {
class MyCover;
}

class MyCover : public QWidget
{
    Q_OBJECT

public:
    explicit MyCover(QWidget *parent = 0);
    ~MyCover();

private:
    Ui::MyCover *ui;
};

#endif // MYCOVER_H
