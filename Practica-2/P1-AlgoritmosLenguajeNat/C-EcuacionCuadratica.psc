Algoritmo ResolverEcuacionCuadratica
	
	Definir a, b, c, disc, x1, x2, partreal, partim Como Real
	
	Escribir "Calculadora de Raíces de Ecuacion Cuadratica"
    Escribir "Forma: ax^2 + bx + c = 0"
	Escribir ""
	
	Escribir "Ingrese los valores de"
	Escribir "a"
	Leer a
	Escribir "b"
	Leer b
	Escribir "c"
	Leer c
	Escribir ""
	
	Si a=0 Entonces
		Si b=0 Entonces
			Si c=0 Entonces
				Escribir "Ecuacion identidad: Infinitas soluciones"
			SiNo
				Escribir "Ecuacion contradictoria: Sin solucion"
			FinSi
		SiNo
			x1 <- -c/b
			Escribir "Ecuacion lineal: Una solucion"
			Escribir "x1= ", x1
		FinSi
	SiNo
		disc <- b*b-4*a*c
		Si disc>0 Entonces
			x1 <- (-b+rc(disc))/2*a
			x2 <- (-b-rc(disc))/2*a
			Escribir "Ecuacion con dos raices reales distintas: Dos soluciones"
			Escribir "x1= ", x1
			Escribir "x2= ", x2
		SiNo
			Si disc = 0 Entonces
				x1 <- -b/(2*a)
                Escribir "Ecuacion con raiz real doble: Una solucion"
				Escribir "x= ", x1
			SiNo
				partreal <- -b/(2*a)
                partim <- rc(-discriminante)/(2*a)
				Escribir "Ecuacion con raíces complejas conjugadas: Dos soluciones"
				Escribir "x1= ", partreal, "+", partim, "i"
				Escribir "x2= ", partreal, "-", partim, "i"
			FinSi
		FinSi
	FinSi

FinAlgoritmo
