#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double total = 0.0;
    int choice;

    do {
        // Codice del menu (ripetuto manualmente)
        cout << "\n======== MENU ========\n"
             << "1. Caffe' normale    Euro 1.00\n"
             << "2. Cappuccino        Euro 2.50\n"
             << "3. Cornetto          Euro 1.80\n"
             << "4. Acqua minerale    Euro 1.20\n"
             << "5. USCITA\n"
             << "======================\n";

        cout << "Scelta: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            double prices[] = {1.00, 2.50, 1.80, 1.20};
            double price = prices[choice-1];
            int qty;

            // Validazione input senza funzione (ripetuta manualmente)
            do {
                cout << "Quantita': ";
                cin >> qty;
            } while(qty <= 0);

            // Calcolo totale senza funzione (formula ripetuta)
            double itemTotal = (price * qty) * 1.10; // IVA 10%
            total += itemTotal;

            // Stampa formattata senza funzione (codice ripetuto)
            cout << "\nTotale parziale: Euro "
                 << fixed << setprecision(2) << itemTotal << endl;
        }
        else {
            cout << "Scelta sbagliata. Reinserisci scelta: ";
        }
    } while(choice != 5);

    // Stampa finale senza funzione
    cout << "\n=== TOTALE DA PAGARE ===\n"
         << "Euro " << fixed << setprecision(2) << total
         << "\nGrazie e arrivederci!" << endl;

    return 0;
}
