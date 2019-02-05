/****************************************************************
**                    TÍTOL: Control Structures   
**      
** NOM: Ferran Rovira Francàs                    DATA: xx/xx/2018
**
*****************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
