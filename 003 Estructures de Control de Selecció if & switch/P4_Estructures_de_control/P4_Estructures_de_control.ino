/****************************************************************
**                    TÍTOL: Control Structures   
**      
** NOM: Ferran Rovira Francàs                    DATA: xx/xx/2018
**
*****************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float  QEDE = 45 ;    //QEDE = abreviatura de qualificació energetica d'un edifici a partir dels KgCO2/m2


//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
 
  Serial.begin(9600); 
  if (QEDE < 3.5)
  {
    Serial.print("A");
  }
  else if (QEDE >= 3.5 && QEDE < 6.5 )
  {
    Serial.print("B");
  }
  else if (QEDE >= 6.5 && QEDE < 11.1)
  {
    Serial.print("C");
  }
  else if (QEDE >= 11.1 && QEDE < 17.7)
  {
    Serial.print("D");
  }
  else if (QEDE >= 17.7 && QEDE < 38.2)
  {
    Serial.print ("E");
  }
  else if (QEDE >= 38.2 && QEDE < 43.2)
  {
    Serial.print ("F");
  }
  else
  {
    Serial.print ("G");
  }
}

//********** Loop *****************************************************************
void loop()  
{
}


//********** Funcions *************************************************************
