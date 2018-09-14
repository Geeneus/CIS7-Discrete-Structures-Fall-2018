


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
**(S ^ H) → (M ∨ C)**
-- --

## Part 2
```
Use a truth table to determine whether this is a tautology, contradiction, or neither:  
(¬B → ¬A) → ((¬B → A) → B)
```
| ¬B | ¬A | ¬B → ¬A | A | ¬B → A | B | (¬B → A) → B | (¬B → ¬A) → ((¬B → A) → B) |
|:--:|:--:|:-------:|:-:|:------:|:-:|:------------:|:---------------------------|
| T  | T  | T       | F | F      | F | T            | T                          |
| T  | F  | F       | T | T      | F | F            | T                          |
| F  | T  | T       | F | T      | T | T            | T                          |
| F  | F  | T       | T | T      | T | T            | T                          |

This is a tautology.
-- --
```
Use a truth table to determine whether this is a tautology, contradiction, or neither:  
((A → B) ∧ (B → ¬A)) → A
```
| A | B | (A → B) | ¬A | (B → ¬A) | (A → B) ∧ (B → ¬A) | ((A → B) ∧ (B → ¬A)) → A |
|:-:|:-:|:-------:|:--:|:--------:|:------------------:|:------------------------:|
| T | T | T       | F  | F        | F                  |  T                       |
| T | F | F       | F  | T        | F                  |  T                       |
| F | T | T       | T  | T        | T                  |  F                       |
| F | F | T       | T  | T        | T                  |  F                       |

This is neither a tautology or a contradiction.
-- --
## Part 3
```
For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.
```
-- --
```
 (p ∧ q) → r , p → (q → r )
 ```

```
(p ∧ q)' ∨ r <=> p' ∨ (q' ∨ r) Implication (x3)  
p' ∨ q' ∨ r <=> p' ∨ (q' ∨ r) De Morgan's Law
p' ∨ q' ∨ r <=> p' ∨ q' ∨ r Associative 
```
 -- --
 ```
 (q ∨ r) → p, (q → p) ∧ (r → p)
 ```
 ```
 (q ∨ r)' ∨ p <=> (q' ∨ p) ^ (r' ∨ p) Implication (x3)
 (q' ^ r') ∨ p <=> (q' ∨ p) ^ (r' ∨ p) De Morgan's Law
 (q' ∨ p) ^ (r' ∨ p) <=> (q' ∨ p) ^ (r' ∨ p) Distributive
 ```
 -- --
## Part 4
 ```
Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,”
City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.”
```
-- --
```
Translate into English: 
∃x∀y∀z(City(x) ∧ Traveler(y) ∧ Lives(z,x)) → (Loves(y,x) ∧ ¬Loves(z,x))
```
**There exists a city where all of the travelers love the city and everyone who lives there does not love the city.**
-- --
```
Translate into Predicate Logic: 
“No traveler loves the city they live in.”
```
**∀x∀y((Traveler(x) ^ City(y) ^ Lives(x, y)) → ¬Loves(x, y))**
-- --
## Extra Credit
```
Assuming: p → (q ∧ r), s → r , r → p
Prove: s → q.
```
```
Assuming s is true:
In (s → r), r is also true, (Modus Ponen)
In (r → p), p is also true, (Modus Ponen)
In (p → (q ∧ r)), both q and r are true, (Modus Ponen)
Which means (s → q) is true because (true → true) is true.

Assuming s is false:
(s → q) would always be true.
Check for contradictions:
In (p → (q ∧ r)), p must be false, (Modus Tollens)
In (r → p), r must be false, (Modus Tollens)
In (s → r), s must be false. (Modus Tollens)
No Contradictions.

Assuming q is true:
(s → q) would always be true.
Check for contradictions:
In (p → (q ∧ r)), r can be either true or false,
For the sake of finding a possibility with no contradictions, assume r is false:
In (p → (q ∧ r)), p must be false, (Modus Tollens)
In (s → r), s must be false, (Modus Tollens)
No contradictions.


Assuming q is false:
In (p → (q ∧ r)), p is also false, (Modus Tollens)
In (r → p), r is also false, (Modus Tollens)
In (s → r), s is also false, (Modus Tollens)
which means (s → q) is true because (false → false) is true.
```
```
(s → q) is true in all cases with no contradictions so (s → q) is true.
```
-- --
```
Assuming: ¬(r ∨ s), ¬p → s, p → q. 
Prove: q
```
```
In ¬(r ∨ s), both r and s are false. 
In (¬p → s), p is true, (Modus Ponen)
In (p → q), q is true. (Modus Ponen)
```

