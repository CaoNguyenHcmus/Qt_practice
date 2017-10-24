#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include "ui_sortdialog.h"

#if 0
namespace Ui {
class sortdialog;
}
#endif
class sortdialog : public QDialog, public Ui::sortdialog
{
    Q_OBJECT

public:
    explicit sortdialog(QWidget *parent = 0);
#if 0
    ~sortdialog();
#endif
    void setColumnRange(QChar first, QChar last);
#if 0
private:
    Ui::sortdialog *ui;
#endif
};

#endif // SORTDIALOG_H
