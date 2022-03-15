/*
Computers uses binary(0&1)-to store data. A binary digit(bit) is the smallest unit of data in computing.
A group of 8 bits is called a byte. Most computer use 8 bit at a time,like 00000011 for number 3.
Inside computer there are many transistor(tiny switch that is activated by the electronic signals it receives)
The digits 1 and 0 used in binary reflect the on and off states of a transistor.
In counting system denary is known as base 10 because there are 10 choices b/w 0&9. For binary no. there are
only two digits 0 and 1 . The binary system is also known as base 2.
For eg. in denary system 6432 is 6*10^3 + 4*10^2 + 3*10^1 + 2*10^0. (denary is base 10)
But in binary 1001 will be written as 1*2^3 + 0*2^2 + 0*2^1 + 1*2^0. ->9 (because binary is base 2)

To calculate a large binary number like 10101000 we need more place values of multiples of 2.
2^7 = 128
2^6 = 64
2^5 = 32
2^4 = 16
2^3 = 8
2^2 = 4
2^1 = 2
2^0 = 1
In denary the sum is calculated as:
(1 x 128) + (0 x 64) + (1 x 32) + (0 x 16)+ (1 x 8) + (0 x 4) + (0 x 2) + (0 x 1) = 168.

There are 2 meathods to convert denary into binary :- 
1. Divide by two and use the remainder
Denary number 83
83 ÷ 2 = 41 remainder 1
41 ÷ 2 = 20 remainder 1
20 ÷ 2 = 10 remainder 0
10 ÷ 2 = 5 remainder 0
5 ÷ 2 = 2 remainder 1
2 ÷ 2 = 1 remainder 0
1 ÷ 2 = 0 remainder 1
Put the remainders in reverse order to get the final number: 1010011.
2. Take off the biggest 2n value you can.

With 8bits(1byte) we can have 2^8=256 different values(including 0) highest value we can
count upto would be 255 (11111111).

Audio, images and characters all look like binary numbers in machine code. 
These numbers are encoded in different data formats to give them meaning, eg the 8-bit pattern 01000001 could be
 the number 65, the character 'A', or a colour in an image. 'B' is 66 and so on.

Encoding formats have been standardised to help compatibility across different platforms. For example:

audio is encoded as audio file formats, eg mp3, WAV, AAC
video is encoded as video file formats, eg MPEG4, H264
text is encoded in character sets, eg ASCII, Unicode
images are encoded as file formats, eg BMP, JPEG, PNG

ASCII  American Standard Code for Information Interchange. It is a 7-bit code.
The original ASCII table is encoded on 7 bits, and therefore it has 128 characters
Unicode uses two encoding forms: 8-bit(256) and 16-bit(65,536),
 based on the data type of the data that is being that is being encoded. 
*/

/* RGB means Red Green Blue, ie the primary colors in additive color synthesis. A RGB file consists
in composite layers of Red, Gree and Blue, each being coded on 256 levels from 0 to 255.
For example, black corresponds to the levels R=0, G=0, B=0, and white corresponds to the levels R=255, G=255, B=255.
*/

/*just like denary has base 10 and binary has base 2 there is another base system called HEXADECIMAL.
it has base 16 and there are 16 digits. 0123456789ABCDEF 
eg: 09 means (16^1*0+16^0*9= 9) but we will use 0A to represent 10 and just like it 0F for representing 15.
With two digits, we can have a maximum value of FF, or (16^1*15+16^0*15)=255.
The values in a computer’s memory are still stored as binary, but this way of representation helps us humans represent larger numeric values with fewer digits needed.
With 8 bits in binary, the highest value we can count to is also 255, with 11111111.
The prefix 0x is used in code to indicate that the number is being written in hexadecimal.
eg: 0x0 0x1 0x2 0x3 0x4 0x5 0x6 0x7
    0x8 0x9 0xA 0xB 0xC 0xD 0xE 0xF
    0x10  0x11  0x12  0x13  0x14  0x15  0x16  0x17
    0x18  0x19  0x1A  0x1B  0x1C  0x1D  0x1E  0x1F ......

    Each digit in hexadecimal, with 16 values, maps to four bits(binary digits) in binary. it means
    if we write 10 then in hexadecimal it will be 0A but in binary it will be 1010
    15 = FF in hex but in binary its 1111.
*/