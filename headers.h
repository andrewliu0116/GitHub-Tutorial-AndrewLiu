// file: headers.h for newanagrams

// Define class AString here!
// See PDF for details
class AString {
    public:
    AString();
    AString(string str);
    void getAString();
    string getStringValue();
    void cleanUp();
    void countLetters(int arr[]);
    private:
    string StringValue;

};

// DO NOTE CHANGE THESE AND DO NOT ADD TO THEM!
bool compareCounts(int a[], int b[]);
const int ARRAYSIZE = 26;
