// test.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#import"ClassLibrary1.tlb"
using namespace System;
using namespace System::Net;
int main(array<System::String ^> ^args)
{
    CoInitialize(NULL);  //ע���ʼ��  
    ClassLibrary1::MyCom_InterfacePtr p(__uuidof(ClassLibrary1::Class1));  //��������ָ��  
    ClassLibrary1::MyCom_Interface *s = p;  
    int a = 3;  
    int b = 6;  
    int c = s->Add(a,b);  
    Console::WriteLine(c);
	Console::ReadKey();
    return 0;
}
