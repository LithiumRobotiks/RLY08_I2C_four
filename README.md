RLY08_I2C_four
==============

Conectando 4 RLY08 con Arduino mega por medio de I2C

Este proyecto envía datos seriales I2C a cada módulo RLY08. La dirección respectiva de cada módulo es 0x70,..., 0x76, pero se manejan con un bit recorrido como 0x38, 0x39, 0x3A,...

La comunicación es con Ardunio Mega usando Wire.h 

//miguelangel.sanpablo@gmail.com
