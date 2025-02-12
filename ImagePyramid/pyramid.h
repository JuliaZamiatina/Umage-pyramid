#ifndef PYRAMID_H
#define PYRAMID_H

#include <QObject>
#include <QStack>

class Pyramid : public QObject
{
    Q_OBJECT
public:
    explicit Pyramid(QPixmap, QObject *parent = nullptr);
    QPixmap ShowLayer(int);
    int GetPyramidSize();
    int GetLayerWidht(int);
    int GetLayerHeight(int);
    int GetMaxPyramidSize(double);
    void PushLayers(int, double);
    double coef = 2;

private:
    QStack<QPixmap> stackOfImages;

signals:

public slots:
};

#endif // PYRAMID_H
