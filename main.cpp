#include <QApplication>
#include <QLabel>
#include <QVBoxLayout>
#include <QMovie>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    if (argc < 2) {
        qWarning("Usage: ./anime-engine-scrach <clipname>");
        return -1;
    }

    QWidget w;
    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    w.setAttribute(Qt::WA_TranslucentBackground);

    QLabel *label = new QLabel(&w);
    label->setAlignment(Qt::AlignCenter);

    QString filePath = QString("utils/%1.gif").arg(argv[1]);
    QMovie *movie = new QMovie(filePath);
    if (!movie->isValid()) {
        label->setText("Failed to Load GIF");
    }
    else {
        label->setMovie(movie);
        movie->start();
    }

    QVBoxLayout *layout = new QVBoxLayout(&w);
    layout->addWidget(label);
    layout->setContentsMargins(0,0,0,0);
    w.setLayout(layout);

    w.show();
    return a.exec();
}