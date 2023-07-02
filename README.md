# TicTacToe

## Overview

-   [Description](#description)
-   [View](#view)
-   [Header Files](#header-files)
-   [Build](#build)

## Description

The game Tic Tac Toe in the console to learn some C<br>
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

## Header Files

1. stdio.h

## Build

1. Clone the repository
2. Open the console in the folder TicTacToe
3. Run the command:
    ```bash
    gcc main.c -o TicTacToe && TicTacToe
    ```
4. Done
