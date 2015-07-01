#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void Color(int couleurDuTexte,int couleurDeFond);

int main(int argc, char *argv[])
{
Color(14,0);
printf( "\n"); 
printf("        XX    X Y     Y  LL        IIII   TTTTTTTTT   OOO   LL     \n"); 
printf("        XX   XX Y    YY  LL       IIII    TTTTTTTTT OOOOOO  LL     \n"); 
printf("         XX XX  YY   YY  LL         II       TTT    OO   OO LL     \n"); 
printf("         XXXX   YY  YY   LL         II       TTT   OO    OO LL     \n"); 
printf("          XXX    YY YY   LL         II       TTT   OO    OO LL     \n"); 
printf("          XXX     YYY    LL         II       TTT   OO    OO LL     \n"); 
printf("         XX XX     Y     LL         II        TT   OOO  OO  LL     \n"); 
printf("        XXX XXX   YY     LLLLLLL    III       TT    OOOOOO  LLLLLLL\n"); 
printf("        XX   XX   Y      LLLL     IIIII       TT     OOO    LLLL   \n"); 
printf("                          II                               \n"); 
printf("\n"); 
      Color(7,0);
printf("                       #############################\n"); 
printf("                       #      Xylitol CrackMe 1    #\n"); 
printf("                       #        IDE: Dev-C++       #\n"); 
printf( "                       #############################\n"); 
printf("\n"); 
    long password;
    long valeur;
    
  password = 6571965;
  
       Color(13,0);
  printf ("Entered your password please : ");
  
  scanf("%ld", &valeur);
  
  printf ("\n\n");
  
  if (valeur == password)
{    
            Color(10,0);
            printf ("Great your password is good ! \n\n");
}
else
{
    Color(12,0);
    printf ("Invalid Password, try again!\n\n");
}
    Color(11,0);
  system("PAUSE");    
  return 0;
}
void Color(int couleurDuTexte,int couleurDeFond)
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
        
}
                                                   //Aurevoir à toi visiteur de mon code source//
