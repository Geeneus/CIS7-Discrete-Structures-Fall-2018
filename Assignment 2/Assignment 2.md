  Show that p -> q and q' -> p' are logically equivalent.  

p -> q <=> q' -> p'  
p' v q <=> q'' v p' Implication (x2)  
p' v q <=> q v p' Double Negative  
p' v q <=> p' v q Communative  

-- -- -- -- -- -- -- -- -- -- -- --

Show that (p -> r) ^ (q -> r) <=> (p v q) -> r.  

(p -> r) ^ (q -> r) <=> (p v q) -> r  
(p' v r) ^ (q' v r) <=> (p v q)' v r Implication (x3)  
(p' v r) ^ (q' v r) <=> (p' ^ q') v r De Morgan's Law  
(p' v r) ^ (q' v r) <=> (r v p') ^ (r v q') Distributive  
(p' v r) ^ (q' v r) <=> (p' v r) ^ (q' v r) Communative (x2)  

-- -- -- -- -- -- -- -- -- -- -- --

Give an interpretation to prove that the following wff is not valid: (Ǝx)A(x) ^ (Ǝx)B(x) -> (Ǝx)(A(x) ^ B(x))  

x is in the set of programming assignments.  
A(x) => x is easy (or not hard)  
B(x) => x is hard (or not easy)  

If there exists a programming assignment that is easy,  
and there exists a programming assignment that is hard,  
that implies that there is a programming assignment that is easy and hard.  

This cannot be possible, just because there is one of each type, doesn't mean there are any of both types.  
