# 🎯 Number Guessing Game (C)

A simple command-line game written in C. The computer picks a random number between 1 and 100, and you try to guess it. After every guess, you get a hint: too high or too low.

## Features
- Random number generated on every run
- Hints after each guess
- Counts how many attempts you took
- Handles invalid input (like letters) without crashing

## How to run

Make sure you have GCC installed, then:

```bash
gcc main.c -o guessing_game
./guessing_game
```

On Windows:

```bash
gcc main.c -o guessing_game.exe
guessing_game.exe
```

## Sample output

```
=== Number Guessing Game ===
I am thinking of a number between 1 and 100. Can you guess it?

Your guess: 50
Too high! Try again.
Your guess: 25
Too low! Try again.
Your guess: 37

Correct! You guessed it in 3 attempt(s).
```

## What I learned
- Using `rand()` and `srand(time(NULL))` for random numbers
- `do-while` loops and `if-else` conditions
- Checking `scanf` return value to handle bad input

## Ideas to improve
- [ ] Add difficulty levels (easy, medium, hard)
- [ ] Limit the number of attempts
- [ ] Let the player play again without restarting
