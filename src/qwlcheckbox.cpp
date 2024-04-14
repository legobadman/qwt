#include "qwl_checkbox.h"
#include <QSvgRenderer>


QwlCheckbox::QwlCheckbox(QWidget* parent)
    : QCheckBox(parent)
{

}

void QwlCheckbox::paintEvent(QPaintEvent* event)
{
    QStylePainter p(this);
    QStyleOptionButton opt;
    initStyleOption(&opt);
    p.drawControl(QStyle::CE_CheckBox, opt);
    if (checkState() == Qt::Checked) {
        QSvgRenderer svgRnder(QString(":/icons/checkbox-light.svg"));
        svgRnder.render(&p, rect());
    }
}