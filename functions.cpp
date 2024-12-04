// file: functions.cpp for newanagrams

// Define all member functions for class AString
//    as well as all other functions that need definition
AString :: AString(){//default constuctor
    StringValue = "";
}
AString :: AString(string str){//constructor that gives StringValue what is in str
    StringValue = str;
}
void AString :: getAString(){//Sets StringValue to what user inputs
    string str;
    cout<<"Enter string value: ";
    getline(cin,str);
    StringValue = str;
}
string AString :: getStringValue(){//returns StringValue
    return StringValue;
}
void AString :: cleanUp(){//Makes all letters lowercase in StringValue and removes any character that is not a letter
    int size = StringValue.size();
    for(int i = 0 ; i < size ; i++){
    if(((StringValue[i] > 64) && (StringValue[i] < 91)) || ((StringValue[i] > 96) && (StringValue[i] < 123))){
        StringValue[i] = tolower(StringValue[i]);
    }//if
    else{
    StringValue = StringValue.erase(i,1);
    i--;
    size--;
    }//else if
  }//for
}
void AString :: countLetters(int arr[]){//counts how many instances that each letter appears in StringValue
    int size = StringValue.size();
    for(int i = 0 ; i < size ; i++){
    arr[StringValue[i]-97]++;
    }
}
//Precondtion: takes in two int arrays
//Postcondition: compares if the two arrys are identical, if they are return true, else return false
bool compareCounts(int a[],int b[]){
   for(int i = 0 ; i < ARRAYSIZE ; i++){
    if(a[i] != b[i]){
    return false;
    }//if
   }//for
   return true;
}
