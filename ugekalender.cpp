#include <iostream>
using namespace std;

int main() {

    string dag;
    int dagNr;
    bool x = false;

    while (x == false) {

        cout << "Hvilken ugedag vil du tjekke? ";
        cin >> dag;

        dagNr = (dag=="mandag") ? 1 : 
        dagNr = (dag=="tirdag") ? 2 :
        dagNr = (dag=="onsdag") ? 3 :
        dagNr = (dag=="torsdag") ? 4 :
        dagNr = (dag=="fredag") ? 5 :
        dagNr = (dag=="loerdag") ? 6 :
        dagNr = (dag=="soendag") ? 7 : 0;

        switch (dagNr) {
            case 1:
                cout << "Det er mandag";
                x = true;
                break;

            case 2:
                cout << "Det er tirsdag";
                x = true;
                break;

            case 3:
                cout << "Det er onsdag";
                x = true;
                break;

            case 4:
                cout << "Det er torsdag";
                x = true;
                break;

            case 5:
                cout << "Det er fredag";
                x = true;
                break;

            case 6:
                cout << "Det er lørdag";
                x = true;
                break;

            case 7:
                cout << "Det er søndag";
                x = true;
                break;

            default:
                cout << "prøv igen \n";
                break;
        }

    }

    return 0;
}