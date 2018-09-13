
## Part 1

```
Let S = it is sunny, 
C = camping is fun, 
H = the homework is done, and 
M = mathematics is easy.
```
-- --
```
Translate into English: (M → H) ∧ (S → C)
```
**If mathematics is easy then the homework is done, and if it is sunny then camping is fun.**
-- --
```
Translate into Propositional Logic:   
"Mathematics is easy or camping is fun, as long as it is sunny and the homework is done."
```
**(S ^ H) → (M ^ C)**
-- --

## Part 2

`Use a truth table to determine whether this is a tautology, contradiction, or neither:  (¬B → ¬A) → ((¬B → A) → B)`  

| ¬B | ¬A | ¬B → ¬A | A | ¬B → A | B | (¬B → A) → B |
|:--:|:--:|:-------:|:-:|:------:|:-:|:------------:|
| T  | T  | T       | F | F      | F | T            |
| T  | F  | F       | T | T      | F | F            |
| F  | T  | T       | F | T      | T | T            |
| F  | F  | T       | T | T      | T | T            |

This is neither a tautology or a contradiction.
-- --
`Use a truth table to determine whether this is a tautology, contradiction, or neither: ((A → B) ∧ (B → ¬A)) → A`

| A | B | (A → B) | ¬A | (B → ¬A) | (A → B) ∧ (B → ¬A) | ((A → B) ∧ (B → ¬A)) → A |
|:-:|:-:|:-------:|:--:|:--------:|:------------------:|:------------------------:|
| T | T | T       | F  | F        | F                  |  T                       |
| T | F | F       | F  | T        | F                  |  T                       |
| F | T | T       | T  | T        | T                  |  F                       |
| F | F | T       | T  | T        | T                  |  F                       |

This is neither a tautology or a contradiction.
-- --
