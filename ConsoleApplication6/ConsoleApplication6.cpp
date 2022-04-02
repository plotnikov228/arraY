#include <map>
#include <iostream>

using namespace std;

struct Array {
    string nameGroup;
    string stamp;
    int readyDate;
    string stateOfReadiness;
    
};

void Choose(map<string, Array> arrays, string arr, string nameGr)
    {       
        if (arrays[arr].nameGroup == nameGr)
        {
            cout << arrays[arr].nameGroup << " " << arrays[arr].stamp << " " << arrays[arr].readyDate << " " << arrays[arr].stateOfReadiness << endl;
        }
    }


int main()
{
   
    map<string, Array> arrays;

    arrays["array1"].nameGroup = "TV";
    arrays["array1"].stamp = "Samsung";
    arrays["array1"].readyDate = 12;
    arrays["array1"].stateOfReadiness = "false";
    //
    arrays["array2"].nameGroup = "Radio";
    arrays["array2"].stamp = "Alto";
    arrays["array2"].readyDate = 7;
    arrays["array2"].stateOfReadiness = "true";
    //
    arrays["array3"].nameGroup = "TV";
    arrays["array3"].stamp = "Asus";
    arrays["array3"].readyDate = 19;
    arrays["array3"].stateOfReadiness = "false";
    //
    arrays["array4"].nameGroup = "Radio";
    arrays["array4"].stamp = "Apple";
    arrays["array4"].readyDate = 20;
    arrays["array4"].stateOfReadiness = "false";

    
    cout<< "enter (1 = TV, 2 = Radio) " << endl;

    string a;
    cin >> a;

    if (a == "1") {

        Choose(arrays, "array1", "TV");
        Choose(arrays, "array2", "TV");
        Choose(arrays, "array3", "TV");
        Choose(arrays, "array4", "TV");

    }

    if (a == "2") {
        Choose(arrays, "array1", "Radio");
        Choose(arrays, "array2", "Radio");
        Choose(arrays, "array3", "Radio");
        Choose(arrays, "array4", "Radio");
    }




}

