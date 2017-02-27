/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 21/02/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int drive_gb = 100;
long drive_mb;


//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  Serial.begin(9600);
  
  Serial.print("Your HD is "); // tu HD és de
  Serial.print(drive_gb); // escriu drive gb
  Serial.println(" GB large."); // té la quantitat de GB
  
  drive_mb = drive_gb; // drive mb és igual a drive gb
  drive_mb = drive_mb * 1024; // drive mb és igual a drive mb per 1024

  Serial.print("It can store "); // pot emmagatzemar
  Serial.print(drive_mb); // escriu drive mb
  Serial.println(" Megabytes!"); 
  }



 
//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}


//************************ FUNCIONS **********************************
