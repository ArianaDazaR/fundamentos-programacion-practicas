Algoritmo CajeroAutomatico
	Definir PINingresado, PINcorrecto Como Entero
	Definir saldo, monto Como Real
	
	PINcorrecto <- 3570
	saldo <- 50000
	
	Escribir "Ingrese su tarjeta"
	Escribir "Ingrese su PIN: "
	Leer PINingresado
	Escribir ""
	
	Si PINingresado = PINcorrecto Entonces
		Escribir "¡Bienvenido!"
		Escribir "Saldo disponible: ", saldo
		Escribir "Ingrese el monto que desea retirar: "
		Leer monto
		Escribir ""
		Si monto < saldo Y monto > 0 Entonces
		saldo <- saldo - monto
		Escribir "Transaccion exitosa. Por favor retire su dinero."
		Escribir "Su nuevo saldo es: ", saldo
		SiNo
			Escribir "Saldo insuficiente o monto invalido."
		FinSi
	SiNo
		Escribir "PIN incorrecto. Operacion interrumpida."
	FinSi
	
	Escribir ""
	Escribir "No olvide retirar su tarjeta"
FinAlgoritmo
