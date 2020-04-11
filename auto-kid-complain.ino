
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

String message = "                     ";
int ii = 0;
int strLength;
String toShow;

void generateComplaint() {
  
  // Randomly choose whether Mom or Dad are the fortunate recipients of this urgent complaint
  int momordad;
  momordad=random(2);
  if (momordad==1){
    message = "Mom!";
    }
  else {
    message = "Dad!";
    }

  // Select the beautiful child who allegedly perpetrated this awful injustice
  int person;
  person=random(1,5);
  switch (person) {
    case 1:
    message = message + " Mozie just ";
    break;
    case 2:
    message = message + " Miette just ";  
    break;
    case 3:
    message = message + " Jackson just ";  
    break;
    case 4:
    message = message + " Joel just ";  
    break;
    case 5:
    message = message + " Lottie just ";  
    break;
  }
    
  // Determine the action of the offender
  int action;
  action=random(1,21);
  switch (action){
    case 1:
    message = message + "hit me ";
    break;
    case 2:
    message = message + "kicked me ";
    break;
    case 3:
    message = message + "swore at me ";
    break;
    case 4:
    message = message + "spit on me ";
    break;
    case 5:
    message = message + "slapped me ";
    break;
    case 6:
    message = message + "made faces at me ";
    break;
    case 7:
    message = message + "let the dogs out ";
    break;
    case 8:
    message = message + "made a mess ";
    break;
    case 9:
    message = message + "left stuff out ";
    break;
    case 10:
    message = message + "called me stupid ";
    break;
    case 11:
    message = message + "said the F word ";
    break;
    case 12:
    message = message + "got in my way ";
    break;
    case 13:
    message = message + "pinched me ";
    break;
    case 14:
    message = message + "punched me ";
    break;
    case 15:
    message = message + "got dirty ";
    break;
    case 16:
    message = message + "left dog pee ";
    break;
    case 17:
    message = message + "left dog poop ";
    break;
    case 18:
    message = message + "kept getting in my way ";
    break;
    case 19:
    message = message + "took my iPhone ";
    break;
    case 20:
    message = message + "told me to shut up ";
    break;
    case 21:
    message = message + "farted ";
    break;
  }
    
  // Pick the location where this atrocity took place
  int location;
  location=random(1,16);
  switch (location){
    case 1:
    message = message + "in the living room!";
    break;
    case 2:
    message = message + "in the kitchen!";
    break;
    case 3:
    message = message + "in the dining room!";
    break;
    case 4:
    message = message + "in the kitchen!";
    break;
    case 5:
    message = message + "in my bedroom!";
    break;
    case 6:
    message = message + "in their bedroom!";
    break;
    case 7:
    message = message + "in your bedroom!";
    break;
    case 8:
    message = message + "upstairs!";
    break;
    case 9:
    message = message + "in the dog room!";
    break;
    case 10:
    message = message + "on the trampoline!";
    break;
    case 11:
    message = message + "outside!";
    break;
    case 12:
    message = message + "in the street!";
    break;
    case 13:
    message = message + "in the barn!";
    break;
    case 14:
    message = message + "in the basement!";
    break;
    case 15:
    message = message + "in the driveway!";
    break;
    case 16:
    message = message + "in the field!";
    break;
    case 17:
    message = message + "in the bathroom!";
    break;
  }

  //Show the accusation in the serial monitor window for funsies
  Serial.println(message);
  
  // Add empty characters to end of message
  message = message + "                ";

  //Count how long the message is
  strLength = message.length();

}


void setup() {

  Serial.begin(9600);

  //initialize random seed
  randomSeed(analogRead(0));

  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 1);

  // let the bitching begin!
  generateComplaint();
  
}

void loop() {
  lcd.home();

  // Get 16 characters so that we can display on the LCD
  toShow = message.substring(ii,ii+16);

  // print the number of seconds since reset:
  lcd.print(toShow);

  ii = ii + 2;

  // We have to reset ii after there is less text displayed.
  if(ii>(strLength-16)) {
    ii = 0;
    //That was fun, let's hear another complaint!
    generateComplaint();
  }

  delay(500);
}
