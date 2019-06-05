#include <cstdio>
#include <iostream>
#include <string>
#include <windows.h>
//#include "serialport.h"
#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QString>
#include <QDebug>

#ifndef TEMPERATURA_H_
#define TEMPERATURA_H_


using namespace std;
class portaSerial{
HANDLE h;

public:
  //Abre a porta serial n?mero N
  int abrir(QString s);
  // Encerra uma conex?o
  void fechar();
  // Envia um comando pela porta seria e recebe a reposta como String
 void enviaSerial(char* bingo);
  private:
  QString serialBuffer;
  QByteArray serialData;
  QSerialPort Portaserial;

};

#endif
