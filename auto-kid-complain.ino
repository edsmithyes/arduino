
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

String message = "                     ";
int ii = 0;
int strLength;
String toShow;

void setup() {

  //initialize random seed
  randomSeed(analogRead(0));

  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 1);

  // Mom or Dad
  int momordad;
  momordad=random(2);
  if (momordad==1){
    message = "Mom!";
    }
  else {
    message = "Dad!";
    }

  // Miette or Mozie
  int morm;
  morm=random(2);
  if (morm==1){
    message = message + " Mozie just ";
    }
  else {
    message = message + " Miette just ";
    }

  // Action
  int action;
  action=random(1,17);
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
    message = message + "left her stuff out ";
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
    message = message + "didn't clean up her dog's pee ";
    break;
    case 17:
    message = message + "didn't clean up her dog's poop ";
    break;
  }
  
  
  // Location
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
    message = message + "in her bedroom!";
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
  }
  
  // Add empty characters to end of message
  message = message + "                ";
  
  strLength = message.length();
    
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
  }

  delay(500);
}
