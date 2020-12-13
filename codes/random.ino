
int Random;
int RandomLow;
int RandomLoop;

void setup() {

  Serial.begin(9600);
  pinMode( 2 , OUTPUT ); pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT ); pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT ); pinMode( 7 , OUTPUT ); 

}

void loop() {

 Random = random(-1,8);
 RandomLow = random( 20 , 100 );
 RandomLoop = random( 50 , 100 );
 Serial.println( Random );
 digitalWrite( Random , HIGH );
 delay(RandomLow);
 digitalWrite( Random , LOW );
 delay(RandomLoop);

}
