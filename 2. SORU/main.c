#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int islem(int num1, int num2){//i�lem say�s�n� d�nd�recek bir fonksiyon tan�mlad�m
    int fark, islemSayisi=0;//i�lemler sonucu olu�an fark ve i�lem say�s�n� belirten de�ii�kenleri tan�mlad�m
    if (num1==num2)//girilen iki say�n�n da birbirine e�it olmas� durumunda sadece 1 i�lem yapaca��ndan 1 de�erini d�nd�rd�m
        return 1;
    if (num1>num2){//num1 num2den b�y�k oldu�u durumda fark� hesaplad�m
        fark=num1-num2;
    }
    else{//num1 num2den b�y�k olmad��� durumda fark� hesaplad�m
        fark=num2-num1;
    }
    
    while(fark>0){//hesaplanan fark de�eri 0dan b�y�k ise bir d�ng�ye soktum. bu d�ng� fark de�eri 0 oldu�unda �al��mayacakt�r
        if(num1>num2) {
            fark=num1-num2;//fark de�erini bulduk
            num1=fark;//fark de�erini b�y�k olan say� de�erine e�itledik
            islemSayisi++;//i�lem say�s�n� ifade eden de�eri 1 art�rd�k
        }
        else{
            fark=num2-num1;//fark de�erini bulduk
            num2=fark;//fark de�erini b�y�k olan say� de�erine e�itledik
            islemSayisi++;//i�lem say�s�n� ifade eden de�eri 1 art�rd�k
        }
    }
    return islemSayisi;//i�lem say�s�n� veren ifadeyi d�nd�rd�k
}

int main(){
    int num1, num2;//num1 ve num2 tan�mlad�k
    printf("num1 degeri giriniz: ");//num1 de�eri istedik
    scanf("%d", &num1);//num1 de�eri klavyeden ald�k
    printf("num2 degeri giriniz: ");//num2 de�eri istedik
    scanf("%d", &num2);//num2 de�eri klavyeden ald�k
    int sonuc = islem(num1, num2);//sonu� de�eri tan�mlad�k ve buna islem fonksiyonundan d�nd�r�len de�eri atad�k
    printf("Islem sayisi: %d", sonuc);//sonuc de�erini ekrana yazd�rd�k
    return 0;
}

