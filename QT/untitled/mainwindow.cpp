#include "mainwindow.h"
#include "ui_mainwindow.h"
#define a  3000


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Q_FOREACH(QSerialPortInfo port, QSerialPortInfo::availablePorts()) { //carrega na caixa seletora as portas com disponiveis
        ui->listadeportascom->addItem(port.portName());
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dedaoabrir_clicked()
{
    char t = 'y';
    mao.enviaSerial(&t);
}
void MainWindow::on_dedaofechar_clicked()
{
    char t = 'h';
    mao.enviaSerial(&t);
}
void MainWindow::on_dedaoparar_clicked()
{
    char t = 'n';
    mao.enviaSerial(&t);
}
void MainWindow::on_indicadorabrir_clicked()
{
    char t = 't';
    mao.enviaSerial(&t);
}

void MainWindow::on_indicadorfechar_clicked()
{
    char t = 'g';
    mao.enviaSerial(&t);
}


void MainWindow::on_indicadorparar_clicked()
{
    char t = 'b';
    mao.enviaSerial(&t);
}
void MainWindow::on_medioabrir_clicked()
{
    char t = 'r';
    mao.enviaSerial(&t);
}

void MainWindow::on_mediofechar_clicked()
{
    char t = 'f';
    mao.enviaSerial(&t);
}


void MainWindow::on_medioparar_clicked()
{
    char t = 'v';
    mao.enviaSerial(&t);
}
void MainWindow::on_anelarabrir_clicked()
{
    char t = 'e';
    mao.enviaSerial(&t);
}

void MainWindow::on_anelarfechar_clicked()
{
    char t = 'd';
    mao.enviaSerial(&t);
}


void MainWindow::on_anelarparar_clicked()
{
    char t = 'c';
    mao.enviaSerial(&t);
}
void MainWindow::on_mindinhoabrir_clicked()
{
    char t = 'w';
    mao.enviaSerial(&t);
}

void MainWindow::on_mindinhofechar_clicked()
{
    char t = 's';
    mao.enviaSerial(&t);
}


void MainWindow::on_mindinhoparar_clicked()
{
    char t = 'x';
    mao.enviaSerial(&t);
}

void MainWindow::on_Abrirporta_clicked()
{

    if(ui->Abrirporta->text()=="Abrir")
    {
        switch (mao.abrir(ui->listadeportascom->currentText())) {
        case 0:
            ui->listadeportascom->setDisabled(1);

            ui->Abrirporta->setText("Fechar");
            qDebug()<< ui->listadeportascom->currentText();
            return;
        case 1:
            QMessageBox::critical(this,"Lascou!","An error occurred while attempting to open an non-existing device!");
            qDebug() <<"An error occurred while attempting to open an non-existing device!";
            return;
        case 2:
            QMessageBox::critical(this,"Lascou!","An error occurred while attempting to open an already opened device by another process or a user not having enough permission and credentials to open!");
            qDebug() <<"An error occurred while attempting to open an already opened device by another process or a user not having enough permission and credentials to open!";
            return;
        case 3:
            QMessageBox::critical(this,"Lascou!","An error occurred while attempting to open an already opened device!");
            qDebug() <<"An error occurred while attempting to open an already opened device!";
            return;
        }
    }

    if(ui->Abrirporta->text()=="Fechar")
    {


        mao.fechar();
        ui->listadeportascom->setDisabled(0);
        ui->Abrirporta->setText("Abrir");
        qDebug()<< ui->listadeportascom->currentText();
        return ;
    }



}

void MainWindow::on_todosabrir_clicked()
{
    on_dedaoabrir_clicked();
    on_medioabrir_clicked();
    on_anelarabrir_clicked();
    on_indicadorabrir_clicked();
    on_mindinhoabrir_clicked();
}

void MainWindow::on_todosfechar_clicked()
{
    on_dedaofechar_clicked();
    on_mediofechar_clicked();
    on_anelarfechar_clicked();
    on_indicadorfechar_clicked();
    on_mindinhofechar_clicked();
}

void MainWindow::on_todosparar_clicked()
{
    on_dedaoparar_clicked();
    on_medioparar_clicked();
    on_anelarparar_clicked();
    on_indicadorparar_clicked();
    on_mindinhoparar_clicked();
}

void MainWindow::on_demo_clicked()
{
    char t = 'p';
    mao.enviaSerial(&t);

}
