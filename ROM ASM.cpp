		ORG 0000H
	
		MOV R0, #20H
		MOV DPTR, #040H
		MOV R2, #05H

BACK:	MOV A, @R0
		MOVX @DPTR, A
		INC R0
		INC DPTR
		DJNZ R2, BACK
		END
		