#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "temperatura.h"
#include <QThread>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    portaSerial mao;


private slots:
    void on_dedaoabrir_clicked();
    void on_dedaofechar_clicked();
    void on_dedaoparar_clicked();
    void on_indicadorabrir_clicked();
    void on_indicadorfechar_clicked();
    void on_indicadorparar_clicked();
    void on_medioabrir_clicked();
    void on_mediofechar_clicked();
    void on_medioparar_clicked();
    void on_anelarabrir_clicked();
    void on_anelarfechar_clicked();
    void on_anelarparar_clicked();
    void on_mindinhoabrir_clicked();
    void on_mindinhofechar_clicked();
    void on_mindinhoparar_clicked();
    void on_Abrirporta_clicked();

    void on_todosabrir_clicked();

    void on_todosfechar_clicked();

    void on_todosparar_clicked();

    void on_demo_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
