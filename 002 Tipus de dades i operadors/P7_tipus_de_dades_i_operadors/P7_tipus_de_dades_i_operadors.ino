/****************************************************************
**
**                    TÍTOL: Math is fun
**      
** NOM: Ferran Rovira Francàs                    DATA: xx/xx/2018
**
*****************************************************************/
//****************************INCLUDE****************************     

//********** Includes *************************************************************

//********** Variables ************************************************************
int test = 32767;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
