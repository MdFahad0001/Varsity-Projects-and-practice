org 000h
	
	mov a,#20h
	mov b,#10h
	add a,b
	mov 40h,a
	
	mov a,#20h
	mov b,#10h
	subb a,b
	mov 41,a
	
	mov a,#20h
	mov b,#02h
	mul ab
	mov 42h,a
	
	mov a,#20h
	mov b,#10h
	div ab
	mov 44h,a
	
	mov 45h,b
	mov a,#15h
	inc a
	mov 46,a
	
	dec a
	mov 47h,a
	END