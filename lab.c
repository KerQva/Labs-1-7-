#include "Lab.h"
#define N 9


//Лабораторная работа №1
// Бассейн объёмом V литров полностью заполнен водой. По одной трубе водаиз бассейна вытекает со скоростью v1 литров в минуту, по другой трубе вода
//поступает. Бассейн стал пустым через время t . Какова скорость поступления воды v2 ?
int lr1()
{
float V,v1,v2,t,U;//U-скорость убывания воды
printf("V=");// Ввод объёма бассейна
scanf("%f",&V);
printf("v1=");//ввод скорости вытекания воды
scanf("%f",&v1);
printf("t=");//ввод времени за которое бассейн будет опустошён
scanf("%f",&t);
U=V/t;
v2=v1-U;
printf("speed2 = %f\n",v2);//вывод скорости поступления
return 0;
}

//Дополнительное задание
//Описать выполненные расчет в отдельной функции, которая возвращает результат, функция должна вызываться в мейне и результат,
// возвращаемый ею, должен выводится в консоль.

float f()
{
float V,v1,v2,t,U;//U-скорость убывания воды
printf("V=");// Ввод объёма бассейна
scanf("%f",&V);
printf("v1=");//ввод скорости вытекания воды
scanf("%f",&v1);
printf("t=");//ввод времени за которое бассейн будет опустошён
scanf("%f",&t);
U=V/t;
v2=v1-U;
return v2;
}
int lr1d()
{
printf("%f\n",f());
return 0;
}


//Лабораторная работа №2
//Задача 2.3 Вычислить сумму первых N элементов ряда: 1/4+2/9+3/16+4/25+...

int lr2()
{
 float s,a,c,z;//s-сумма ряда, a-очередной элемент, c- числитель, z- знаменатель
 int n,i;//n- число элементов ряда, i- номер очередного элемента ряда
 printf("n=");
 scanf("%d",&n);//ввод количество элементов ряда (n)
 c=1;
 z=2;
 s=0;
 i=0;
 while (i<n)//цикл работает пока i<n
    {
        a=(c/(z*z));
        s=s+a;
        c=c+1;
        z=z+1;
        i=i+1;
    }
 printf("s=%f\n", s);
 return 0;
}

//Дополнительное задание
//реализовать цикл for

int lr2d()
 {
 float s,a,c,z;//s-сумма ряда, a-очередной элемент, c- числитель, z- знаменатель
 int n,i;//n- число элементов ряда, i- номер очередного элемента ряда
 printf("n=");
 scanf("%d",&n);//ввод количество элементов ряда (n)
 c=1;
 z=2;
 s=0;
 for (i=0;i<n; i++)//цикл работает пока i<n
    {
        a=(c/(z*z));
        s=s+a;
        c=c+1;
        z=z+1;
    }
 printf("s=%f\n", s);
 return 0;
}


//Лабораторная работа №3
//Задача 3.3 В потоке символов сосчитать среднюю длину слова.

int lr3()
{
int c , a; // c-текущий символ из потока, a-обнаружение слова.
double cnt, n, t; // cnt-среднеей кол-во букв в слове, , n-кол-во слов, t-общее кол-во букв в  словах.
printf("Enter a words: ");
cnt = 0;
a=0;
t=0;
n=0;
// цикл чтения символов из потока, связанного с клавиатурой
while( (c = getchar()) != EOF )
    {
    if( c == ' ' || c == '.' || c == '\n' || c == ',' )
       {
          a = 0;
       }
    else
       {
          a++;
          t++;
       }
    if(a == 1)
       n++;
    }
cnt = t / n;
printf("number of words = %f\n", cnt );
 return 0;
}

//Дополнительное задание
//Подсчитать слова не содержащие гласных букв

