/****************************************************************
**            TÍTOL: Estructura de control de repetició  
**      
** NOM: Ferran Rovira Francàs                    DATA: xx/xx/2019
**
*****************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

int comptar = 11

//********** Setup ****************************************************************
void setup()
{
   Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i<= comptar; i++) 
   
 {
  if (i<comptar)
  {
    Serial.print(i);
    Serial.print("-");
  }
  else
    Serial.print(i);
  } 
  
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
