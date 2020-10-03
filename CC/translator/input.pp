Procedure Main()

Begin:
	Var num : int ;
	Var i , flag : int ;
	Var x : Array [2][3] Of float;
	flag := 5 ;
	x[1][3] := 4 + x[2][1];
	Write ("Enter the value to be checked");
	Read (num) ;
	For ( i <- 2 To 5) Do
		If (num == 5) Then
			flag := 1;
			Goto Exit ;
		EndIf
	EndFor
	
Exit:
	If (flag == 1) Then
		Write ("The value", num, "is not prime");
	Else
		Write ("The value", num, "is prime");
	EndIf

End: