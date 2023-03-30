#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int islem(int num1, int num2){//iþlem sayýsýný döndürecek bir fonksiyon tanýmladým
    int fark, islemSayisi=0;//iþlemler sonucu oluþan fark ve iþlem sayýsýný belirten deðiiþkenleri tanýmladým
    if (num1==num2)//girilen iki sayýnýn da birbirine eþit olmasý durumunda sadece 1 iþlem yapacaðýndan 1 deðerini döndürdüm
        return 1;
    if (num1>num2){//num1 num2den büyük olduðu durumda farký hesapladým
        fark=num1-num2;
    }
    else{//num1 num2den büyük olmadýðý durumda farký hesapladým
        fark=num2-num1;
    }
    
    while(fark>0){//hesaplanan fark deðeri 0dan büyük ise bir döngüye soktum. bu döngü fark deðeri 0 olduðunda çalýþmayacaktýr
        if(num1>num2) {
            fark=num1-num2;//fark deðerini bulduk
            num1=fark;//fark deðerini büyük olan sayý deðerine eþitledik
            islemSayisi++;//iþlem sayýsýný ifade eden deðeri 1 artýrdýk
        }
        else{
            fark=num2-num1;//fark deðerini bulduk
            num2=fark;//fark deðerini büyük olan sayý deðerine eþitledik
            islemSayisi++;//iþlem sayýsýný ifade eden deðeri 1 artýrdýk
        }
    }
    return islemSayisi;//iþlem sayýsýný veren ifadeyi döndürdük
}

int main(){
    int num1, num2;//num1 ve num2 tanýmladýk
    printf("num1 degeri giriniz: ");//num1 deðeri istedik
    scanf("%d", &num1);//num1 deðeri klavyeden aldýk
    printf("num2 degeri giriniz: ");//num2 deðeri istedik
    scanf("%d", &num2);//num2 deðeri klavyeden aldýk
    int sonuc = islem(num1, num2);//sonuç deðeri tanýmladýk ve buna islem fonksiyonundan döndürülen deðeri atadýk
    printf("Islem sayisi: %d", sonuc);//sonuc deðerini ekrana yazdýrdýk
    return 0;
}

