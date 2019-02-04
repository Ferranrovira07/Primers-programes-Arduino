/****************************************************************
**
**                    TÍTOL:
**          Posar nom representatiu del projecte
** NOM: Ferran Rovira FRancàs                    DATA: xx/xx/2018
**
*****************************************************************/
//****************************INCLUDE****************************                                     



//***************************VARIABLES***************************
int drive_gb = 100;
long drive_mb;

//****************************SETUP*******************************

void setup() {                     //configurar el final de surtida 
Serial.begin(9600);               //set up Serial library at 9600 bps

Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println(" GB large.");

drive_mb = 1024 * drive_gb;

Serial.print("It can store ");
Serial.print(drive_mb);
Serial.println(" Megabytes!");

}

//****************************LOOP*******************************
void loop() {                      // indica el bucle del programa 
  
}

//*************************FUNCIONS*****************************  
