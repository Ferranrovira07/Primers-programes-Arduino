/****************************************************************
**
**                    TÍTOL: Hello wolrd
**          
** NOM: Ferran Rovira Francàs                    DATA: xx/xx/2018
**
*****************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?");
  Serial.println("  1. Comprovar numero de tarjeta de credit");
  delay(600);
  Serial.println("  2. Comprovar numero de compte bancari");
  delay(600);
  Serial.print("  3. Buscar un digit perdut de tarjeta de credit");
  delay(600);
}

//********** Loop *****************************************************************

//********** Funcions *************************************************************
