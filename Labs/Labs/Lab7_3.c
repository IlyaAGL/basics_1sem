#include <stdio.h>

union HexToBits {
    unsigned int hexValue;
    struct {
        unsigned int bit1 : 1;
        unsigned int bit2 : 1;
        unsigned int bit3 : 1;
    } bits;
};

int main() {
    union HexToBits converter;

    scanf_s("%x", &converter.hexValue);


    printf("%s", converter.bits.bit1 ? "�������������� ��� \n" : "�������������� ���� \n");
    printf("%s", converter.bits.bit2 ? "����� ��� \n" : "����� ���� \n");
    printf("%s", converter.bits.bit3 ? "������ ��� \n" : "������ ���� \n");

    return 0;
}