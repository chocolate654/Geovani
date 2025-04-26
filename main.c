void verificaIdadeadolescente(int anoAtual, int anoNascimento)
{
    int idade = anoAtual - anoNascimento;
    if(idade>= 11 && idade<=18)
    {
        printf("Voce eh um adolescente\n");

    }
}