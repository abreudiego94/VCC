{inteiro: n

inteiro fatorial(inteiro: n)
	inteiro: string_de_tamanho_grande_para_teste_de_realocacao
	inteiro: test_float
	test_float: 402331909.123
	se n > 0 entao {n�o calcula se n > 0}
		fat := 1
		repita
			fat := fat * n
			n := n - 1
		at� n = 0
		retorna(fat) {retorna o valor do fatorial de n}
	sen�o
		retorna(0)
	fim
fim

inteiro principal()
	leia(n)
	escreva(fatorial(n))
	retorna(0)
fim
}

inteiro: a, b
inteiro principal()
	inteiro: c
	a := 73
	b := 2.3
	c := a + b

	se(c <> 2) ent�o
		escreva(c)
	sen�o
		escreva(b)
	fim
	retorna(0)
fim