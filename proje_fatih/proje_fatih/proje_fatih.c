#include <stdio.h>


char isim[20];           //ismi aldýðýmýz deðiþken
char isimler[25][30];    //aldýgýmýz isimleri kaydettigimiz dizi
/*----------------*/
int yatak_numara;
int yatak1dolubos = 0;
int yatak2dolubos = 0;
int yatak3dolubos = 0;
int yatak4dolubos = 0;
int yatak5dolubos = 0;
int yatak6dolubos = 0;
int yatak7dolubos = 0;
int yatak8dolubos = 0;
int yatak9dolubos = 0;
int yatak10dolubos = 0;
int yatak11dolubos = 0;					//yataklarýn dolu veya boþ oldugunu kontrol etmek için deðiþkenler atadik
int yatak12dolubos = 0;
int yatak13dolubos = 0;
int yatak14dolubos = 0;
int yatak15dolubos = 0;
int yatak16dolubos = 0;
int yatak17dolubos = 0;
int yatak18dolubos = 0;
int yatak19dolubos = 0;
int yatak20dolubos = 0;
int yatak21dolubos = 0;
int yatak22dolubos = 0;
int yatak23dolubos = 0;
int yatak24dolubos = 0;
/*-----------------------*/
int kullanici_var_yok = 0;               //ilk giriþin yapýlýp yapýlmadýgýný kontrol eden deðiþken
char kullaniciadi[20];
char sifre[20];
char anahtar_kelime[20];
void yatak1bas()
{
	if (yatak1dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//1 baþ kýsmýný yerleþtirir
	}
	else if (yatak1dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//1baþ kýsmýný yerleþtirir
	}
}
void yatak4bas()
{
	if (yatak4dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);//4  baþ kýsmýný yerleþtirir
	}
	else if (yatak4dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);//4  baþ kýsmýný yerleþtirir
	}
}
void yatak7bas()
{
	if (yatak7dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//7  baþ kýsmý yerleþtirir
	}
	else if (yatak7dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//7  baþ kýsmý yerleþtirir 
	}
}
void yatak10bas()
{
	if (yatak10dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178); //10 baþ kýsmý yerleþtirir oda duvarýný kapatýp 2 tab basar ve yeni odanýn duvarýný atar
	}
	else if (yatak10dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178); //10 baþ kýsmý yerleþtirir oda duvarýný kapatýp 2 tab basar ve yeni odanýn duvarýný atar
	}
}
void yatak13bas()
{
	if (yatak13dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//13 baþ kýsmý yerleþtirir
	}
	else if (yatak13dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//13 baþ kýsmý yerleþtirir
	}
}
void yatak16bas()
{
	if (yatak16dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);// 16 baþ kýsmý yerleþtirir
	}
	else if (yatak16dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);// 16 baþ kýsmý yerleþtirir
	}
}
void yatak19bas()
{
	if (yatak19dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//19 baþ kýsmý yerleþtirir
	}
	else if (yatak19dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//19 baþ kýsmý yerleþtirir
	}
}
void yatak22bas()
{
	if (yatak22dolubos == 1)
	{
		printf("\033[1;31m     %c%c   \033[0m|\n", 178, 178);//19 ve 22 baþ kýsmý yerleþtirir
	}
	else if (yatak22dolubos == 0)
	{
		printf("\033[1;32m     %c%c   \033[0m|\n", 178, 178);//19 ve 22 baþ kýsmý yerleþtirir
	}
}
																//1.kat 1 sýra fonskiyonlarý	
