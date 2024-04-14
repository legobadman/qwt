#ifndef __QWLCHECKBOX_H__
#define __QWLCHECKBOX_H__

#include <QtWidgets>

class QwlCheckbox : public QCheckBox
{
    Q_OBJECT
public:
    explicit QwlCheckbox(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent* event) override;

private:

};

#endif