#include "sortdialog.h"

sortdialog::sortdialog(QWidget *parent) :
    QDialog(parent)
#if 0
    ,ui(new Ui::sortdialog)
#endif
{

#if 0
    ui->setupUi(this);
#endif

    setupUi(this);
    secondaryGroupBox->hide();
    tertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);
    setColumnRange('A', 'Z');
}
#if 0
sortdialog::~sortdialog()
{
    delete ui;
}
#endif
void sortdialog::setColumnRange(QChar first, QChar last)
{
    primaryColumnCombo->clear();
#if 1
    secondaryColumnCombo->clear();
    tertiaryColumnCombo->clear();

    secondaryColumnCombo->addItem(tr("None"));
    tertiaryColumnCombo->addItem(tr("None"));

    primaryColumnCombo->setMinimumSize(
            secondaryColumnCombo->sizeHint());

    QChar ch = first;
    while (ch <= last) {
        primaryColumnCombo->addItem(QString(ch));
        secondaryColumnCombo->addItem(QString(ch));
        tertiaryColumnCombo->addItem(QString(ch));
        ch = ch.unicode() + 1;
    }

#endif
}