void yatak1alt()
{
	if (yatak1dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//1 alt kýsmý yerleþtir
	}
	else if (yatak1dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//1 alt kýsmý yerleþtir
	}
}			//bu fonksiyonlar yataðýn boþ olup olmadýgýný kontrol edip ona göre renk deðiþtiriyor
void yatak4alt()
{
	if (yatak4dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);//4 alt kýsmý yerleþtir
	}
	else if (yatak4dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);//4 alt kýsmý yerleþtir
	}
}
void yatak7alt()
{
	if (yatak7dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);//7 alt kýsmý yerleþtir

	}
	else if (yatak7dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);//7 alt kýsmý yerleþtir
	}
}
void yatak10alt()
{
	if (yatak10dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178);//10 alt kýsmý yerleþtir oda duvarýný kapat 2 tab bas yeni odanýn duvarýný baþlat
	}
	else if (yatak10dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178);//10 alt kýsmý yerleþtir oda duvarýný kapat 2 tab bas yeni odanýn duvarýný baþlat
	}
}
void yatak13alt()
{
	if (yatak13dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak13dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak16alt()
{
	if (yatak16dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak16dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak19alt()
{
	if (yatak19dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak19dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak22alt()
{
	if (yatak22dolubos == 1)
	{
		printf("\033[1;31m     %c%c   \033[0m|\n", 178, 178);

	}
	else if (yatak22dolubos == 0)
	{
		printf("\033[1;32m     %c%c   \033[0m|\n", 178, 178);
	}
}

/*-----------------------------*/
void yatak2bas()
{
	if (yatak2dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak2dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak5bas()
{
	if (yatak5dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}

	else if (yatak5dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak8bas()
{
	if (yatak8dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak8dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak11bas()
{
	if (yatak11dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178);
	}
	else if (yatak11dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178);
	}
}
void yatak14bas()
{
	if (yatak14dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak14dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak17bas()
{
	if (yatak17dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak17dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak20bas()
{
	if (yatak20dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m ", 178, 178);
	}
	else if (yatak20dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m ", 178, 178);
	}
}
void yatak23bas()
{
	if (yatak23dolubos == 1)
	{
		printf("\033[1;31m    %c%c   \033[0m|\n", 178, 178);
	}
	else if (yatak23dolubos == 0)
	{
		printf("\033[1;32m    %c%c   \033[0m|\n", 178, 178);
	}
}
																//1. kat 2.sýra yatak fonksiyonlarý
void yatak2alt()
{
	if (yatak2dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak2dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak5alt()
{
	if (yatak5dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak5dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak8alt()
{
	if (yatak8dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak8dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak11alt()
{
	if (yatak11dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178);
	}
	else if (yatak11dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178);
	}
}
void yatak14alt()
{
	if (yatak14dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak14dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak17alt()
{
	if (yatak17dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak17dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak20alt()
{
	if (yatak20dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak20dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak23alt()
{
	if (yatak23dolubos == 1)
	{
		printf("\033[1;31m     %c%c   \033[0m|\n", 178, 178);
	}
	else if (yatak23dolubos == 0)
	{
		printf("\033[1;32m     %c%c   \033[0m|\n", 178, 178);
	}
}
/*-----------------------------*/

void yatak3bas()
{
	if (yatak3dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak3dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak6bas()
{
	if (yatak6dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak6dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak9bas()
{
	if (yatak9dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}

	else if (yatak9dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak12bas()
{
	if (yatak12dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178);
	}
	else if (yatak12dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178);
	}
}
void yatak15bas()
{
	if (yatak15dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak15dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak18bas()
{
	if (yatak18dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak18dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak21bas()
{
	if (yatak21dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak21dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak24bas()
{
	if (yatak24dolubos == 1)
	{
		printf("\033[1;31m     %c%c   \033[0m|\n", 178, 178);
	}
	else if (yatak24dolubos == 0)
	{
		printf("\033[1;32m     %c%c   \033[0m|\n", 178, 178);
	}
}								//1.kat 3.sýra yatak fonskiyonlar
									//1. kat 3.sýra yatak fonksiyonlarý
void yatak3alt()
{
	if (yatak3dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak3dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak6alt()
{
	if (yatak6dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak6dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak9alt()
{
	if (yatak9dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak9dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak12alt()
{
	if (yatak12dolubos == 1)
	{
		printf("\033[1;31m     %c%c\033[0m   |\t\t |", 178, 178);
	}
	else if (yatak12dolubos == 0)
	{
		printf("\033[1;32m     %c%c\033[0m   |\t\t |", 178, 178);
	}
}
void yatak15alt()
{
	if (yatak15dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak15dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak18alt()
{
	if (yatak18dolubos == 1)
	{
		printf("\033[1;31m     %c%c \033[0m", 178, 178);
	}
	else if (yatak18dolubos == 0)
	{
		printf("\033[1;32m     %c%c \033[0m", 178, 178);
	}
}
void yatak21alt()
{
	if (yatak21dolubos == 1)
	{
		printf("\033[1;31m  %c%c\033[0m", 178, 178);
	}
	else if (yatak21dolubos == 0)
	{
		printf("\033[1;32m  %c%c\033[0m", 178, 178);
	}
}
void yatak24alt()
{
	if (yatak24dolubos == 1)
	{
		printf("\033[1;31m     %c%c   \033[0m|\n", 178, 178);
	}
	else if (yatak24dolubos == 0)
	{
		printf("\033[1;32m     %c%c   \033[0m|\n", 178, 178);
	}
}
/*-----------------------------*/
void ekran_temizleme()
{
	system("cls"); //ekrandaki her þeyi siler
}
void ogrenci_ekleme()//ogrenci ismi aldýgýmýz fonksiyon
{
	printf("Ogrenci ekleme sectiniz\n");
	printf("Ad giriniz: \n:");
	scanf_s("%s", isim, sizeof(isim));
	yatak_numarasi_alma();
}
int  yatak_numarasi_alma()
{
	while (1)
	{
		printf("Yatak numarasi giriniz: \n");
		printf("Ana Menu icin '-1' tuslayiniz\n:");
		scanf_s("%d", &yatak_numara);
		if (yatak_numara == 1)
		{
			if (yatak1dolubos == 0)
			{
				yatak1dolubos = 1;
				strcpy(isimler[1], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(20);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 2)
		{
			if (yatak2dolubos == 0)
			{
				yatak2dolubos = 1;
				strcpy(isimler[2], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(20);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 3)
		{
			if (yatak3dolubos == 0)
			{
				yatak3dolubos = 1;
				strcpy(isimler[3], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 4)
		{
			if (yatak4dolubos == 0)
			{
				yatak4dolubos = 1;
				strcpy(isimler[4], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 5)
		{
			if (yatak5dolubos == 0)
			{
				yatak5dolubos = 1;
				strcpy(isimler[5], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 6)
		{
			if (yatak6dolubos == 0)
			{
				yatak6dolubos = 1;
				strcpy(isimler[6], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 7)
		{
			if (yatak7dolubos == 0)
			{
				yatak7dolubos = 1;
				strcpy(isimler[7], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 8)
		{
			if (yatak8dolubos == 0)
			{
				yatak8dolubos = 1;
				strcpy(isimler[8], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 9)
		{
			if (yatak9dolubos == 0)
			{
				yatak9dolubos = 1;
				strcpy(isimler[9], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 10)
		{
			if (yatak10dolubos == 0)
			{
				yatak10dolubos = 1;
				strcpy(isimler[10], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 11)
		{
			if (yatak11dolubos == 0)
			{
				yatak11dolubos = 1;
				strcpy(isimler[11], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 12)
		{
			if (yatak12dolubos == 0)
			{
				yatak12dolubos = 1;
				strcpy(isimler[12], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 13)
		{
			if (yatak13dolubos == 0)
			{
				yatak13dolubos = 1;
				strcpy(isimler[13], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 14)
		{
			if (yatak14dolubos == 0)
			{
				yatak14dolubos = 1;
				strcpy(isimler[14], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 15)
		{
			if (yatak15dolubos == 0)
			{
				yatak15dolubos = 1;
				strcpy(isimler[15], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 16)
		{
			if (yatak16dolubos == 0)
			{
				yatak16dolubos = 1;
				strcpy(isimler[16], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 17)
		{
			if (yatak17dolubos == 0)
			{
				yatak17dolubos = 1;
				strcpy(isimler[17], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 18)
		{
			if (yatak18dolubos == 0)
			{
				yatak18dolubos = 1;
				strcpy(isimler[18], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 19)
		{
			if (yatak19dolubos == 0)
			{
				yatak19dolubos = 1;
				strcpy(isimler[19], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 20)
		{
			if (yatak20dolubos == 0)
			{
				yatak20dolubos = 1;
				strcpy(isimler[20], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 21)
		{
			if (yatak21dolubos == 0)
			{
				yatak21dolubos = 1;
				strcpy(isimler[21], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 22)
		{
			if (yatak22dolubos == 0)
			{
				yatak22dolubos = 1;
				strcpy(isimler[22], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 23)
		{
			if (yatak23dolubos == 0)
			{
				yatak23dolubos = 1;
				strcpy(isimler[23], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 24)
		{
			if (yatak24dolubos == 0)
			{
				yatak24dolubos = 1;
				strcpy(isimler[24], isim);
				printf("%s %d nolu yataga yerlestirildi\nSon durum...", isim, yatak_numara);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak dolu!!\nDolu bir yataga ogrenci ekleme islemi yapamazssiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == -1)
		{
			ekran_temizleme();
			harita_kat1();
			break;
		}
		else
		{
			printf("\033[1;31mHatali yatak numarasi girdiniz...\033[0m\n");
		}
	}
}
void ogrenci_cikarma()
{
	while (1)
	{


		printf("Ogrenci Cikarma sectiniz \n");
		printf("lutfen yatak numarasi giriniz: \n");
		scanf_s("%d", &yatak_numara);
		if (yatak_numara == 1)
		{
			if (yatak1dolubos == 1)
			{
				char karakter[20] = "";
				yatak1dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[1], yatak_numara);
				strcpy(isimler[1], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 2)
		{
			if (yatak2dolubos == 1)
			{
				char karakter[20] = "";
				yatak2dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[2], yatak_numara);
				strcpy(isimler[2], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 3)
		{
			if (yatak3dolubos == 1)
			{
				char karakter[20] = "";
				yatak3dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[3], yatak_numara);
				strcpy(isimler[3], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 4)
		{
			if (yatak4dolubos == 1)
			{
				char karakter[20] = "";
				yatak4dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[4], yatak_numara);
				strcpy(isimler[4], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 5)
		{
			if (yatak5dolubos == 1)
			{
				char karakter[20] = "";
				yatak5dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[5], yatak_numara);
				strcpy(isimler[5], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 6)
		{
			if (yatak6dolubos == 1)
			{
				char karakter[20] = "";
				yatak6dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[6], yatak_numara);
				strcpy(isimler[6], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 7)
		{
			if (yatak7dolubos == 1)
			{
				char karakter[20] = "";
				yatak7dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[7], yatak_numara);
				strcpy(isimler[7], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 8)
		{
			if (yatak8dolubos == 1)
			{
				char karakter[20] = "";
				yatak8dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[8], yatak_numara);
				strcpy(isimler[8], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 9)
		{
			if (yatak9dolubos == 1)
			{
				char karakter[20] = "";
				yatak9dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[9], yatak_numara);
				strcpy(isimler[9], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 10)
		{
			if (yatak10dolubos == 1)
			{
				char karakter[20] = "";
				yatak10dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[10], yatak_numara);
				strcpy(isimler[10], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 11)
		{
			if (yatak11dolubos == 1)
			{
				char karakter[20] = "";
				yatak11dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[11], yatak_numara);
				strcpy(isimler[11], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 12)
		{
			if (yatak12dolubos == 1)
			{
				char karakter[20] = "";
				yatak12dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[12], yatak_numara);
				strcpy(isimler[12], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 13)
		{
			if (yatak13dolubos == 1)
			{
				char karakter[20] = "";
				yatak13dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[13], yatak_numara);
				strcpy(isimler[13], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 14)
		{
			if (yatak14dolubos == 1)
			{
				char karakter[20] = "";
				yatak14dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[14], yatak_numara);
				strcpy(isimler[14], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 15)
		{
			if (yatak15dolubos == 1)
			{
				char karakter[20] = "";
				yatak15dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[15], yatak_numara);
				strcpy(isimler[15], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 16)
		{
			if (yatak16dolubos == 1)
			{
				char karakter[20] = "";
				yatak16dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[16], yatak_numara);
				strcpy(isimler[16], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 17)
		{
			if (yatak17dolubos == 1)
			{
				char karakter[20] = "";
				yatak17dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[17], yatak_numara);
				strcpy(isimler[17], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 18)
		{
			if (yatak18dolubos == 1)
			{
				char karakter[20] = "";
				yatak18dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[18], yatak_numara);
				strcpy(isimler[18], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 19)
		{
			if (yatak19dolubos == 1)
			{
				char karakter[20] = "";
				yatak19dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[19], yatak_numara);
				strcpy(isimler[19], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 20)
		{
			if (yatak20dolubos == 1)
			{
				char karakter[20] = "";
				yatak20dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[20], yatak_numara);
				strcpy(isimler[20], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 21)
		{
			if (yatak21dolubos == 1)
			{
				char karakter[20] = "";
				yatak21dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[21], yatak_numara);
				strcpy(isimler[21], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 22)
		{
			if (yatak22dolubos == 1)
			{
				char karakter[20] = "";
				yatak22dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[22], yatak_numara);
				strcpy(isimler[22], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 23)
		{
			if (yatak23dolubos == 1)
			{
				char karakter[23] = "";
				yatak23dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[23], yatak_numara);
				strcpy(isimler[23], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == 24)
		{
			if (yatak24dolubos == 1)
			{
				char karakter[20] = "";
				yatak24dolubos = 0;
				printf("%s %d nolu yataktan kaldirildi\nSon durum...", isimler[24], yatak_numara);
				strcpy(isimler[24], karakter);
				yukleme_ekrani(40);
				ekran_temizleme();
				harita_kat1();
			}
			else
			{
				printf("\033[1;31mBu yatak bos!!\nBos bir yataktan ogrenci cikarma islemi yapamazsiniz!!\n1.kat plani islem ekranina donuluyor...\n\n\033[0m");
				printf("\033[1;33m3...\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m2..\033[0m\n");
				Sleep(1000);
				printf("\033[1;33m1.\033[0m\n");
				Sleep(1000);
				yukleme_ekrani(1);
				ekran_temizleme();
				harita_kat1();
			}
		}
		if (yatak_numara == -1)
		{
			ekran_temizleme();
			harita_kat1();
			break;
		}
		else
		{
			printf("\033[1;31mHatali yatak numarasi girdiniz...\033[0m\n");
		}
	}
}
void ogrenci_listeleme()
{
	int secim;
	printf("Tum Ogrencilerin ADI - YATAK NUMARASI goruntulume\n");
	for (int i = 1; i <= 24; i++)
	{
		printf("ISIM = %s  YATAK NO = %d\n", isimler[i], i);
	}
	printf("Ana Menuye Donmek icin herhangi bir tus girin...");
	getchar();
	getchar();
	harita_kat1();
}
void kullanici_giris() {
	ekran_temizleme();
	char temp_kullaniciadi[20];
	char temp_sifre[20];
	int secim;
	char temp_anahtar[20];

	while (1)
	{
		if (kullanici_var_yok == 0)
		{
			while (1)
			{
				printf("1 - Yeni Kullanici Olustur\n2 - Cikis\n:");
				scanf_s("%d", &secim);

				if (secim == 1)
				{
					ekran_temizleme();
					printf("Kullanici adi: ");
					scanf_s("%s", kullaniciadi, sizeof(kullaniciadi));
					printf("Sifre: ");
					scanf_s("%s", sifre, sizeof(sifre));
					printf("Anahtar kelime giriniz (sifre yenileme isleminde gerekli)\n");
					scanf_s("%s", anahtar_kelime, sizeof(anahtar_kelime));
					kullanici_var_yok = 1;
					printf("Yeni kullanici sisteme tanimlanmistir\nHosgeldiniz...\n");
					Sleep(100);
					yukleme_ekrani(1);
					harita_kat1();
					return;
				}
				else if (secim == 2)
				{
					exit(0);
				}
				else
				{
					printf("Hatali giris, lutfen yeniden deneyin\n");
					Sleep(300);
					ekran_temizleme();
				}
			}
		}
		else if (kullanici_var_yok == 1)
		{
			ekran_temizleme();
			while (1)
			{
				printf("1 - Giris yap\n2 - Sifremi unuttum\n3 - Cikis\n");
				scanf_s("%d", &secim);

				if (secim == 1)
				{
					ekran_temizleme();
					printf("Kullanici adi: ");
					scanf_s("%s", temp_kullaniciadi, sizeof(temp_kullaniciadi));
					printf("Sifre: ");
					scanf_s("%s", temp_sifre, sizeof(temp_sifre));
					if (strcmp(temp_kullaniciadi, kullaniciadi) == 0 && strcmp(temp_sifre, sifre) == 0)
					{
						printf("Kullanici adi ve sifre dogru\nHosgeldiniz :) :)\n");
						Sleep(100);
						yukleme_ekrani(1);
						harita_kat1();
						return;
					}
					else
					{
						printf("Kullanici adi veya sifre hatali, lutfen yeniden deneyiniz...\n");
						Sleep(100);
						yukleme_ekrani(1);
					}
				}
				else if (secim == 2)
				{
					ekran_temizleme();
					printf("kayit islemi yaparken girdiginiz anahtar kelimeyi lutfen giriniz\n");
					scanf_s("%s", temp_anahtar, sizeof(temp_anahtar));
					if (strcmp(temp_anahtar, anahtar_kelime) == 0)
					{
						printf("Anahtar kelime dogru...");
						ekran_temizleme();
						printf("Lutfen yeni kullanici adi ve sifrenizi giriniz\n");
						printf("Kullanici adi:");
						scanf_s("%s", kullaniciadi, sizeof(kullaniciadi));
						printf("\n");
						printf("Sifre:");
						scanf_s("%s", sifre, sizeof(sifre));
					}
					else
					{
						printf("hatali giris...");
						yukleme_ekrani(1);
						ekran_temizleme();
					}
				}
				else if (secim == 3)
				{
					printf("Gorusmek uzere...\n");
					yukleme_ekrani(1);
					exit(0);
				}
				else
				{
					printf("Hatali tuslama yaptiniz, lutfen yeniden deneyiniz...\n");
					Sleep(100);
				}
			}
		}
	}
}
int  giris_ekrani()
{

	printf("$$\\     $$\\                     $$\\            $$$$$$\\    $$\\                                                                             \n");
	printf("\\$$\\   $$  |                    $$ |          $$  __$$\\   $$ |                                                                            \n");
	printf(" \\$$\\ $$  /$$\\   $$\\  $$$$$$\\ $$$$$$\\         $$ /  $$ |$$$$$$\\    $$$$$$\\  $$$$$$\\$$$$\\   $$$$$$\\   $$$$$$$\\ $$\\   $$\\  $$$$$$\\  $$$$$$$\\  $$\\   $$\\ \n");
	printf("  \\$$$$  / $$ |  $$ |$$  __$$\\\\_$$  _|        $$ |  $$ |\\_$$  _|  $$  __$$\\ $$  _$$  _$$\\  \\____$$\\ $$  _____|$$ |  $$ |$$  __$$\\ $$  __$$\\ $$ |  $$ |\n");
	printf("   \\$$  /  $$ |  $$ |$$ |  \\__| $$ |          $$ |  $$ |  $$ |    $$ /  $$ |$$ / $$ / $$ | $$$$$$$ |\\$$$$$$\\  $$ |  $$ |$$ /  $$ |$$ |  $$ |$$ |  $$ |\n");
	printf("    $$ |   $$ |  $$ |$$ |       $$ |$$\\       $$ |  $$ |  $$ |$$\\ $$ |  $$ |$$ | $$ | $$ |$$  __$$ | \\____$$\\ $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |\n");
	printf("    $$ |   \\$$$$$$  |$$ |       \\$$$$  |       $$$$$$  |  \\$$$$  |\\$$$$$$  |$$ | $$ | $$ |\\$$$$$$$ |$$$$$$$  |\\$$$$$$$ |\\$$$$$$  |$$ |  $$ |\\$$$$$$  |\n");
	printf("    \\__|    \\______/ \\__|        \\____/        \\______/    \\____/  \\______/ \\__| \\__| \\__| \\_______|\\_______/  \\____$$ | \\______/ \\__|  \\__| \\______/ \n");
	printf("                                                                                                              $$\\   $$ |                              \n");
	printf("                                                                                                              \\$$$$$$  |                              \n");
	printf("                                                                                                               \\______/                               \n");
	printf("Devam etmek icin bir tus giriniz\n");
	getchar();
	printf("\033[1;32mSistem yukleniyor...\033[0m\n");
	Sleep(100);
	yukleme_ekrani(50);
	ekran_temizleme();
	kullanici_giris();


}
int  yukleme_ekrani(int sayi) {

	int i = 0;
	do
	{
		printf("\033[1;36m%c \033[0m", 178);
		Sleep(sayi);
		i++;
		if (i == 30)break;
	} while (1);
	printf("\n");
	return 0;
}

int  harita_kat1()
{
	ekran_temizleme();
	int secim;
	printf("[]___________________________[]");
	printf("\t\t[]___________________________[]\n");
	printf(" |   1      4 |   7     10   |");
	printf("\t\t |  13     16 |  19     22   |\n |");

	yatak1bas(); //1. yatak baþ kýsmýný yerleþtirir
	yatak4bas(); //4. yatak baþ kýsmýný yerleþtirir
	printf("|");//orta direk yerleþtirir
	yatak7bas(); //7. yatak baþ kýsmýný yerleþtirir
	yatak10bas();
	yatak13bas();
	yatak16bas();
	printf("|");//orta direk yerleþtirir
	yatak19bas();
	yatak22bas();
	printf(" |");//ilk bastaki odanýn duvarýný açar
	yatak1alt();
	yatak4alt();
	printf("|");//orta direk
	yatak7alt();
	yatak10alt();
	yatak13alt();
	yatak16alt();
	printf("|");//orta direk 
	yatak19alt();
	yatak22alt();//19 ve 22 alt kýsým yerleþtir oda duvarýný kapat
	printf(" |            |              |");//odayý uzat
	printf("\t\t |            |              |\n");//yan odayý uzat
	printf(" |   2      5 |   8     11   |");// 1. odanýn yeni yatak numaralarýný gir
	printf("\t\t |  14     17 |  20     23   |\n");// 2.  odanýn yatak numaralarýný gir
	printf(" |");//1. odanýn baþlangýc duvarý
	yatak2bas();
	yatak5bas();
	printf("|");//orta direk
	yatak8bas();
	yatak11bas();
	yatak14bas();
	yatak17bas();
	printf("|");//orta direk
	yatak20bas();
	yatak23bas();
	printf(" |");// 1. oda baslangic diregi
	yatak2alt();
	yatak5alt();//2 ve 5 alt kýsmý yerleþtir
	printf("|");//orta direk
	yatak8alt();
	yatak11alt();//8 ve 11 alt kýsmý yerleþtir oda duvarýný kapat 2 tab bas yan oda duvar ac
	yatak14alt();
	yatak17alt();//14 ve 17 alt kýsmý yerleþtir
	printf("|");//orta direk
	yatak20alt();
	yatak23alt();//20 ve 23 alt kýsmý yerleþtir oda duvarýný kapat
	printf(" |            |              |");//odayý uzat
	printf("\t\t |            |              |\n");//yan odayý uzat
	printf(" |   3      6 |   9     12   |");//1. oda yatak numaralarýný gir
	printf("\t\t |  15     18 |  21     24   |\n");//2. oda yatak numaralarýný gir
	printf(" |");//1. oda duvar baslangici
	yatak3bas();
	yatak6bas();
	printf("|");//orta direk
	yatak9bas();
	yatak12bas();
	yatak15bas();
	yatak18bas();
	printf("|");//orta direk
	yatak21bas();
	yatak24bas();
	printf(" |");//1. oda baþlangýç duvarý
	yatak3alt();
	yatak6alt();
	printf("|");//orta direk
	yatak9alt();
	yatak12alt();
	yatak15alt();
	yatak18alt();
	printf("|");//orta direk
	yatak21alt();
	yatak24alt();
	printf(" |            |              |");//odayý uzat
	printf("\t\t |            |              |\n");//yan odayý uzat
	printf("[]___________^ ^_____________[]");//odanýn kapýsý ve duvarý
	printf("\t\t[]___________^ ^_____________[]");//yan odanýn kapýsý ve duvarý
	printf("\n\n\t\t\t     1.KAT KROKISI\n");
	printf("\033[1;31m\t\t\t   %c DOLU \033[0m ", 178);
	printf("\033[1;32m\t%c BOS\n\033[0m", 178);
	while (1)
	{
		int secim;
		printf("Lutfen yapmak istediginiz islemi seciniz\n1 - Ogrenci Ekleme\n2 - Ogrenci Kaldirma\n3 - Ogrenci Listeleme\n4 - Ana menu\n");
		scanf_s("%d", &secim);

		if (secim != 1 && secim != 2 && secim != 3 && secim != 4)
		{
			printf("Hatali tuslama! Lutfen gecerli bir sayi giriniz.\n");
			Sleep(1000);
			ekran_temizleme();
			harita_kat1();
		}

		else if (secim == 1)
		{
			printf("Ogrenci EKleme sectiniz\nYukleniyor\n");
			yukleme_ekrani(15);
			ogrenci_ekleme();
			break;
		}
		else if (secim == 2)
		{
			printf("Ogrenci Cikarma sectiniz\nYukleniyor\n");
			yukleme_ekrani(15);
			ogrenci_cikarma();
			break;
		}
		else if (secim == 3)
		{
			printf("Ogrenci Listeleme Sectiniz...\Yukleniyor\n");
			yukleme_ekrani(15);
			ogrenci_listeleme();
			break;
		}
		else if (secim == 4)
		{
			kullanici_giris();
			break;
		}
	}
	return 0;
}

int main()
{
	system("color 03");
	giris_ekrani();
	return 0;
}