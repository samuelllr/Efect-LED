
byte portaE = 1;
byte portaD = 8;

byte mod = 0;

void setup() {

  pinMode( 2 , OUTPUT ); pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT ); pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT ); pinMode( 7 , OUTPUT ); 

}

void loop() {

  if ( ( portaE <= 7 )&&( mod == 0 ) ){
    portaE++;
    digitalWrite( portaE , 1 );
    delay(100);
  }else{ mod = 1; portaE = 1; }

  if( ( portaE <= 7 )&&( mod == 1 ) ){
    portaE++;
    digitalWrite( portaE , 0 );
    delay(50);
  }

  

}
