print("Boletim de Lançamento de Notas")

nome = input("Nome do(a) Aluno(a): ")
curso = input("Curso: ")
disciplina = input("Disciplina: ")
nota = float( input("Nota: "))

if nota > 19 and nota < 101:
    print("Aprovado!")
elif nota < 20:
    print("Reprovado")
else:
    print("Prova Final")
