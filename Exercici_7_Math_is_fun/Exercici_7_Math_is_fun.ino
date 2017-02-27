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
long drive_kb;
long real_drive_mb;
long real_drive_kb;

//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  Serial.begin(9600);
  
  Serial.print("Your HD is "); // tu HD és
  Serial.print(drive_gb);
  Serial.println(" GB large."); // té de GB
  
  drive_mb = drive_gb; // drive mb és igual a drive gb
  drive_mb = drive_mb * 1024; // drive mb és igual a drive mb per 1024

  Serial.print("In theory, it can store "); // escriu en teoria, pot emmagatzemar
  Serial.print(drive_mb); // escriu drive mb
  Serial.print(" Megabytes, "); // escriu Megabytes

  drive_kb = drive_mb; // drive kb és igual a drive mb
  drive_kb = drive_kb * 1024; // drive kb és igual a drive kb per 1024

  Serial.print(drive_kb); // escriu drive kb
  Serial.println(" Kilobytes."); // escriu Kilobytes
  
  real_drive_mb = drive_gb; // real drive mb és igual a  drive gb
  real_drive_mb = real_drive_mb * 1000; // real drive mb és igual a real drive mb per 1000

  Serial.print("But it really only stores "); // escriu, però en realitat només emmagatzema
  Serial.print(real_drive_mb); // escriu real drive mb
  Serial.print(" Megabytes, "); // escriu Megabytes

  real_drive_kb = real_drive_mb; // real drive kb és igual a real drive mb
  real_drive_kb = real_drive_kb * 1000; // real drive kb és igual a real drive kb per 1000

  Serial.print(real_drive_kb); // escriu real drve kb
  Serial.println(" Kilobytes."); // escriu Kilobytes

  drive_kb = drive_kb - real_drive_kb;

  Serial.print("You are missing "); // escriu tu estàs buscant
  Serial.print(drive_kb); // buscant unitat kb
  Serial.println(" Kilobytes!"); // escriu Kilobytes
}

 
//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}

//************************ FUNCIONS **********************************
