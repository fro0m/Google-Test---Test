#include "qcat.h"

QCat::QCat(QObject *parent) :
    QObject(parent),  m_name("kisa"), m_value(1)
{
    qDebug("QCat::QCat");
}

QCat::QCat(const QCat &t_cat) : QCat()
{
    qDebug("QCat::QCat(QCat &t_cat)");
}

int QCat::value() const
{
    return m_value;
}

void QCat::setValue(int value)
{
    m_value = value;
}

QString QCat::name() const
{
    return m_name;
}

void QCat::setName(const QString &name)
{
    m_name = name;
}
