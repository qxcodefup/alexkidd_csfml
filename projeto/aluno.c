
#include <SFML/Graphics.h>
#include "aluno.h"
#include <stdlib.h>//rand
#include <math.h> //sqrt


/*
 * Em update a posicao de alex em x aumenta de vx/10,
 * e a posicao de alex em y aumenta de vy/10
 *
 * Após, implementada essa função, o bonequinho deverá estar
 * se movendo lentamente para direita.
 */
void update(Obj *alex)
{
}

/*
 * Se a tecla for 'd' (sfKeyD), a velocidade de alex em x aumenta
 * em 1. Porem ela nao pode passar de 8.
 *
 * Se a tecla for 'a'(sfKeyA), a velocidade de alex em x diminui
 * em 1. Porem ela nao pode passar de -8.
 *
 * Após implementada essa função o bonequinho poderá ser controlado
 * para direita e para esquerda através das teclas A e D.
 */
void andar(Obj *alex)
{
    const int vmax = 8;
    /*if(sfKeyboard_isKeyPressed(sfKeyD))*/
    /*{*/
    /*}*/
    /*if(sfKeyboard_isKeyPressed(sfKeyA))*/
    /*{    */
    /*}*/
}

//se alex nao estiver tocando no chao, ou seja,
//alex.y < chao - 2, a velocidade vy de alex deve
//ser aumentada em 1
//
//Após implementada, o bonequinho irá cair e sumir na tela.

void gravidade(Obj *alex, int chao)
{
}

/* Se alex tentar atravessar o chao, ou seja,
 * seu y for >= chao, entao o faca voltar para
 * cima do chao, y deve ser igual a chao - 1.
 * Alem disso a velocidade dele em y deve se
 * tornar zero ao bater no chao
 *
 * Após essa função, o alex irá parar ao tocar o chão.
 * Observe que o bonequinho ficará como que deslizando no gelo.
 */
void colidir(Obj *alex, int chao)
{
}

//se alex estiver tocando o chao, ou seja,
//y = chao -1
//e a tecla for o 'w' (sfKeyW), a velocidade de
//alex na vertical deve diminuir em 10.
//Para cima diminui, lembre-se disso!

//Após essa função, se alex estiver tocando o chão ele
//deve conseguir pular.

//se retirar a restrição de só pular quando estiver tocando
//o chão ele poderá pular no ar
void pular(sfKeyCode tecla, Obj *alex, int chao)
{
    //if(tecla == sfKeyW)
}




/* Hora de atirar caso a tecla apertada for 'j' sfKeyJ
 * Se o tiro nao existe:
     * Alex da um tiro na direcao para onde ele esta virado com velocidade vx 5.
     * A velocidade do tiro eh vy eh a velocidade do alex em vy
     * Voce sabera o lado que alex estah virao pela variavel face de alex.
     * A posicao inicial do tiro eh a posicao inicial de Alex
     * A face do tiro deve ser '{' se Alex estiver '<' e '}' caso contrario
 * Se o tiro ja existir, entao nao faça nada
 *
 * Observe que dentro de tiro existe uma Struct Obj.
 * Para acessar o x de tiro, voce deve colocar tiro->obj.x
 *
 * Após essa função, o alex vai soltar um tiro que seguirá o seu caminho
 * até sumir na tela. Alex não poderá soltar mais de um tiro.
 */

void atirar(sfKeyCode tecla, Obj *alex, Tiro *tiro)
{
}


/* Se o objeto estiver acima do chao, tocando o chao,
 * ele perde 10% da sua velocidade em X. Porem se
 * a velocidade em x dele for menor que 1, faca ficar zero
 *
 * Após essa função Alex vai parar de patinar no gelo.
 */

void atrito(Obj *alex, int chao)
{
}


/*
 * Essa função é auxiliar, será utilizada para saber se
 * o objeto ou o tiro sairam da tela.
 * Se um objeto estiver fora do retangulo estabelecido
 * por Limites retorne true
 */

int fora_dos_limites(Obj obj, Limites rect)
{
    return 0;
}

/* Use a funcao fora_dos_limites para remover a bala se
 * ela sair da tela
 * coloque tiro->existe para false se o tiro sair da tela
 *
 * Após essa função, quando o tiro atingir os limites da tela
 * ele some e Alex poderá soltar outro tiro.
 */
void verificar_tiro_saiu(Tiro *tiro, Limites tela)
{
}

/*
 * Use a funcao a seguir para não permitir que o alex saida dos
 * limites esquerdo e direito da tela.
 * Faça o seguinte, se ele bater na beirada, a velocidade dele
 * em x inverte. Ajuste a posição para antes do impacto.
 *
 * Após essa função Alex não conseguirá mais sair da tela pela
 * esquerda ou pela direita.
*/
void limitar_alex(Obj *obj, Limites lim)
{
}

//se a tecla for 'i' sfKeyI, inicie aleatoriamente o inimigo
//dentro dos limites da tela, use a funcao rand,
//na main já foi dado o srand.
//coloque is_ativo para 1 e face para @
//coloque vx e vy para 0
//coloque vidas para 9

//Após essa função, se o jogador clicar na tecla I, vai aparecer
//um fantasma que não se mexe.
void iniciar_inimigo(sfKeyCode tecla, Enemy * inimigo, Limites lim){
    //if(tecla == sfKeyI)
}

//faca o inimigo seguir alex
//faça vx e vy do inimigo ser constante de 3 na direcao de alex
//descubra pela posição do fantasma em relação ao Alex qual deve
//ser a velocidade do fantasma para que ele persiga o Alex.

//Após essa função o fantasminha estará perseguindo o Alex.
void seguir(Obj * enemy, Obj * alex)
{
}

//retorna 1 se os objetos A e B estão em colisão.
//voce pode pegar o objeto e tratar como uma esfera
//posição x, y e raio = 1
//e fazer a colisão entre as esferas, ou seja se a distancia
//entre os centros for menor que a soma dos raios então elas
//colidiram
//ou de forma mal feita só ver se a parte inteira dos x e y são iguais
int colidiu(Obj * A, Obj * B){
    return 0;
}

//verifique e trate as colisões entre os 3 elementos
//se o inimigo estiver ativo e colidir com alex o jogo acabou
//coloque 1 em acabou
//
//Se a bala existir e colidir com o inimigo ativo, diminua 1 em suas
//vidas. Se sua vida do inimigo ficar negativa coloque 2 em acabou.
//Lembre de colocar tiro->existe para 0

//Após essa função se o fantasma bater no Alex, o jogo acaba e aparece
//uma mensagem na tela. Se o tiro bater no fantasma, o tiro some e o
//fantasma perde uma vida. Se o fantasma chegar em vida negativa, o
//jogo acaba e o jogador ganha.
void testar_colisao(Obj * alex, Tiro * tiro, Enemy * enemy, int * acabou){
}


