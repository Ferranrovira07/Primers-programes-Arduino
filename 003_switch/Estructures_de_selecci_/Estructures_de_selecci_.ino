/****************************************************************
**
**                    TÍTOL:  Llenguatge de programació arduino
**          
** NOM: Ferran Rovira Francàs                    DATA: 04/02/2018
**
*****************************************************************/
//****************************INCLUDE****************************                                     



//***************************VARIABLES***************************

char lletra[] = "TRWAGMYFPDXBNJZSQVHLCKE";
int dni = 49189249;

char lletra;

//****************************SETUP*******************************
void setup()
{
  printf("Introdueix el teu DNI (sense lletra): ");
scanf("%d",&dni);


printf("Introdueix la lletra del teu DNI: ");
scanf("%c",&lletra);

  }


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
