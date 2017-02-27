/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 21/02/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
long drive_gb = 100;
long drive_mb = 0;


//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  Serial.begin(9600);
  
  Serial.print("Your HD is "); // tu HD és de
  Serial.print(drive_gb);
  Serial.println(" GB large."); // té la quantitat de GB
  
  drive_mb = 1024 * drive_gb;

  Serial.print("It can store "); // pot emmagatzemar
  Serial.print(drive_mb);
  Serial.println(" Megabytes!"); 
  }



 
//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
