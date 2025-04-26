#include <iostream>
#include <iomanip> // Per std::fixed e precisione decimali

using namespace std;

// 1. Funzione per validare input numerico positivo
double getPositiveNumber(string message) {
    double number;
    do {
        cout << message;
        cin >> number;
    } while(number <= 0);
    return number;
}

// 2. Funzione per formattare valuta
void formatCurrency(double amount) {
    cout << "Euro " << fixed << setprecision(2) << amount;
}

// 3. Funzione per calcolare totale con IVA
double calculateTotal(double price, int quantity, double taxRate = 0.10) {
    return (price * quantity) * (1 + taxRate);
}

// 4. Funzione per stampare il menu
void displayMenu() {
    cout << "\n======== MENU ========\n"
         << "1. Caffe' normale     Euro 1.00\n"
         << "2. Cappuccino        Euro 2.50\n"
         << "3. Cornetto          Euro 1.80\n"
         << "4. Acqua minerale    Euro 1.20\n"
         << "5. USCITA\n"
         << "======================\n";
}

int main() {
    double total = 0.0;
    int choice;

    do {
        displayMenu();
        cout << "Scelta: ";
        cin >> choice;

        if(choice >= 1 && choice <= 4) {
            // Prezzi degli articoli
            double prices[] = {1.00, 2.50, 1.80, 1.20};

            // Richiedi quantità usando la funzione di validazione
            int qty = getPositiveNumber("Quantita': ");

            // Calcola totale parziale con IVA al 10%
            double itemTotal = calculateTotal(prices[choice-1], qty);

            // Aggiorna totale generale
            total += itemTotal;

            // Stampa formattata
            cout << "\nTotale parziale: ";
            formatCurrency(itemTotal);
            cout << endl;
        }
        else if(choice >= 6) {
            cout << "Scelta non presente nel menu. Reinserire la scelta:\n";
        }
    } while(choice != 5);

    // Stampa totale finale
    cout << "\n=== TOTALE DA PAGARE ===" << endl;
    formatCurrency(total);
    cout << "\nGrazie e arrivederci!" << endl;

    return 0;
}
