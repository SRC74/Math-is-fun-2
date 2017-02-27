/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 21/02/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int test = 32767;


//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  Serial.begin(9600);
  
  Serial.print("Test value is: "); // el valor de la prova és
  Serial.println(test);

  test = test + 1; // prova més 1
 
  Serial.print("Now it is "); // ara és 
  Serial.println(test);
  }

 
//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}

//************************ FUNCIONS **********************************
