# TicTacToe

## Übersicht

-   [Beschreibung](#beschreibung)
-   [View](#view)
-   [Header Datein](#header-datein)
-   [Build](#build)

## Beschreibung

Das Spiel TicTacToe in der Konsole<br>
Player1: X | Payer2: O<br>

## View

```
   | 1 | 2 | 3 |
   |---|---|---|
 A |   |   |   |
   |---|---|---|
 B |   |   |   |
   |---|---|---|
 C |   |   |   |
   |---|---|---|
Player 1: A1
   | 1 | 2 | 3 |
   |---|---|---|
 A | X |   |   |
   |---|---|---|
 B |   |   |   |
   |---|---|---|
 C |   |   |   |
   |---|---|---|
Player 2: C3
   | 1 | 2 | 3 |
   |---|---|---|
 A | X |   |   |
   |---|---|---|
 B |   |   |   |
   |---|---|---|
 C |   |   | O |
   |---|---|---|
Player 1: B1
   | 1 | 2 | 3 |
   |---|---|---|
 A | X |   |   |
   |---|---|---|
 B | X |   |   |
   |---|---|---|
 C |   |   | O |
   |---|---|---|
Player 2: C2
   | 1 | 2 | 3 |
   |---|---|---|
 A | X |   |   |
   |---|---|---|
 B | X |   |   |
   |---|---|---|
 C |   | O | O |
   |---|---|---|
Player 1: C1
Winner: Player 1
   | 1 | 2 | 3 |
   |---|---|---|
 A | X |   |   |
   |---|---|---|
 B | X |   |   |
   |---|---|---|
 C | X | O | O |
   |---|---|---|
```

## Header Datein

1. stdio.h

## Build

1. Clone das Repository
2. Öffne die Konsole im Ordner TicTacToe
3. Führe den Befehl aus:
    ```bash
    gcc main.c -o TicTacToe && TicTacToe
    ```
4. Fertig
