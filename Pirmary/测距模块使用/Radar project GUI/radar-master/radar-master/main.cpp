/*
*������    ���
*����ʱ��  2017��9��
*����      �����״�ɨ��ͼ
*/
#include <QApplication>
#include "RadarSimulator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.setMinimumSize(400,400);
//    w.resize(800,600);
//    w.show();

    RadarSimulator sim;
    sim.show();

    return a.exec();
}
