#include <stdio.h>
#include <stdlib.h>

int biriktir(int* yukseklik, int boyut){//suyu biriktirebilmemiz i�in bir fonksiyon tan�mlad�m
	int i,j;//d�ng�lerdekullanmak i�in i ve j de�i�kenlerini tan�mlad�m
	int su=0;//biriken su miktar�n� ifade eden su de�i�kenini tan�mlad�m
	for (i=1; i<boyut-1; i++){//i de�i�keni 1'den ba�lar ve son eleman hari� dizinin t�m elemanlar�n� gezer
		int solMax=0, sagMax=0;//d�ng�, her tekrarlad���nda sol ve sa�daki maksimum de�erleri 0 oalrak tutar
	
		for(j=i; j>=0; j--){//solMax de�erini bulmak i�in j de�i�keni i den ba�lar ve sol tarafa do�ru kontrol eder
			solMax=solMax>yukseklik[j] ? solMax : yukseklik[j];//her tekrarda solMax, bulunan maksimum y�kseklik de�eri ile g�ncellenir
		
		}	
	
		for (j=i; j<boyut; j++){//sagMax de�erini bulmak i�in j de�i�keni i'den ba�lar ve sa� tarafa do�ru d�ng� yapar.
			sagMax=sagMax>yukseklik[j] ? sagMax : yukseklik[j];//her tekrarda sagMax, bulunan maksimum y�kseklik de�eri ile g�ncellenir
		
		}
	
		su+=solMax>sagMax ? sagMax-yukseklik[i] : solMax-yukseklik[i];//bulunan maksimum y�ksekliklerin minimumunu bulun ve i'nci eleman�n y�ksekli�ini ��kar�n. Elde edilen sonucu su de�i�kenine ekleyin.
	}
	return su;
}

int main(int argc, char *argv[]) {
	int uzunluk;//kullan�c�n�n klavyeden girece�i de�eri tutabilecek bir de�i�ken ta�mlad�m
	printf("Kac tane n degeri girmek istersiniz:");//kullan�c�dan ka� tane say� girmek istedi�ini sordum
	scanf("%d",&uzunluk);//kullan�c�dan uzunluk de�eri istedim
	int dizi[uzunluk];//klavyeden girilen uzunluk de�eri kadar eleman i�erecek bir dizi tan�mlad�m
	int n;//y�kseklik de�erini belirten n de�i�keni atad�m
	printf("Gireceginiz her n sayisi negatif olmayan tam sayi olmalidir.\n");//n de�erinin 0 veya pozitif bir de�er olmas� gerekti�ini ekrana yazd�rd�m
	for(n=0; n<uzunluk; n++){//girilen uzunluk de�eri kadar tekrar edecek bir for d�ng�s� oluturdum
		printf("Lutfen %d. n degerini Giriniz\n",n+1);//her tekrarda kullan�c�dan n de�erini istedim
		scanf("%d",&dizi[n]);
	
	}
	printf("\n");//bir sat�r bo�luk
	printf("Yukseklik degerleri sirasiyla(");
	printf("%d,",dizi[0]);//dizinin ilk eleman�n� yazd�rd�m
	for(n=1; n<uzunluk-1; n++){//d�ng� ilk �al��t���nda dizinin 2. eleman�n� yazd�racak, en son �al��t���nda ise sondan bir �nceki eleman� yazd�racak
		printf("%d,",dizi[n]);//n de�erine ba�l� dizinin elemanlar�n� yazd�rd�k
		
	}
	printf("%d)\n",dizi[n]);//dizinin son eleman�n� yazd�rd�k ve parantezi kapad�k
	int sonuc=biriktir(dizi, uzunluk);//tan�mlad���m�z fonksiyonda d�nd�rd���m�z de�eri sonuc de�i�kenini tan�mlad�k ve bu de�i�kene atad�k
	printf("Biriken su miktari: %d\n", sonuc);//sonuc de�erini yazd�rd�k
	
return 0;
}
