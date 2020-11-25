/*
	Acquisire una sequenza di numeri finchè l’utente digita ‘N’ alla domanda ‘altri numeri da inserire?’ e al termine visualizzare
		- un messaggio che dica se nella sequenza sono presenti negativi
		- la numerosità della sequenza
		- un messaggio che dica se la sequenza ha una numerosità superiore a 10
*/

#include <iostream>
using namespace std;

/*
	<tipo di ritorno> <nome della funzione> ( <parametri <tipo> <nome>>) {
		<corpo della funzione>
		return <valore>
	}
	
	<nome della funzione(<parametri>)
*/

bool negativo(int x) {
	if (x < 0)
		return true;
	else
		return false;
		
	// Alternativa:
	// return (x < 0 ? true : false);
}

bool rispostaAccettata(char risp) {
	// accettate = s, S, n, N, y, Y
	/*
		Alternative:
			1) mettere risp in maiuscolo e fare la metà dei controlli
			2) fare una cosa del tipo: return ['S', 'Y', 'N'].includes(risp)
	*/
	if (risp == 'S' || risp == 's' || risp == 'n' || risp == 'N' || risp == 'Y' || risp == 'y')
		return true;
	else
		return false;
}




int main()
{
	int x, 					// valore della sequenza
		count = 0;			// contatore dei valori inseriti
	bool negativi = false;	// boolean che ci dice se sono presenti valori negativi nella sequenza
	char risp; 				// risposta alla domanda	
	
	do {
		cout << "Inserisci un valore: ";
		cin >> x;
		
		count++;
		
		if (negativo(x) == true) 
			negativi = true;
		// negativi = negativo(x) || negativi;
		
		do {
			cout << "Vuoi continuare? ";
			cin >> risp;
		} while (rispostaAccettata(risp) == false);	
		
	} while (risp == 'S' || risp == 's');
	
	cout << "Sono stati inseriti " << count << " valori nella sequenza" << endl;
	if (count > 10) 
		cout << "Sono stati inseriti più di 10 valori nella sequenza" << endl;	
		
	if (negativi == true)
		cout << "Nella sequenza sono stati inseriti valori negativi" << endl;
	else 
		cout << "Nella sequenza non sono stati inseriti valori negativi" << endl;
		
	// Alternativa:
	// int variabile = <condizione> ? <valore se verificato> : <valore se non verificato>
	// cout << "Nella sequenza " << (negativi ? "" : "non ") << "sono presenti valori negativi";
	
	return 0;
}
