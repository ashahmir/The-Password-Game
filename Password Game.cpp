//Name : Ghulam Latif   || ID: 24i-0564   ||Assignment #1

#include <iostream>
#include <string>
using namespace std;

int main(){
  
  string password;
  int passLength;
  cout<<"Enter Password: ";
  getline(cin, password);
  passLength = password.length();
  int correctPass = 1, lowerCasePresent = 0, specialCharPresent = 0, upperCasePresent = 0, digitPresent = 0, threeConsecPresent = 0
      ,consecPair = 0;

  if(passLength < 8 || passLength > 16){
    cout<<"Entered Password Length doesn't meet the requirements"<<endl;
    correctPass = 0;
  }
  
  if(password[0] == password[passLength-1]){
    cout<<"Invalid Format, First and last digit of password can not be same"<<endl;
    correctPass = 0;
  }
  //Check for the first digit to be an uppercase letter
  if(password[0] < 'A' || password[0] > 'Z'){
        cout<<"Invalid Format, the first digit of your password is not an uppercase letter"<<endl;
        correctPass = 0;
      }
  //Check For Last Character to be a digit
  if((password[passLength-1] < '0') || (password[passLength-1] > '9')){
          cout<<"Invalid Format, the last digit of your password should be a digit."<<endl;
          correctPass = 0;
  }
  //Checking For Spaces
  if ((passLength > 0 && password[0] == ' ') || (passLength > 1 && password[1] == ' ') ||
    (passLength > 2 && password[2] == ' ') || (passLength > 3 && password[3] == ' ') ||
    (passLength > 4 && password[4] == ' ') || (passLength > 5 && password[5] == ' ') ||
    (passLength > 6 && password[6] == ' ') || (passLength > 7 && password[7] == ' ') ||
    (passLength > 8 && password[8] == ' ') || (passLength > 9 && password[9] == ' ') ||
    (passLength > 10 && password[10] == ' ') || (passLength > 11 && password[11] == ' ') ||
    (passLength > 12 && password[12] == ' ') || (passLength > 13 && password[13] == ' ') ||
    (passLength > 14 && password[14] == ' ') || (passLength > 15 && password[15] == ' ')) {
    
    cout << "Invalid Format, the password can not contain any spaces" << endl;
    correctPass = 0;
  } 
  //Checking for Presence of LowerCase Letter
if((passLength > 0) && (passLength-1 != 0)){
  if((password[0] >= 'a' && password[0] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 1) && (passLength-1 != 1) &&(lowerCasePresent == 0)){
  if((password[1] >= 'a' && password[1] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 2) && (passLength-1 != 2) &&(lowerCasePresent == 0)){
  if((password[2] >= 'a' && password[2] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 3) && (passLength-1 != 3) &&(lowerCasePresent == 0)){
  if((password[3] >= 'a' && password[3] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 4) && (passLength-1 != 4) &&(lowerCasePresent == 0)){
  if((password[4] >= 'a' && password[4] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 5) && (passLength-1 != 5) &&(lowerCasePresent == 0)){
  if((password[5] >= 'a' && password[5] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 6) && (passLength-1 != 6) &&(lowerCasePresent == 0)){
  if((password[6] >= 'a' && password[6] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 7) && (passLength-1 != 7) &&(lowerCasePresent == 0)){
  if((password[7] >= 'a' && password[7] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 8) && (passLength-1 != 8) &&(lowerCasePresent == 0)){
  if((password[8] >= 'a' && password[8] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 9) && (passLength-1 != 9)&&(lowerCasePresent == 0)){
  if((password[9] >= 'a' && password[9] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 10) && (passLength-1 != 10) &&(lowerCasePresent == 0)){
  if((password[10] >= 'a' && password[10] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 11) && (passLength-1 != 11) &&(lowerCasePresent == 0)){
  if((password[11] >= 'a' && password[11] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 12) && (passLength-1 != 12) &&(lowerCasePresent == 0)){
  if((password[12] >= 'a' && password[12] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 13) && (passLength-1 != 13) &&(lowerCasePresent == 0)){
  if((password[13] >= 'a' && password[13] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 14) && (passLength-1 != 14) &&(lowerCasePresent == 0)){
  if((password[14] >= 'a' && password[14] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if((passLength > 15) &&(lowerCasePresent == 0)){
  if((password[15] >= 'a' && password[15] <= 'z')) {
    lowerCasePresent = 1;
  }
  else {
    lowerCasePresent = 0;
  }
}

if(lowerCasePresent == 0){
  cout<<"Invalid Format, Password must contain atleast one lowercase letter"<<endl;
  correctPass = 0;
}

//Checking For presence of The special characters that are allowed
if((passLength > 0) && (passLength-1 != 0) && (specialCharPresent == 0)){
  if((password[0] == '@' || password[0] == '#' || password[0] == '$' || password[0] == '%' || password[0] == '&'
   || password[0] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 1) && (passLength-1 != 1) && (specialCharPresent == 0)){
  if((password[1] == '@' || password[1] == '#' || password[1] == '$' || password[1] == '%' || password[1] == '&'
   || password[1] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 2) && (passLength-1 != 2) && (specialCharPresent == 0)){
  if((password[2] == '@' || password[2] == '#' || password[2] == '$' || password[2] == '%' || password[2] == '&'
   || password[2] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 3) && (passLength-1 != 3) && (specialCharPresent == 0)){
  if((password[3] == '@' || password[3] == '#' || password[3] == '$' || password[3] == '%' || password[3] == '&'
   || password[3] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 4) && (passLength-1 != 4) && (specialCharPresent == 0)){
  if((password[4] == '@' || password[4] == '#' || password[4] == '$' || password[4] == '%' || password[4] == '&'
   || password[4] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 5) && (passLength-1 != 5) && (specialCharPresent == 0)){
  if((password[5] == '@' || password[5] == '#' || password[5] == '$' || password[5] == '%' || password[5] == '&'
   || password[5] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 6) && (passLength-1 != 6) && (specialCharPresent == 0)){
  if((password[6] == '@' || password[6] == '#' || password[6] == '$' || password[6] == '%' || password[6] == '&'
   || password[6] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 7) && (passLength-1 != 7) && (specialCharPresent == 0)){
  if((password[7] == '@' || password[7] == '#' || password[7] == '$' || password[7] == '%' || password[7] == '&'
   || password[7] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 8) && (passLength-1 != 8) && (specialCharPresent == 0)){
  if((password[8] == '@' || password[8] == '#' || password[8] == '$' || password[8] == '%' || password[8] == '&'
   || password[8] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 9) && (passLength-1 != 9) && (specialCharPresent == 0)){
  if((password[9] == '@' || password[9] == '#' || password[9] == '$' || password[9] == '%' || password[9] == '&'
   || password[9] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 10) && (passLength-1 != 10) && (specialCharPresent == 0)){
  if((password[10] == '@' || password[10] == '#' || password[10] == '$' || password[10] == '%' || password[10] == '&'
   || password[10] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 11) && (passLength-1 != 11) && (specialCharPresent == 0)){
  if((password[11] == '@' || password[11] == '#' || password[11] == '$' || password[11] == '%' || password[11] == '&'
   || password[11] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 12) && (passLength-1 != 12) && (specialCharPresent == 0)){
  if((password[12] == '@' || password[12] == '#' || password[12] == '$' || password[12] == '%' || password[12] == '&'
   || password[12] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 13) && (passLength-1 != 13) && (specialCharPresent == 0)){
  if((password[13] == '@' || password[13] == '#' || password[13] == '$' || password[13] == '%' || password[13] == '&'
   || password[13] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 14) && (passLength-1 != 14) && (specialCharPresent == 0)){
  if((password[14] == '@' || password[14] == '#' || password[14] == '$' || password[14] == '%' || password[14] == '&'
   || password[14] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if((passLength > 15) && (specialCharPresent == 0)){
  if((password[15] == '@' || password[15] == '#' || password[15] == '$' || password[15] == '%' || password[15] == '&'
   || password[15] == '*')) {
    specialCharPresent = 1;
  }
  else {
    specialCharPresent = 0;
  }
}

if(specialCharPresent == 0){
  cout<<"Invalid Format, Password must contain atleast one of the following special Characters: @,#,$,%,&,*"<<endl;
  correctPass = 0;
}


//Check For UpperCase Present

if((passLength > 0) && (passLength-1 != 0) && (upperCasePresent == 0)){
  if((password[0] >= 'A' && password[0] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 1) && (passLength-1 != 1) && (upperCasePresent == 0)){
  if((password[1] >= 'A' && password[1] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 2) && (passLength-1 != 2) && (upperCasePresent == 0)){
  if((password[2] >= 'A' && password[2] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 3) && (passLength-1 != 3) && (upperCasePresent == 0)){
  if((password[3] >= 'A' && password[3] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 4) && (passLength-1 != 4) && (upperCasePresent == 0)){
  if((password[4] >= 'A' && password[4] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 5) && (passLength-1 != 5) && (upperCasePresent == 0)){
  if((password[5] >= 'A' && password[5] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 6) && (passLength-1 != 6) && (upperCasePresent == 0)){
  if((password[6] >= 'A' && password[6] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 7) && (passLength-1 != 7) && (upperCasePresent == 0)){
  if((password[7] >= 'A' && password[7] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 8) && (passLength-1 != 8) && (upperCasePresent == 0)){
  if((password[8] >= 'A' && password[8] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 9) && (passLength-1 != 9) && (upperCasePresent == 0)){
  if((password[9] >= 'A' && password[9] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 10) && (passLength-1 != 10) && (upperCasePresent == 0)){
  if((password[10] >= 'A' && password[10] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 11) && (passLength-1 != 11) && (upperCasePresent == 0)){
  if((password[11] >= 'A' && password[11] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 12) && (passLength-1 != 12) && (upperCasePresent == 0)){
  if((password[12] >= 'A' && password[12] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 13) && (passLength-1 != 13) && (upperCasePresent == 0)){
  if((password[13] >= 'A' && password[13] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 14) && (passLength-1 != 14) && (upperCasePresent == 0)){
  if((password[14] >= 'A' && password[14] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if((passLength > 15) && (passLength-1 != 15) && (upperCasePresent == 0)){
  if((password[15] >= 'A' && password[15] <= 'Z')) {
    upperCasePresent = 1;
  }
  else {
    upperCasePresent = 0;
  }
}

if(upperCasePresent == 0){
  cout<<"Invalid Format, Password must contain atleast one uppercase letter"<<endl;
  correctPass = 0;
}

//Check For Digits Present

if((passLength > 0) && (passLength-1 != 0) && (digitPresent == 0)){
  if((password[0] >= '0' && password[0] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 1) && (passLength-1 != 1) && (digitPresent == 0)){
  if((password[1] >= '0' && password[1] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 2) && (passLength-1 != 2) && (digitPresent == 0)){
  if((password[2] >= '0' && password[2] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 3) && (passLength-1 != 3) && (digitPresent == 0)){
  if((password[3] >= '0' && password[3] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 4) && (passLength-1 != 4) && (digitPresent == 0)){
  if((password[4] >= '0' && password[4] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 5) && (passLength-1 != 5) && (digitPresent == 0)){
  if((password[5] >= '0' && password[5] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 6) && (passLength-1 != 6) && (digitPresent == 0)){
  if((password[6] >= '0' && password[6] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 7) && (passLength-1 != 7) && (digitPresent == 0)){
  if((password[7] >= '0' && password[7] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 8) && (passLength-1 != 8) && (digitPresent == 0)){
  if((password[8] >= '0' && password[8] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 9) && (passLength-1 != 9) && (digitPresent == 0)){
  if((password[9] >= '0' && password[9] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 10) && (passLength-1 != 10) && (digitPresent == 0)){
  if((password[10] >= '0' && password[10] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 11) && (passLength-1 != 11) && (digitPresent == 0)){
  if((password[11] >= '0' && password[11] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 12) && (passLength-1 != 12) && (digitPresent == 0)){
  if((password[12] >= '0' && password[12] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 13) && (passLength-1 != 13) && (digitPresent == 0)){
  if((password[13] >= '0' && password[13] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 14) && (passLength-1 != 14) && (digitPresent == 0)){
  if((password[14] >= '0' && password[14] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if((passLength > 15) && (passLength-1 != 15) && (digitPresent == 0)){
  if((password[15] >= '0' && password[15] <= '9')) {
    digitPresent = 1;
  }
  else {
    digitPresent = 0;
  }
}

if(digitPresent == 0){
  cout<<"Invalid Format, the password must contain atleast one digit"<<endl;
  correctPass = 0;
}

//Checking for Three Consecutive characters
if(passLength > 2 && (threeConsecPresent == 0)){
  if(password[0] == password[1] && password[1] == password[2]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 3 && (threeConsecPresent == 0)){
  if(password[1] == password[2] && password[2] == password[3]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 4 && (threeConsecPresent == 0)){
  if(password[2] == password[3] && password[3] == password[4]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 5 && (threeConsecPresent == 0)){
  if(password[3] == password[4] && password[4] == password[5]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 6 && (threeConsecPresent == 0)){
  if(password[4] == password[5] && password[5] == password[6]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 7 && (threeConsecPresent == 0)){
  if(password[5] == password[6] && password[6] == password[7]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 8 && (threeConsecPresent == 0)){
  if(password[6] == password[7] && password[7] == password[8]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 9 && (threeConsecPresent == 0)){
  if(password[7] == password[8] && password[8] == password[9]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 10 && (threeConsecPresent == 0)){
  if(password[8] == password[9] && password[9] == password[10]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 11 && (threeConsecPresent == 0)){
  if(password[9] == password[10] && password[10] == password[11]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 12 && (threeConsecPresent == 0)){
  if(password[10] == password[11] && password[11] == password[12]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 13 && (threeConsecPresent == 0)){
  if(password[11] == password[12] && password[12] == password[13]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 14 && (threeConsecPresent == 0)){
  if(password[12] == password[13] && password[13] == password[14]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(passLength > 15 && (threeConsecPresent == 0)){
  if(password[13] == password[14] && password[14] == password[15]) {
    threeConsecPresent = 1;
  }
  else {
    threeConsecPresent = 0;
  }
}

if(threeConsecPresent == 1){
  cout<<"Invalid Format, The password can not have three consecutive characters."<<endl;
  correctPass = 0;
}


//Checking for 2 consecutive upper and lower case letters
if(passLength > 1 && (consecPair == 0)){
  if((password[0] >= 'a' && password[0] <= 'z') && password[0] == (password[1] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 2 && (consecPair == 0)){
  if((password[1] >= 'a' && password[1] <= 'z') && password[1] == (password[2] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 3 && (consecPair == 0)){
  if((password[2] >= 'a' && password[2] <= 'z') && password[2] == (password[3] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 4 && (consecPair == 0)){
  if((password[3] >= 'a' && password[3] <= 'z') && password[3] == (password[4] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 5 && (consecPair == 0)){
  if((password[4] >= 'a' && password[4] <= 'z') && password[4] == (password[5] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 6 && (consecPair == 0)){
  if((password[5] >= 'a' && password[5] <= 'z') && password[5] == (password[6] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 7 && (consecPair == 0)){
  if((password[6] >= 'a' && password[6] <= 'z') && password[6] == (password[7] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 8 && (consecPair == 0)){
  if((password[7] >= 'a' && password[7] <= 'z') && password[7] == (password[8] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 9 && (consecPair == 0)){
  if((password[8] >= 'a' && password[8] <= 'z') && password[8] == (password[9] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 10 && (consecPair == 0)){
  if((password[9] >= 'a' && password[9] <= 'z') && password[9] == (password[10] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 11 && (consecPair == 0)){
  if((password[10] >= 'a' && password[10] <= 'z') && password[10] == (password[11] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 12 && (consecPair == 0)){
  if((password[11] >= 'a' && password[11] <= 'z') && password[11] == (password[12] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 13 && (consecPair == 0)){
  if((password[12] >= 'a' && password[12] <= 'z') && password[12] == (password[13] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 14 && (consecPair == 0)){
  if((password[13] >= 'a' && password[13] <= 'z') && password[13] == (password[14] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(passLength > 15 && (consecPair == 0)){
  if((password[14] >= 'a' && password[14] <= 'z') && password[14] == (password[15] + 31)) {
    consecPair = 1;
  } else {
    consecPair = 0;
  }
}

if(consecPair == 0){
  cout<<"Invalid Format, The must include atleast one pair of consecutive lowercase and uppercase letters, e.g: aB"<<endl;
  correctPass = 0;
}

if(correctPass == 1){
  cout<<"The entered Password Meets All the requirements."<<endl;
}
  return 0;
}
