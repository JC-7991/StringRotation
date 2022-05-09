#include <bits/stdc++.h>

bool areRotations(std::string str1, std::string str2){

  if(str1.length() != str2.length()){
    return false;
  }
 
  std::string temp = str1 + str1;

  return (temp.find(str2) != std::string::npos);

}

int main(){

  std::string str1 = "AACD", str2 = "ACDA";

  if(areRotations(str1, str2)){
    std::cout << "Strings are rotations of each other.\n";
  }
  
  else{
    std::cout << "Strings are not rotations of each other.\n";
  }
  
  return 0;

}