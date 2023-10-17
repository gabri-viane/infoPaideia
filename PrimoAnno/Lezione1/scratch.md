# Scratch
Fornisce le basi per iniziare a capire la programmazione: [scratch](https://scratch.mit.edu/projects/editor/) (basta cercare "scratch" su internet).
Permette di far muovere, parlare (e altre azioni) uno sprite (il gatto arancione) tramite un codice costruibile trascinando le varie istruzioni dal pannello di destra a quello centrale.

### Istruzioni utilizzabili
Si trovano sulla parte destra della pagina e ne esistono di diverse tipologie:
  1. **Movimento**: vengono usate per far muovrere lo sprite
  2. **Aspetto**: permettono di far "parlare" o cambiare aspetto allo sprite o alla scena (lo sfondo dietro il gatto/sprite)
  3. **Suono**: permettono di riprodurre dei suoni
  4. **Situazioni**: servono per attendere una certa situazione prima di proseguire
  5.  **Controllo**: sono i blocchi che esistono effettivamente anche nella programmazione e permettono di creare una logica
  6.  **Sensori**: sono utilizzati per aspettare certe condizioni (mouse che tocca lo sprite, tasto che viene premuto)
  7.  **Operazioni**: permette di fare delle operazioni con i numeri, i testi (chiamati stringhe in programmazione) e operazioni logiche (Vero e Falso)
  8.  **Variabili**: definiscono una zona in memoria che può essere gestita da noi per memorizzare dei dati

![Parte sinistra](image.png)

###  Come programmare
Si prendono le istruzioni dalla parte sinistra della pagina e si trascinano al centro:

![Parte Centrale](image-1.png)

Partiamo con il blocco preso da "Situazioni" : 
![p1](image-2.png)
questo blocco aspetta che si clicchi sulla bandierina verde prima di eseguire i blocchi successivi.

Ora aggiungiamo un blocco da "Movimenti" per spostare il gatto quando si clicca sulla bandiera verde:
![p2](image-3.png)

Si trascina il blocco e lo si "aggancia" a quello precedentemente posizionato.

Ora se si clicca sulla bandierina verde il gatto si muoverà del numero di passi scritti dentro il blocco azzurro appena posizionato: in questo caso 10.

![p3](image-6.png)
Come si vede da questa immagine dopo aver premuto 3 volte la bandierina verde la posizione x è arrivata a 30.

### Strutture di controlo
Le strutture di controllo permettono di valutare delle condizioni ed eseguire delle scelte:
prendiamo da "Controllo" il blocco "se - altrimenti":

dove c'è scritto "se" si può vedere un rombo vuoto: in questa posizione possiamo inserire la condizione da verificare.

![p4](image-4.png)

I "buchi" con una certa forma possono essere riempiti solo con un blocco della stessa forma. Quindi nel rombo può essere posizionata solo un'istruzione a forma di rombo.

Proseguiamo il programma controllando questa condizione: 
se la posizione dello sprite è maggiore di 50 ritorna alla posizione x=0 e y=0, altrimenti fai altri 5 passi.

![Alt text](image-7.png)