class Eleitor:

    def __init__(self, nome, idade):
        self.nome = nome
        self.idade = idade
    
    def verificar(self):
        if self.idade < 16:
            return (print(self.nome,"ainda não pode votar. Tem apenas", self.idade ,"anos."))
        elif self.idade >= 18 and self.idade <= 65:
            return (print(self.nome, "-", self.idade, "deve votar."))
        else:
            return (print(self.nome,"-", self.idade," Voto Facultativo."))

def main():
    pessoa1 = Eleitor("Carlos", 10)
    pessoa1.verificar()
    pessoa2 = Eleitor("Julia", 60)
    pessoa2.verificar()

if __name__ == '__main__':
    main()