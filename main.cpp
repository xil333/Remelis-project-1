#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void zvaigzdutes(int rem, char sveik[])  {
    for(int i = 0; i < strlen(sveik) + rem*2 + 3; i++)  {
            printf("%c", '*'); //*************
    }
    printf("\n");
}

void zvaigzd_tarpas(int rem, char sveik[])   {
    for(int i = 0; i < rem; i++)  {
            printf ("%c %*c \n", '*',strlen(sveik) + rem*2 + 1 ,'*');
    }
}



int main()
{
   char vardas [] ="Juozas";
   int rem = 8;
    //cout << 'Iveskite savo varda: ' << endl;
   // cin >> vardas;
   char sveikas [] = "Sveikas, ";
   strcat(sveikas, vardas);

   zvaigzdutes(rem, sveikas);
   zvaigzd_tarpas(rem, sveikas);
   printf ("%*c %*s %c \n", -rem, '*', -strlen(sveikas) - rem, sveikas, '*');
   zvaigzd_tarpas(rem, sveikas);
   zvaigzdutes(rem, sveikas);

}
