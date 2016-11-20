#ifndef QCAT_H
#define QCAT_H

#include <QObject>

class QCat : public QObject
{
    Q_OBJECT
public:
    explicit QCat(QObject *parent = 0);
    QCat(const QCat &t_cat);
    int value() const;
    void setValue(int value);

    QString name() const;
    void setName(const QString &name);

private:
    QString m_name;
    int m_value;

signals:

public slots:
};

#endif // QCAT_H
