/*********************************************************************
 **                                                                 **       
 **                          TÏTOL: Math is fun                     ** 
 **                                                                 **
 **                                                                 ** 
 **  Nom: Salva Ramírez                          Data: 21/02/2017   **
 ********************************************************************/
//************************ INCLUDE ***********************************


//*********************** VARIABLES **********************************
int a = 3;
int b = 2;
int d;

//************************* SETUP ************************************

void setup() {      // configura el final de sortida
  
  Serial.begin(9600);
  
  Serial.println("Here is division: "); // escriu, aqui dividim

  Serial.print("a = "); // a és igual 
  Serial.println(a); // escriu a
  Serial.print("b = "); // b és igual
  Serial.println(b); // escriu b

  d = a / b; // d és igual a entre b
 
  Serial.print("a / b = "); // la divisió de a entre b és igual
  Serial.println(d); // escriu d

}

 
//************************** LOOP ************************************

void loop() {                    // inicia el bucle del programa


}

//************************ FUNCIONS **********************************
