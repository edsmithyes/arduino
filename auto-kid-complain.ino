
// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

String message = "                     ";
int ii = 0;
int strLength;
String toShow;

void generateComplaint() {
   
  // Randomly decide whether Mom or Dad will be the unfortunate recipients of this urgent and necessary complaint
  int momordad;
  momordad=random(2);
  if (momordad==1){
    message = "Mom,";
    }
  else {
    message = "Dad,";
    }

  // Name the child who allegedly perpetrated this awful injustice
  int person; 
  String gender = "   ";
  person=random(1,6);
  switch (person) {
    case 1:
    message = message + " Mozie ";
    gender = "her";
    break;
    case 2:
    message = message + " Miette ";  
    gender = "her";
    break;
    case 3:
    message = message + " Jackson ";  
    gender = "his";
    break;
    case 4:
    message = message + " Joel ";  
    gender = "his";
    break;
    case 5:
    message = message + " Lottie ";  
    gender = "her";
    break;
  }

  // Identify the victim's afflicted body part (if applicable)
  int randbodypart;
  String bodypart = "";
  randbodypart=random(1,12);
  switch (randbodypart){
    case 1:
    bodypart = "head ";
    break;
    case 2:
    bodypart = "leg ";
    break;
    case 3:
    bodypart = "toe ";
    break;
    case 4:
    bodypart = "ear ";
    break;
    case 5: 
    bodypart = "back ";
    break;
    case 6:
    bodypart = "nose ";
    break;
    case 7:
    bodypart = "finger ";
    break;
    case 8:
    bodypart = "arm ";
    break;
    case 9:
    bodypart = "ankle ";
    break;
    case 10:
    bodypart = "knuckle ";
    break;
    case 11:
    bodypart = "tongue ";
    break;
    case 12:
    bodypart = "eye ";
    break;
    case 13:
    bodypart = "hand ";
    break;
    case 14:
    bodypart = "elbow ";
    break;
  }
  
  // Document the offender's vicious actions
  int action;
  action=random(1,42);
  switch (action){
    case 1:
    message = message + "hit my " + bodypart;
    break;
    case 2:
    message = message + "kicked my " + bodypart;
    break;
    case 3:
    message = message + "swore at me ";
    break;
    case 4:
    message = message + "spit on my " + bodypart;
    break;
    case 5:
    message = message + "slapped my " + bodypart;
    break;
    case 6:
    message = message + "made faces at me ";
    break;
    case 7:
    message = message + "let the dogs ";
    break;
    case 8:
    message = message + "made a mess ";
    break;
    case 9:
    message = message + "left "+gender+" stuff out ";
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
    message = message + "pinched my " + bodypart;
    break;
    case 14:
    message = message + "punched my " + bodypart;
    break;
    case 15:
    message = message + "left a mess ";
    break;
    case 16:
    message = message + "let the dog pee ";
    break;
    case 17:
    message = message + "let the dog poop ";
    break;
    case 18:
    message = message + "kept getting in my way ";
    break;
    case 19:
    message = message + "won't let me use my phone ";
    break;
    case 20:
    message = message + "told me to shut up ";
    break;
    case 21:
    message = message + "farted ";
    break;
    case 22:
    message = message + "called me a stupid head ";
    break;
    case 23:
    message = message + "said a bad word ";
    break;
    case 24:
    message = message + "won't clean the litterbox because it's ";
    break;
    case 25:
    message = message + "ripped up my picture ";
    break;
    case 26:
    message = message + "threw my dog ";
    break;
    case 27:
    message = message + "bit my " + bodypart;
    break;
    case 28:
    message = message + "spilled water ";
    break;
    case 29:
    message = message + "is using your phone ";
    break;
    case 30:
    message = message + "just barfed ";
    break;
    case 31:
    message = message + "coughed on my " + bodypart;
    break;
    case 32:
    message = message + "sneezed on my " + bodypart;
    break;
    case 33:
    message = message + "watched the movie without me ";
    break;
    case 34:
    message = message + "was dancing ";
    break;
    case 35:
    message = message + "ate all the candy ";
    break;
    case 36:
    message = message + "threw away all the stuff ";
    break;
    case 37:
    message = message + "won't let me play ";
    break;
    case 38:
    message = message + "hid the remote ";
    break;
    case 39:
    message = message + "put all the trash ";
    break;
    case 40:
    message = message + "was eating ";
    break;
    case 41:
    message = message + "won't let me play Nintendo Switch ";
    break;
    case 42:
    message = message + "fell asleep ";
    break;
  }
    
  // Determine the location where this atrocity took place
  int location;
  location=random(1,22);
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
    message = message + "in the pantry!";
    break;
    case 5:
    message = message + "in my bedroom!";
    break;
    case 6:
    message = message + "in "+gender+" bedroom!";
    break;
    case 7:
    message = message + "in your bedroom!";
    break;
    case 8:
    message = message + "in the car!";
    break;
    case 9:
    message = message + "in the dog room!";
    break;
    case 10:
    message = message + "on the trampoline!";
    break;
    case 11:
    message = message + "in the yard!";
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
    case 18:
    message = message + "on the roof!";
    break;
    case 19:
    message = message + "in the tree!";
    break;
    case 20:
    message = message + "in the bathtub!";
    break;
    case 21:
    message = message + "in a hole!";
    break;
    case 22:
    message = message + "in the neighbor's yard!";
    break;
  }

  //Show the complete accusation in the serial monitor window for funsies
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

  delay(100);
}
