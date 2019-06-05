#include <cstdio>
#include <iostream>
#include <string>
#include <windows.h>
#include "temperatura.h"
//#include "serialport.h"
//#include "serialport.cpp"

using namespace std;

int portaSerial::abrir(QString s){
    qDebug() << "Number of available ports: " << QSerialPortInfo::availablePorts().length();



    Portaserial.setPortName(s);
    Portaserial.open(QSerialPort::ReadWrite);
    Portaserial.setBaudRate(QSerialPort::Baud115200);//eu utilizo a baud 115200 mas a baud padrao do geraldo é 9600 se nao me engano...
    Portaserial.setDataBits(QSerialPort::Data8);
    Portaserial.setParity(QSerialPort::NoParity);
    Portaserial.setStopBits(QSerialPort::OneStop);
    Portaserial.setFlowControl(QSerialPort::NoFlowControl);
    Portaserial.setReadBufferSize(10000);

    return Portaserial.error();




}

void portaSerial::fechar(){

    Portaserial.close();
}

void portaSerial::enviaSerial(char* bingo){

    Portaserial.write(bingo);



}