int lr3d()
{
 int count = 0, word_count = 0;
    char c;
    int gl = 0;
    printf("Enter text: ");

    while ((c = getchar()) != EOF)
        {
        if (c == 'A' ||  c == 'E' ||  c == 'I' ||  c == 'O' ||  c == 'U' || c == 'a' ||  c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u')
            {
            gl = 1;
            }
        if (c == ' ' ||  c == '\n' ||  c == '\t')
            {
            if (!gl && count > 0)
                {
                word_count++;
                }
            gl = 0;
            count = 0;
            }
            else
                {
            count++;
                }
         }

    if (!gl && count > 0)
        { // Проверка последнего слова перед EOF
        word_count++;
        }

    printf("Words without glasnix: %d\n", word_count);
    return 0;
}



//Лабораторная работа №4
//В символьной строке удалить все слова, состоящие из нечетного количества букв

int lr4()
{
    char string[100];
    printf("Enter a text: ");
    scanf("%[^\n]s", string);

    int start = 0;
    int end = 0;
    int i=0,j=0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ' || string[i]=='.' || string[i]== ',' || string[i]==';' || string[i]==':')
            {
            if ((end - start) % 2 == 0)
            {
                for ( j = start; j < end; j++)
                {
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            start = i + 1;
        }
        end++;
    }

    if ((end - start) % 2 == 0)
        {
        for ( j = start; j < end; j++)
        {
            printf("%c", string[j]);
        }
    }

    return 0;
}



//Дополнительное задание
//ПР:В символьной строке удалить все слова, состоящие из нечетного количества букв и не удалять все слова, содержащие цифры.


int lr4d()
{
    char string[100];
    printf("Enter a text: ");
    scanf("%[^\n]s", string);

    int start = 0;
    int end = 0;
    int i=0,j=0,k=0;
    int flag=0;

    for (i = 0; string[i] != '\0'; i++)
   {
        if (string[i] == ' ' || string[i]=='.' || string[i]== ',' || string[i]==';' || string[i]==':')
        {

             if ((end - start) % 2 == 0)
            {
              for ( j = start; j < end; j++)
                {
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            if ((end-start)%2==1)
            {
                flag=1;
                for ( k = start; k < end; k++)
                {
                    if ((string[k]=='0'|| string[k]=='1' || string[k]=='2' || string[k]=='3' || string[k]=='4' || string[k]=='5' || string[i]=='k' || string[k]=='7' || string[k]=='8' || string[k]=='9')&&(flag==1))
                    {
                         for ( j = start; j < end; j++)
                        {
                        printf("%c", string[j]);
                         flag=0;
                        }
                      printf(" ");
                    }
                }

            }
            start = i + 1;
        }
        end++;
    }
        if ((end - start) % 2 == 0)
            {
                for ( j = start; j < end; j++)
                    printf("%c", string[j]);
            }
         if ((end-start)%2==1)
            {
                flag=1;
                for ( k = start; k < end; k++)
                {
                    if ((string[k]=='0'|| string[k]=='1' || string[k]=='2' || string[k]=='3' || string[k]=='4' || string[k]=='5' || string[i]=='k' || string[k]=='7' || string[k]=='8' || string[k]=='9')&&(flag==1))
                    {
                        for ( j = start; j < end; j++)
                        {
                        printf("%c", string[j]);
                        flag=0;
                        }
                     printf(" ");
                    }
                }

            }
}



//Лабораторная работа №5
//В массиве из 10 целых чисел обнулить все отрицательные элементы, если сумма их модулей меньше суммы положительных элементов.

#define N 10
int lr5()
{
int x[N];
int pluss;
int minuss;
int i;
// ввод массива

for( i = 0; i < N; i++ )
{
 printf("a[%d]= ", i+1);
 scanf("%d", &x[i]);
}
pluss = minuss  =0;
for( i = 0; i < N; i++ )
   {
       if (x[i]>0)
       pluss=pluss+x[i];
       if (x[i]<0)
       minuss=minuss+x[i];
   }
// выборочное обнуление элементов
for( i = 0; i < N; i++ )
 {
 if ((pluss>(-1)*minuss) && (x[i]<0))
 x[i] = 0;
 }
// вывод массива
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);
printf("\n");
return 0;
}

//Дополнительное задание
//Если образуется прогрессия то выводится что прогрессия если нет то выполняется задание, теория  динамическая память

#define N 10
int lr5d()
{
int x[N];
int pluss=0, minuss=0;
int i,alp=0,geop=0;
int fl=0;
// ввод массива
for( i = 0; i < N; i++ )
{
 printf("a[%d]= ", i+1);
 scanf("%d", &x[i]);
}
alp=x[1]-x[0];
geop=x[1]/x[0];
for (i=0;i<(N-1);i++){
    if(((x[i+1]-x[i])==alp)||((x[i+1]/x[i])==geop))
        fl=1;
    else{
        fl=0;
        break;}
}
if (fl==1)
    {
    printf(" it is progression");
    return 0;
    }
 for( i = 0; i < N; i++ )
   {
       if (x[i]>0)
       pluss=pluss+x[i];
       if (x[i]<0)
       minuss=minuss+x[i];
   }
// выборочное обнуление элементов
for( i = 0; i < N; i++ )
 {
 if ((pluss>(-1)*minuss) && (x[i]<0))
 x[i] = 0;
 }
// вывод массива
for( i = 0; i < N; i++ )
 printf("%d ", x[i]);
printf("\n");
return 0;
}




//Лабораторная работа №6
//В двумерном целочисленном массиве размера N на K проверить, являются ли строки геометрической прогрессией.

#define K 3
#define N 4

int lr6()
{
int x[K][N]; // массив из K на N элементов
int c[K];//результаты деления первого элемента на второй
int aver; // среднее арифметическое
int i, j,s;
int fl;
// ввод массива
for( i = 0; i < K; i++ )
 for( j = 0; j < N; j++ ){
 printf("a[%d][%d]=",i+1,j+1);
 scanf("%d", &x[i][j]);
 }
for (i=0;i<K;i++)
 for(j=0;j<1;j++)
  for(s=0;s<K;s++)
  c[s]=x[i][j]/x[i][j+1];

for( i = 0; i < K; i++ ){
 for( j = 0; j < N-1; j++ ){

 if (x[i][j]/x[i][j+1]==c[i])
 fl=1;
 else
 fl=0;
}
if (fl==1)
printf("string %d is geom regression \n",i+1);
if (fl==0)
printf("string %d is not geom regression \n",i+1);
}
return 0;
}


//Дополнительное задание
//Метод сортировки пузырьком


void sort(int svo[][100], int N0, int K0) {
    int i, j, k;
    int z;

    // Считаем количество элементов в массиве
    int n = N0 * K0;

    // Пузырьковая сортировка
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Преобразуем индексы одного измерения в двумерные индексы
            int N1 = j / K0;
            int K1 = j % K0;
            int N2 = (j + 1) / K0;
            int K2 = (j + 1) % K0;

            // Сравниваем элементы и меняем их местами при необходимости
            if (svo[N1][K1] > svo[N2][K2]) {
                z = svo[N1][K1];
                svo[N1][K1] = svo[N2][K2];
                svo[N2][K2] = z;
            }
        }
    }
}

int lr6d() {
    int svo[100][100];
    int N0, K0;
    int i, j;

    // Вводим количество строк и столбцов
    printf("nub of strok: ");
    scanf("%d", &N0);
    printf("nun of stolb: ");
    scanf("%d", &K0);

    // Вводим элементы массива
    printf("elementi:\n");
    for (i = 0; i < N0; i++) {
        for (j = 0; j < K0; j++) {
            scanf("%d", &svo[i][j]);
        }
    }

    // Сортируем массив
    sort(svo, N0, K0);

    // Выводим отсортированный массив
    printf("result:\n");
    for (i = 0; i < N0; i++) {
        for (j = 0; j < K0; j++) {
            printf("%d ", svo[i][j]);
        }
        printf("\n");
    }
    return 0;
}


//Лабораторная работа №7
//Определить, является ли симметричным двоичное представление длинного целого числа N.


#include <stdio.h>

int lr7() {
    unsigned int k=0,P,res1,res2;
    int i,j,flag=0;
    printf("enter number: ");
    scanf("%d", &P);
    for(i=0;i<16;i++)
    {
        k|=(1<<i)|(1<<(31-i));
        res1=(P&k);
        res2=(P&~k);
        printf("i:%d k:%u res1:%u ~k:%u res2:%u",i,k,res1,~k,res2);
        printf("\n");
        if (res1==P)
        {
            flag=1;
        }
        if (res2==P)
        {
            flag=1;
        }
        if((res1!=P)&(res2!=P))
        {
            flag=0;
            break;
        }

       k=0;

    }
    if (flag==1)
    {
      printf("simmetria est");
    }
    if (flag==0)
    {
       printf("simmetrii net");
    }
 return 0;

}










