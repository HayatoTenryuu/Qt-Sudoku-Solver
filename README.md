# Qt-Sudoku-Solver
This is literally just a C++ copy of my other C# Sudoku Solver. While not a complete duplicate, it looks the same overall and does most of the same stuff, but I have included fun features in this one that I've found along the way.
The reason I'm making this one is because I want the brute force solution to use Prolog, because it is easy to think of that method of solving things as a recursive problem:

Guess A, solve, if no conlicts, repeat. 
If A has problems, try A2. 
If you aren't A (let's say you're C because you have to make three guesses), and you have problems with every possibility, go back up and try another option for B. 
If all possibilities of B and C cause problems, try another verion of A.

Prolog does this kind of thing by design, so it would take little time and effort to develop this, and while knowing how to incorporate this will take time on the front end for me, 
it would teach me how to solve many problems of this type (logic and recursive logic dictating the behavior of declarative/imperative/do-this-do-that languages). 

Still, I don't want Prolog to control this entire program (most of it doesn't need Prolog to work in a reasonable number of lines of code, 
especially when I can just use a switch statement to dictate the logic), but the brute forcing definitely needs a brain to think through things the correct way.
