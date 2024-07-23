# Qt-Sudoku-Solver
This is literally just a C++ copy of my other C# Sudoku Solver. While not a complete duplicate, it looks the same overall and does most of the same stuff, but I have included fun features in this one that I've found along the way.
The reason I'm making this one is because I want the brute force solution to use Prolog, because it is easy to think of that method of solving things as a recursive problem:

First, solve everything you can. Once you can't do anymore, then it's time to guess.
Guess A, solve everything you can (again). If no conlicts between the conclusions of your guess and the stuff you already had, keep going. 
If A has problems, try A2 (the alternatives to your first guess). 
If you aren't dealing with A (let's say you're dealing with C because you have to make three guesses), and you have problems with every possibility for C, go back up and try another option for B (aka B2). 
If all possibilities of B and C cause problems, try another verion of A, etc. Do this until you find an answer that works completely.

Prolog does this kind of recursive back and forth by design, so it would take little time and effort to develop this, and while knowing how to incorporate this will take time on the front end for me, 
it would teach me how to solve many problems of this type (logic and recursive logic dictating the behavior of declarative/imperative/do-this-do-that languages). 
Also, with Prolog, you could do this kind of "guess everything" approach to a puzzle and see if it has more than one solution. If someone or something is making Sudoku puzzles,
the puzzles need to have only one solution. This would be a way to test for an underconstrained (or unsolvable) puzzle.

Still, I don't want Prolog to control this entire program (most of the solving doesn't need Prolog in to work in a reasonable number of lines of code, 
especially when I can just use a switch statement to dictate muchg of the logic), but the brute forcing definitely needs a brain to think through things the correct way.
