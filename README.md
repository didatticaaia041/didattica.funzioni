# didattica.funzioni


# Ecco un codice che mostra operazioni ripetitive semplificate con funzioni, ispirato a scenari reali (gestione di un menu caffetteria, calcoli finanziari e formattazione dati):

Validazione input ripetitiva:

Senza funzione: Dovresti riscrivere il ciclo do-while per ogni input

Con funzione: Richiami semplicemente getPositiveNumber("messaggio")

Formattazione valuta consistente:

Senza funzione: Dovresti riscrivere fixed << setprecision(2) ogni volta

Con funzione: Chiami formatCurrency() mantenendo lo stile uniforme

Calcoli complessi ripetuti:

Senza funzione: Dovresti ripetere la formula (prezzo * quantità) * 1.10

Con funzione: Incapsuli la logica in calculateTotal()

Gestione menu modulare:

Senza funzione: Il codice del menu sarebbe sparso nel main()

Con funzione: Modifichi il menu in un unico punto





**Cosa dimostra questo codice:**

1. **Validazione input ripetitiva**:
   - Senza funzione: Dovresti riscrivere il ciclo do-while per ogni input
   - Con funzione: Richiami semplicemente `getPositiveNumber("messaggio")`

2. **Formattazione valuta consistente**:
   - Senza funzione: Dovresti riscrivere `fixed << setprecision(2)` ogni volta
   - Con funzione: Chiami `formatCurrency()` mantenendo lo stile uniforme

3. **Calcoli complessi ripetuti**:
   - Senza funzione: Dovresti ripetere la formula (prezzo * quantità) * 1.10
   - Con funzione: Incapsuli la logica in `calculateTotal()`

4. **Gestione menu modulare**:
   - Senza funzione: Il codice del menu sarebbe sparso nel main()
   - Con funzione: Modifichi il menu in un unico punto

**Esempio di output:**
```
======== MENU ========
1. Caffè normale     € 1.00
2. Cappuccino        € 2.50
3. Cornetto          € 1.80
4. Acqua minerale    € 1.20
5. USCITA
======================
Scelta: 2
Quantità: 3

Totale parziale: € 8.25

... (altre selezioni)

=== TOTALE DA PAGARE ===
€ 14.85
Grazie e arrivederci!
```

**Punti didattici da enfatizzare:**
- Riduzione duplicazione del codice
- Maggiore leggibilità e manutenibilità
- Isolamento delle responsabilità
- Facile modifica di singoli componenti
- Riuso del codice in progetti futuri

Puoi espandere questo esempio aggiungendo:
- Funzioni per sconti speciali
- Gestione di un inventario
- Lettura/scrittura su file
- Calcolo del resto


### **Confronto Didattico**
Gli studenti possono notare confrontando le due versioni:

1. **Validazione Input**:
   - **Senza funzioni**: Il ciclo `do-while` è ripetuto per ogni input da validare
   ```cpp
   do {
       cout << "Quantità: ";
       cin >> qty;
   } while(qty <= 0);
   ```
   - **Con funzioni**: Basta una chiamata a `getPositiveNumber("Quantità: ")`

2. **Formattazione Valuta**:
   - **Senza funzioni**: La formattazione è riscritta 2 volte (parziale + finale)
   ```cpp
   cout << "€ " << fixed << setprecision(2) << ... ;
   ```
   - **Con funzioni**: Una sola funzione `formatCurrency()` garantisce coerenza

3. **Logica del Calcolo**:
   - **Senza funzioni**: La formula `(price * qty) * 1.10` è hard-coded
   - **Con funzioni**: La funzione `calculateTotal()` permette di modificare l'IVA in un solo punto

4. **Gestione del Menu**:
   - **Senza funzioni**: Il menu è scritto direttamente nel ciclo (difficile da aggiornare)
   - **Con funzioni**: Modifiche al menu avvengono in `displayMenu()`

### **Esercizio per gli Studenti**
Si chiede agli studenti:
1. Aggiungere un nuovo articolo al menu nelle due versioni e confrontare la difficoltà
2. Modificare l'IVA dal 10% al 22% nelle due versioni
3. Aggiungere un messaggio di errore per input non numerici (evidenziando quanto sia più complesso senza funzioni)

Questo approccio mostra concretamente i vantaggi della modularità e della riduzione della ridondanza.