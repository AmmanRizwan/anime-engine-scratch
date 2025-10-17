#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
    window.setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    window.setAttribute(Qt::WA_TranslucentBackground);
    window.setStyleSheet("background-color: rgba(30,30,30,220); border-radius: 10px");

    QLabel *label = new QLabel("Always on Top Window App");
    label->setStyleSheet("color: white; font-size:16px");

    QVBoxLayout *layout = new QVBoxLayout(&window);
    layout->addWidget(label);
    layout->setContentsMargins(20,20,20,20);

    window.setLayout(layout);
    window.resize(300, 100);
    window.show();
    return a.exec();
}
