#include <stdio.h>
#include <stdlib.h>

int biriktir(int* yukseklik, int boyut){//suyu biriktirebilmemiz için bir fonksiyon tanýmladým
	int i,j;//döngülerdekullanmak için i ve j deðiþkenlerini tanýmladým
	int su=0;//biriken su miktarýný ifade eden su deðiþkenini tanýmladým
	for (i=1; i<boyut-1; i++){//i deðiþkeni 1'den baþlar ve son eleman hariç dizinin tüm elemanlarýný gezer
		int solMax=0, sagMax=0;//döngü, her tekrarladýðýnda sol ve saðdaki maksimum deðerleri 0 oalrak tutar
	
		for(j=i; j>=0; j--){//solMax deðerini bulmak için j deðiþkeni i den baþlar ve sol tarafa doðru kontrol eder
			solMax=solMax>yukseklik[j] ? solMax : yukseklik[j];//her tekrarda solMax, bulunan maksimum yükseklik deðeri ile güncellenir
		
		}	
	
		for (j=i; j<boyut; j++){//sagMax deðerini bulmak için j deðiþkeni i'den baþlar ve sað tarafa doðru döngü yapar.
			sagMax=sagMax>yukseklik[j] ? sagMax : yukseklik[j];//her tekrarda sagMax, bulunan maksimum yükseklik deðeri ile güncellenir
		
		}
	
		su+=solMax>sagMax ? sagMax-yukseklik[i] : solMax-yukseklik[i];//bulunan maksimum yüksekliklerin minimumunu bulun ve i'nci elemanýn yüksekliðini çýkarýn. Elde edilen sonucu su deðiþkenine ekleyin.
	}
	return su;
}

int main(int argc, char *argv[]) {
	int uzunluk;//kullanýcýnýn klavyeden gireceði deðeri tutabilecek bir deðiþken taýmladým
	printf("Kac tane n degeri girmek istersiniz:");//kullanýcýdan kaç tane sayý girmek istediðini sordum
	scanf("%d",&uzunluk);//kullanýcýdan uzunluk deðeri istedim
	int dizi[uzunluk];//klavyeden girilen uzunluk deðeri kadar eleman içerecek bir dizi tanýmladým
	int n;//yükseklik deðerini belirten n deðiþkeni atadým
	printf("Gireceginiz her n sayisi negatif olmayan tam sayi olmalidir.\n");//n deðerinin 0 veya pozitif bir deðer olmasý gerektiðini ekrana yazdýrdým
	for(n=0; n<uzunluk; n++){//girilen uzunluk deðeri kadar tekrar edecek bir for döngüsü oluturdum
		printf("Lutfen %d. n degerini Giriniz\n",n+1);//her tekrarda kullanýcýdan n deðerini istedim
		scanf("%d",&dizi[n]);
	
	}
	printf("\n");//bir satýr boþluk
	printf("Yukseklik degerleri sirasiyla(");
	printf("%d,",dizi[0]);//dizinin ilk elemanýný yazdýrdým
	for(n=1; n<uzunluk-1; n++){//döngü ilk çalýþtýðýnda dizinin 2. elemanýný yazdýracak, en son çalýþtýðýnda ise sondan bir önceki elemaný yazdýracak
		printf("%d,",dizi[n]);//n deðerine baðlý dizinin elemanlarýný yazdýrdýk
		
	}
	printf("%d)\n",dizi[n]);//dizinin son elemanýný yazdýrdýk ve parantezi kapadýk
	int sonuc=biriktir(dizi, uzunluk);//tanýmladýðýmýz fonksiyonda döndürdüðümüz deðeri sonuc deðiþkenini tanýmladýk ve bu deðiþkene atadýk
	printf("Biriken su miktari: %d\n", sonuc);//sonuc deðerini yazdýrdýk
	
return 0;
}
