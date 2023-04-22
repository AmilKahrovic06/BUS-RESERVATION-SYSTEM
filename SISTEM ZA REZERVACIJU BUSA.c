#include <stdio.h>

int main()
{
	int s,o,b,s1,m1,s2,m2,a=1,d=5,e=15,f=16,g=30,j=31;
	printf("SIMULACIJA//SISTEM ZA REZERVACIJU BUSA\n\n");
	printf("Odaberite rutu da biste nastavili:\n\n");
	printf("1-Novi Pazar-Beograd-1500 din\nVremena polaska:\n11:45h-oko 17:45h\n15:15h-oko 21:15h\n\n2-Novi Pazar-Novi Sad-1900 din\nVremena polaska:\n15:15h-oko 22:15h\n18:15h-oko 01:15h\n\n3-Novi Pazar-Sjenica-300 din\nVremena polaska:\n07:30h-oko 09:30h\n16:00h-oko 18:00h\n\n4-Novi Pazar-Kragujevac-800 din\nVremena polaska:\n07:00h-oko 11:00h\n15:30h-oko 18:30h\n");
	printf("Ukucajte broj rute koju zelite,a onda pratite dalja uputstva:");
    scanf("%d",&s);
    printf("Ukucajte sat i minut vremena POLASKA da biste odabrali rutu:");
    scanf("%d %d",&s1,&m1);
    system("cls");
    printf("\nZelite li povratnu kartu?(na povratnu kartu 15 posto popusta)\n");
    printf("1-da\n2-ne\n");
    scanf("%d",&o);
    system("cls");
    printf("\nUkucajte broj sedista koje zelite da rezervisete:");
    scanf("%d",&b);
    system("cls");
    s2=s1;
    m2=m1;
    	while(b==0){
			printf("\nBroj sedista ne moze biti nula.\n");
			printf("\nUkucajte broj sedista koje zelite da rezervisete:");
			scanf("%d",&b);
			system("cls");
		}
		system("cls");
			while(b>84){
			printf("\nMaksimalan broj sedista u busu je 84.\n");
			printf("\nUkucajte broj sedista koje zelite da rezervisete:");
			scanf("%d",&b);
			system("cls");
		}system("cls");
    
        while(b==a||b==d||b==e||b==f||b==g||b==j){
        
        printf("\nZao nam je,to mesto je zauzeto.\n\nUkucajte broj sedista koje zelite da rezervisete:\n");
        scanf("%d",&b);
        system("cls");
		}
		system("cls");
	
         switch(o)
    {
    	case 1:
    	switch(s)
	{
	    case 1:
		printf("\n-----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Beograd\nUkupna cena karte: 2550,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n-----------------------------------\n",b,s1,m1,s2+6,m2);
		break;
		case 2:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Novi Sad\nUkupna cena karte: 3230,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+7,m2);
		break;
		case 3:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Sjenica\nUkupna cena karte: 510,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+2,m2);
		break;
		case 4:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Kragujevac\nUkupna cena karte: 1360,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+4,m2);
		break;
		default:printf("");
			
	}
	break;
	case 2:
switch(s)
	{
	    case 1:
		printf("\n-----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Beograd\nUkupna cena karte: 1500,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n-----------------------------------\n",b,s1,m1,s2+6,m2);
		break;
		case 2:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Novi Sad\nUkupna cena karte: 1900,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+7,m2);
		break;
		case 3:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Sjenica\nUkupna cena karte: 300,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+2,m2);
		break;
		case 4:
		printf("\n----------------------------------\n\nK A R T A  Z A  A U T O B U S\nRuta:Novi Pazar-Kragujevac\nUkupna cena karte: 800,00 din\nBroj sedista:%d\nVreme polaska:%d:%dh-oko %d:%dh\nSRECAN PUT!\n\n----------------------------------\n",b,s1,m1,s2+4,m2);
		break;	
		default:printf("");}
	break;
	default: printf("");
}
    	
	
	return 0;
}

