#include"mbed.h"

RawSerial pc(USBTX,USBRX);

int main(){
    int i1=7;
    float i2=7.5;
    char i3='H';
    char c;
    
    pc.printf("Hello World!\r\n");
    pc.printf("i1=%d\r\n",i1);
    pc.printf("i2=%f\r\n",i2);
    pc.printf("i3=%c\r\n",i3);
    pc.putc(i3);
    pc.printf("\r\n");
    
    for(int j=0; j<10; j++){
        pc.printf("j=%d -- enter any key --> ",j);
        c = pc.getc();
        pc.putc(c);
        pc.printf("\r\n");
    }
    
    pc.printf("finish!!\r\n");
}