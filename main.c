#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomNumberGenerator(const int nMin,const int nMax,const int nNumOfNumsToGenerate)
{
    int nRandonNumber=0;
    for (int i = 0; i <nNumOfNumsToGenerate; i++)
    {
     nRandonNumber = rand()%(nMax-nMin) +nMin;
     printf("%d",nRandonNumber);
printf("\n");
    }

}

void main()
{
    srand(time(NULL));
    int minimum,maksimum,sayi_sayi;
    printf("Alabilecegi minimum deger:");
    scanf("%d",&minimum);
    printf("Alabilecegi maksimum deger:");
    scanf("%d",&maksimum);
    printf("Kac Sayi Alacagi:");
    scanf("%d",&sayi_sayi);
    RandomNumberGenerator(minimum,maksimum,sayi_sayi);
    
}
