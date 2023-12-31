/******************************************************************************

                              Resistor Value Decoder
                 Decode resistivity value by entering colour bands
                                  Coded by wanZ

*******************************************************************************/

#include <iostream>


using namespace std;

int main()
{
    string colors[10] = {"Black", "Brown", "Red", "Orange", "Yellow", "Green", "Blue", "Violet", "Gray", "White"};
    string tolerance_color[8] = {"Brown", "Red", "Green", "Blue", "Violet", "Gray", "Gold", "Silver"};
    string tolerance_value[8] = {"1", "2", "0.5", "0.25", "0.1", "0.05", "5","10"};
    string band[3] = {};
    int value[3] = {};
    string tolerance;
    cout<<"Welcome to Resistor Value Decoder\nPlease pick color code based on number given" << endl;
    cout << "Resistor Color Band: ";
    for (int color_id = 0; color_id < 10; color_id++)    {
        cout <<" [ " << colors[color_id] << " ] ";
    }
    cout << "\nResistor Color Tolerance: ";
    for (int tolerance_id = 0; tolerance_id < 8; tolerance_id++)    {
        cout <<" [ " << tolerance_color[tolerance_id] << " ] ";
    }
    
    cout << "\n\nFirst band: ";
    cin >> band[0];
    cout << "Second band: ";
    cin >> band[1];
    cout << "Third band: ";
    cin >> band[2];
    cout << "Tolerance (None - For no colour): ";
    cin >> tolerance;
    
    
    for (int band_id = 0; band_id < 3; band_id++)   {
        for (int color_id = 0; color_id<10;color_id++)  {
            if (band[band_id] == colors[color_id])  {
                value[band_id] = color_id;
            }
        }
        
    }
   
    cout << "Resistivity Value: ";
    for (int values = 0; values<2;values++) {
        cout << value[values];
    }
    for (int multiply = 0; multiply<value[2];multiply++)    {
        cout << "0";
    }
    
    if (tolerance == "None")    {
            cout << " Ω  ±20%";
        }   else{
     for (int tolerance_id = 0; tolerance_id < 8; tolerance_id++)    {
        if (tolerance == tolerance_color[tolerance_id])   {
            cout << " Ω  ±" << tolerance_value[tolerance_id] << "%";
        }
    }}
    return 0;
}

