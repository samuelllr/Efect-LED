
byte portaE = 1;
byte portaD = 8;

void setup() {

  pinMode( 2 , OUTPUT ); pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT ); pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT ); pinMode( 7 , OUTPUT ); 

}

void loop() {

  portaE++;
  portaD--;
 
  if( (portaE == 8)&&(portaD == 1) ){
    portaE = 1;
    portaD = 8;
  }

  digitalWrite( portaE , HIGH );
  digitalWrite( portaD , HIGH );

  delay(50);

  digitalWrite( portaE , LOW );
  digitalWrite( portaD , LOW );

  delay(50);

}
