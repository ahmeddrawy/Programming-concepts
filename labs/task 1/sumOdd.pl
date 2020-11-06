% Mostafa Omar Mahmoud 20170292 CS_IS_2
% Ahmed Mohamed Hanafy 20170377 CS_IS 2


odd(X):-
	R is X mod 2,
	R == 1.

sumOdd(S, []):-
	S is 0.

sumOdd(S, [H|T]):-
	sumOdd(R, T),
	odd(H),
	S is R + H.

sumOdd(S, [H|T]):-
	sumOdd(S, T).
