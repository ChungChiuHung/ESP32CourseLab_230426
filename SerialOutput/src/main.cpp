#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Define a char array with the message to send
  char message[] = "Tempture, 25,Moistrue, 50, DeviceStatus, Normal";

  /*
  // get the length of the original message
  int originalMessageLength = strlen(message);

  int newMessageLength = originalMessageLength + 1;
  char newMessage[newMessageLength];
  
  // copy the original message to the new array
  strcpy(newMessage, message);

  // Add a newline charcter at the end of the new message
  newMessage[newMessageLength-1] = '\n';

  // Convert the char array to a String
  String strMessage = String(message);

  // Get the byte array from the String
  byte* byteMessage = (byte*) strMessage.c_str();
  // c_str() is a memeber function of the 'String' class that returns a pointer to a null-terminated character array
  // (byte*) is a type-casting operation
  // byte* pointer to a byte array
  // byte* byteMessage: delcare a pointer variable of type 'byte*',
  // It will be used to store the pointer to the byte array representing the message.

  // Get the length of the byte array
  int byteMessageLength = strMessage.length();

  // Send the byte array over serial communication
  Serial.write(newMessage, newMessageLength);

  */

  int messageLength = strlen(message);

  for(int i =0; i< messageLength; i++)
  {
    Serial.write(message[i]);
    delay(100);
  }
  
  Serial.write('\n');

  // Wait for a short amount of time before sending the next message
  delay(1000);

}