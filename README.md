# これはなに?
プログラミング基礎及び演習の提出コードのまとめです。

# いろいろ
- 自分の書いたコードを保存しているだけです.
- 万が一,利用する場合は個人の責任でお願いします.

# C言語入門及び基礎
## 目次
1. [C言語とは](#C言語とは)
2. [コンパイル方法](#コンパイル方法)
3. [実行方法](#実行方法)
4. [main関数とは](#main関数とは)
5. [#includeとは](#includeとは)
6. [コメントアウト](#コメントアウト)
7. [型について](#型について)
8. [変数とは何ぞや](#変数とは何ぞや)
   1. [変数とは](#変数とは)
   2. [変数の定義の仕方](#変数の定義の仕方)
   3. [変数の使い方](#変数の使い方)
9. [演算子](#演算子)
10. [関数](#関数)
    1. [関数の作り方](#関数の作り方)
    2. [関数の使い方](#関数の使い方)
    3. [プロトタイプ宣言とは](#プロトタイプ宣言とは)
       1. [なぜプロトタイプ宣言を書くのか](#なぜプロトタイプ宣言を書くのか)
       2. [プロトタイプ宣言の方法](#プロトタイプ宣言の方法)
11. [条件分岐](#条件分岐)
    1. [条件分岐とは](#条件分岐とは)
    2. [条件式とは](#条件式とは)
    3. [書いてみる](#書いてみる)
12. [条件分岐2](#条件分岐2)
13. [条件分岐3](#条件分岐3)
14. [繰り返し処理1](#繰り返し処理1)
    1. [forループ](#forループ)
        1. [インクリメントとは](#インクリメントって?)
    2. [whileループ](#whileループ)
15. [繰り返し処理2](#繰り返し処理2)
16. [繰り返し処理3](#繰り返し処理3)
17. [繰り返し処理4](#繰り返し処理4)
18. [配列](#配列)
19. [プリプロセッサ](#プリプロセッサ)
20. [文字列](#文字列)
21. [二次元配列及びn次元配列](#二次元配列及びn次元配列)
22. [式と文の違いとは](#式と文の違いとは)
23. [構造体](#構造体)
    1. [構造体の配列](#構造体の配列)
    2. [構造体と関数](#構造体と関数)
    3. [typedef宣言](#typedef宣言)

## C言語とは
[C言語 - Wikipedia](https://ja.wikipedia.org/wiki/C%E8%A8%80%E8%AA%9E)

Wikipediaより引用

>C言語（シーげんご、英: C programming language）は、1972年にAT&Tベル研究所のデニス・リッチーが主体となって開発した汎用プログラミング言語である。英語圏では「C language」または単に「C」と呼ばれることが多い。日本でも文書や文脈によっては同様に「C」と呼ぶことがある。制御構文などに高水準言語の特徴を持ちながら、ハードウェア寄りの記述も可能な低水準言語の特徴も併せ持つ。基幹系システムや、動作環境の資源制約が厳しい、あるいは実行速度性能が要求されるソフトウェアの開発に用いられることが多い。後発のC++やJava、C#など、「C系」と呼ばれる派生言語の始祖でもある。ANSI、ISO、またJISにより言語仕様が標準規格化されている。

## コンパイル方法
gccを利用

`C:\User\hogehoge>gcc -Wall -o <output> <source>.c`


## 実行方法
gccによってコンパイルしたファイルを実行する.

`C:\User\hogehoge>./<output>`
または
`C:\User\hogehoge><output>`

## main関数とは

>main関数とはプログラムの開始処理において、いろいろな初期化処理の後、最初に呼び出される処理単位である。たいていのプログラムはこのmain関数から始まると考えてよい。(Wikipediaより引用)

main関数は最初に呼び出されるものである、換言するとmain関数がなければ動かないということだ.

基本的なmain関数のソースコード

```sample.c
#include <stdio.h>

int main(void){
    // do something...
    return 0;
}

```

ここは暗記でよい.

## includeとは
`#include`はプリプロセッサの一種である.
プリプロセッサは, コンパイル時に処理が行われる.

`#include <stdio.h>`は __stdio.h__ というファイルを読み込んでいる.

拡張子が.hのファイルはヘッダーファイルと呼ばれ、プロトタイプ宣言のみを記述したC言語のファイルのことである.

stdioとはstandard input/output の略で、日本語では標準入出力ということになる.
つまり, printf関数やscanf関数などのプロトタイプ宣言があるファイルということである.

プリプロセッサは, コンパイル時に処理が行われると言ったが, 具体的には単にファイルなどを展開するだけである.

つまり
```sample.c
#include <stdio.h>
```
は
```sample.c
int printf(...);
int scanf(...);
.
.
.
```
に置き換えられるといった具合である.

## コメントアウト
コメントアウトとは, ソースコード中にメモや注意を書くために使われる.
C言語では`//`や`/* */`といったものが使われている.

```sample.c
// これはコメント
/*
 * これも
 * コメント
 */
```


## 型について
次に考えなければならないのは, 型である.
型はタイプとも呼ばれている.

どこで使われているか?

主に
+ 変数
+ 関数の引数
+ 関数の戻り値

に使われている.

授業で使われている型一覧
|型|中身|日本語|
|:--:|:--:|:--:|
|int|32bit整数|整数値型|
|double|64bit実数|浮動小数点数型|
|char|1文字|文字型|
|void|何もなし|特別な値|

なお, voidは __関数の戻り値__ にのみ使われる.

## 変数とは何ぞや
上記で変数という言葉が出てきた.

ここでちゃんと説明するので安心してほしい.

### 変数とは
(Wikipediaより引用)
>プログラミングにおける変数（へんすう、英: variable）とは、高水準言語のプログラムのソースコードにおいて、扱うデータを読み書きする記憶域 (storage) のことであり、固有の名前（識別子）によって識別される。変数を用いることで、データを一定期間記憶し必要なときに利用することができる。高水準言語において、変数は記憶装置（メモリ）を抽象化する役割を果たす。
>一人一人の人間が異なる名前によって区別されるように、変数も個々の名前によって区別される。これにより、プログラム上で複数のデータを容易に識別・管理することができる。変数の識別子 (identifier) のことを変数名 (variable name) という。一般に、変数が表すデータをその変数の値（あたい、英: value）という。

つまり, データ（数値や文字など）を必要なときに利用するために用いるものということである.

名前付きの箱に物を入れるイメージである.

### 変数の定義の仕方

C言語では

`変数の型 変数の名前 = 変数の中身;`
もしくは
`変数の型 変数の名前;`

と記述する.

変数の名前はわかりやすい名前にする.
大文字のみは避ける.


具体例を以下に示す.

```sample.c
#include <stdio.h>

int main(void){
    int i;
    int age = 19;
    double pi = 3.14;
    char suffix = 'c';
    ...
    return 0;
}
```

こんな感じで定義する.

### 変数の使い方

```sample.c
#include <stdio.h>

int main(void){
    int i;
    int age = 19;
    double pi = 3.14;
    char suffix = 'c';
    i = 0;
    printf("age is %d\n", age);
    printf("pi is %lf\n", pi);
    printf("suffix is %c\n", suffix);
    return 0;
}
```

このように使うことができる.

ここで`%d`や`%lf`, `%c`についても説明する.

`%~`はフォーマット指定子と呼ぶ.

授業で使うフォーマット指定子一覧
|指定子|型|説明|
|:--:|:--:|:--:|
|%d|int|整数値を出力する|
|%lf|double|実数値を出力する|
|%c|char|1文字を出力する|
|%s|char []|文字列を出力する|

また, フォーマット指定子では表示桁数の指定をすることもできる.

`%<全体の幅>.<小数点以下の幅>lf`といった具合に指定する.
どちらか一方のみやどちらも省略することもできる.

`printf("%.2lf", 3.1415)`のように記述する.

`\n`はエスケープシーケンスと呼ぶ.

今は改行を意味する, ということだけ覚えていればよい.

## 演算子

表で表す.
|記号|意味|
|:--:|:--:|
|+|加算|
|-|減算|
|*|乗算|
|/|徐算|
|%|余り|

以下にサンプルを示す.
```sample.c
int main(void){
    int x, y, z;
    int a, b;
    x = 10;
    y = x + 20;
    z = y - x;
    a = y * 3;
    b = a / 5;
    c = x % y;
}
```

`x = x + 1`のようなコードは
`x += 1`と記述することもできる.

## 関数
### 関数の作り方

基本的な形は

`関数の戻り値の型 関数の名前(関数の引数){
処理 }`

である.

具体例を以下に示す.
以下のadd関数は引数を2つ受け取り, その合計を返す関数である.

```sample.c
#include <stdio.h>

int add(int a, int b);  // プロトタイプ宣言

int main(void){
    ...
    return 0;
}

int add(int a, int b){
    return a + b;
}

```

戻り値が`void`の関数の場合は`return`は要らない.

```sample.c
#include <stdio.h>

void show(int x);

int main(void){
    int x = 12;
    show(x);
    return 0;
}

void show(int x){
    printf("%d", x);
}
```


### 関数の使い方

使い方を以下に示す.

`add(x, y);`が関数呼び出しの部分である.

```sample.c
#include <stdio.h>

int add(int a, int b);  // プロトタイプ宣言

int main(void){
    int sum;
    int x, y;
    x = 10;
    y = 20;
    sum = add(x, y);
    printf("x + y = %d\n", sum);
    return 0;
}

int add(int a, int b){
    return a + b;
}

```

### プロトタイプ宣言とは
プロトタイプ宣言は __使う関数の名前だけを定義しておくためのもの__ である.

#### なぜプロトタイプ宣言を書くのか
実はプロトタイプ宣言を書かなくてもプログラムは動く.

例
```sample.c
#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int main(void){
    ...
    hoge = add(x, y);
    ...
}
```

しかし, この書き方はあまり推奨されない.

関数の数が1個や2個なら問題ないが, 100個や200個になったらどうか.

main関数が下の方にいき, 処理を確認するのが大変になる.

そのため, プロトタイプ宣言で関数の名前を宣言しておき, 下のほうで関数定義することが多い.

#### プロトタイプ宣言の方法

関数の処理を一切書かずに, 最後にセミコロン(;)をつけるだけである.

`int add(int x, int y);`や`void show(int data);`のように記述する.

## 条件分岐
### 条件分岐とは
文字通り, 条件によって分岐すること.
例えば, ~~がAならXの処理, BならYの処理みたいな感じ.

`if(条件式){処理}`と記述する.

#### 条件式とは
主に比較演算子や論理演算子を用いて表す.

|条件式|種類|説明|
|:--:|:--:|:--:|
|x == y|比較|xとyが同じか?|
|x != y|比較|xとyが異なるか?|
|x > y |比較|xはyより大きいか?|
|x >= y|比較|xはy以上か?|
|x < y |比較|xはy未満か?|
|x <= y|比較|xはy以下か?|
|x && y|論理|xかつyか?|
|x \|\| y|論理|xまたはyか?|
|!x  |論理|xではないか?(否定)|

### 書いてみる

以下にサンプルを示す.

```sample.c
#include <stdio.h>

int main(void){
    int x = 10;
    int y = 20;
    if(x==y){
        printf("x == y");
    }
    if(x > 0 && y > 0){
        printf("xとyは0より大きい");
    }
    if(!((x > 0)||(y > 0))){
        printf("xまたはyが0より大きくない");
    }
    return 0;
}
```

このように複雑な条件分岐も書ける.

また, if文の処理の中にif文を書くこともできる.

### 条件分岐2
if文だけでは,
>~~がAならXの処理, BならYの処理

は, 少しめんどくさいです.

以下は疑似言語のサンプル.
```
if(A){
    X;
}
if(B){
    Y;
}
```
となる.
もう少し楽に記述したい.

その時に使うのが`else`文である.

if文の条件式に合致しなければelse文の処理になる.


```
if(条件式){
    処理
} else {
    処理
}
```

以下にサンプルを示す.

```sample.c
#include <stdio.h>

int main(void){
    int x=90;
    int y=100;

    if((x>50)&&(y>100)){
        printf("ifの処理");
    } else {
        printf("elseの処理");
    }

    return 0;
}
```

より複雑な条件の場合は
`else if(条件式){処理}`と`if`と`else`を組み合わせることもできる.

```sample.c
#include <stdio.h>

int main(void){
    int x=90;
    int y=100;

    if((x>50)&&(y>100)){
        printf("ifの処理");
    } else if((x>50)&&(y>50)){
        printf("else ifの処理");
    } else {
        printf("elseの処理");
    }

    return 0;
}
```

このように記述できる.

## 条件分岐3
[条件分岐1](#条件分岐1)

[条件分岐2](#条件分岐2)

では, if-else文を紹介した.

ここでは, もう一つの条件分岐として, `switch文`を説明しよう.

まずは基本的な構文を示す.
```
switch(式){
    case 値1:
        処理
        break;
    case 値2:
        処理
        break;
    ...
    default:
        処理
        break;
}
```
と記述する.

`switch`文では式を評価し, その結果が`case`に合致した場合その処理が行われる.

どの`case`にも合致しなかった場合は, `default`の処理が実行される.

また, `break`を省略することも可能である.

省略した場合は, `break`があるまでどの`case`も実行されてしまう.

以下にサンプルコードを示す.

```sample.c
#include <stdio.h>

int main(void){
    int number = 0;

    switch(number){
        case 0:
            printf("number is 0");
            break;
        case 1:
            printf("number is 1");
            break;
        default:
            printf("number is not 0 or 1");
            break;
    }

    return 0;
}
```

## 繰り返し処理1
ここまで, 変数, 関数, 条件分岐について学んだ.

ここでは繰り返し処理について学んでいく.

繰り返し処理はループ処理ともいう.

ループには2つの命令(`for`, `while`)がある.
また, 2つの種類(有限, 無限)がある.

最初に説明するのは`for`ループだ.

### forループ
forループは文である.

`for(初期化; 条件式; 最後に必ず行う処理;){処理}`のように記述する.

初期化, 条件式, 最後に必ず行う処理は省略できる.
ただし, 省略した場合無限ループとなることがある.

ある処理を10回繰り返す場合のサンプルコードを示す.

```sample.c
#include <stdio.h>

int main(void){
    for(int i=0; i<10; i++){
        printf("%d ", i);
        // do something
    }
    return 0;
}
```

処理の流れ
1. iを定義し, 0で初期化する.
2. i<10かどうかを判定し, i<10であれば処理を行う.
3. 上記では変数iが表示される. また他の処理もあることがある.
4. iをインクリメントする.
5. 2に戻る.

サンプルコード中では
`for(int i=0; i<10; i++)`とfor文の初期化で変数を定義しているが,
```
int i;
for(i=0; i<10; i++){処理}
```
と記述しても良い.

#### インクリメントとは
インクリメントとは, 値を１ずつ増やす処理のこと.

`i += 1`(`i = i + 1`)と等価である.

反対に, デクリメント（値を１ずつ減らす）がある.

`i -= 1`(`i = i - 1`)と等価である.

### whileループ
主に回数が決まっていない繰り返し処理に使われる.

構文を以下に示す.
```
while(条件式){
    処理
}
```

以下に, ある処理を10回繰り返す場合のサンプルコードを示す.

```sample.c
#include <stdio.h>

int main(void){
    int i=0;
    while(i<10){
        printf("%d ", i);
        i++;
    }
    return 0;
}
```

上記の場合では, for文のほうが簡潔である.

以下に無限ループのコードを示す.
```sample.c
#include <stdio.h>

int main(void){
    while(1){
        printf("loop");
    }
    return 0;
}
```

条件式を`1`にすると無限ループとなる.

## 繰り返し処理2
[繰り返し処理1](#繰り返し処理1)では回数が決まったループ, 無限ループについて学んだ.

途中でループから抜け出したくなったときはどうしたらいいだろうか.

`break`文を使う.

`break`文は`for`文と`while`文の中でのみ使える.

以下にサンプルコードを示す.

```sample.c
#include <stdio.h>

int main(void){
    int x=5;

    for(int i=0; i<100; i++){
        break;  // 何もせずにループ終了
    }

    for(int i=0; i<10; i++){
        if(i>x){  // iよりxが小さければループ終了
            break;
        }
    }

    while(1){
        if(x>10){ // xが10より大きければループ終了
            break;
        }
        x++;
    }

    return 0;
}
```

このように記述する.

## 繰り返し処理3
[繰り返し処理1](#繰り返し処理1)

[繰り返し処理2](#繰り返し処理2)

では, 繰り返し処理の基本的なことについて学んだ.

繰り返し処理中に, ある条件のときだけ処理を飛ばしたいときがある.
そのときはどうすればいいだろうか.

その場合は, `continue`文が使える.

`break`文と使い方は同じだ.

以下にサンプルを示す.

```sample.c
#include <stdio.h>

int main(void){
    int x=5;
    int y=0;
    for(int i=0; i<10; i++){
        if(i==x){  // iとxが同じとき処理をスキップ
            continue;
        }
    }
    while(1){
        if(x==y){
            continue;
        }
        y++;
        printf("x=%d y=%d", x, y);
    }
    return 0;
}
```

このように記述する.

## 繰り返し処理4
[繰り返し処理1](#繰り返し処理1)

[繰り返し処理2](#繰り返し処理2)

[繰り返し処理3](#繰り返し処理3)

では, 繰り返し処理のほとんどを学んだ.

ここでは, `do-while`文について説明する.

`do-while`文は最低1回処理を行ってから繰り返すかを判定する.

構文を以下に示す.

```
do {
    処理
} while(条件式);
```

`do-while`文は条件式が下に来る. そのためあまり多用すべきではない.

しかし, 使ったほうが良い場面もある.

例えば, ユーザーに整数値を入力させるときである.

以下にサンプルコードを示す.
以下のコードはユーザーに自然数を入力してもらう.

```sample.c
#include <stdio.h>

int main(void){
    int num;
    do {
        // 自然数でなければ繰り返し入力させる.
        printf("自然数を入力してください: ");
        scanf("%d", &num);
    } while(num<0);

    printf("入力された値: %d\n", num);

    return 0;
}
```

ほんの数行, 特に内容が明確な場合は有用である.
コメントを書いておくのもコードを理解する手助けとなる.

## 配列
配列は, 同じ種類のデータをひとまとまりにして扱うことができる.

構文

`中に入っているデータの型 変数名[(要素数)] = {データ};` または
`中に入っているデータの型 変数名[要素数]`

int型の配列であるなら

`int array[3] = {1, 2, 3};` または `int array[] = {1, 2, 3};`

もしくは `int array[5];`

と表す.

要素数は初期化するときのみ省略することができる.


以下にサンプルを示す.
```sample.c
#include <stdio.h>

int main(void){
    int array[] = {1, 2, 3, 4, 5};
    return 0;
}
```

こういった具合である.

配列は繰り返し処理と相性が良い.

配列にはインデックスがあり, 左から0, 1, 2, ..., 要素数-1となる.

つまり, インデックスの範囲は0~要素数-1である.

例えば, 5個のデータが入ってる配列のインデックスの範囲は0~4ということである.

配列の要素にアクセスするには, インデックスを指定する.



以下に`for`ループと配列を使ったコードを示す.
```sample.c
#include <stdio.h>

int main(void){
    int array[] = {1, 2, 3, 4, 5};
    for(int i=0; i<5; i++){
        array[i] = array[i] * 10;
    }
    return 0;
}
```

上記のコードでは, arrayのi番目の要素を10倍してからi番目に代入している.

## プリプロセッサ

[#includeとは](##includeとは)でも少し説明したが,

ここでは`#define`と呼ばれるプリプロセッサについて説明する.

※マクロとも呼ばれることがある.

基本的な構文を示す.

`#define <replace> <element>`

これはプログラム中の`<replace>`と記述されている箇所を`<element>`に書き換える.

具体的な例を以下に示す.

```sample.c
#include <stdio.h>
#define MAX 50

int main(void){
    int array[MAX];
    ...
    return 0;
}
```

というコードはコンパイルされた時に
```sample.c
#include <stdio.h>
#define MAX 50

int main(void){
    int array[50];
    ...
    return 0;
}
```

と置き換えられている.

これもまた`for`ループと配列と相性が良い.

以下にコードを示す.

```sample.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int array[SIZE] = {1, 2, 3, 4, 5};
    for(int i=0; i<SIZE; i++){
        array[i] = array[i] * 10;
    }
    return 0;
}
```

上記のように記述することで,

`#define SIZE 5`の`5`を変更するだけで

他の行も変更されるので修正が楽になり,

ミスを犯しにくくなるというメリットがある.


## 文字列
文字列は文字型の配列である.

構文を示す.

- `char string[(要素数)] = "hoge";`
- `char string[(要素数)] = {'h', 'o', 'g', 'e', '\0'};`

などと表す.

`'\0'`はヌル文字と呼び, 文字列の終端を表す.

## 二次元配列及びn次元配列
二次元配列とは配列の配列.

n次元配列とは配列の配列の...配列.

配列が入っている配列のこと.

基本的に一次元配列と変わらない.

構文を示す.

`配列の型 配列の名前[(要素数)][要素数];`

`配列の型 配列の名前[(要素数)][要素数] = {{..., ..., ...}, {..., ..., ...}, ..., };`

などと表す.

九九を配列で表してみる.
以下にサンプルコードを示す.

```sample.c
#include <stdio.h>
#define X 9
#define Y 9

int main(void){
    int qq[Y][X];
    for(int i=1; i<=Y; i++){
        for(int j=1; j<=X; j++){
            qq[i][j] = i*j;
        }
    }
    return 0;
}
```

このように記述できる.


## 式と文の違いとは
簡単に言えば,

式は変数に代入できるもので,

文は変数に代入できないものです.

## 構造体
構造体とは, 複数の型のデータをひとまとまりにしたもの.

基本的な構文を示す.

```
struct 構造体の名前 {
    型 要素;
    型 要素;
    ...
};
```

以下に例を示す. プロフィールを構造体で表した.

```sample.c
#include <stdio.h>

struct profile {
    char name[20];
    int age;
    double weight;
};

int main(void){
    ...
    return 0;
}
```

構造体は変数として利用することができる.
内部のデータには`変数名.要素`とすることでアクセスできる.

サンプルコードを示す.
```sample.c
#include <stdio.h>

struct profile {
    char name[20];
    int age;
    double weight;
};

int main(void){
    struct profile jiro = {"jiro", 19, 64.7};
    /* もしくは
     * jiro.name = "jiro";
     * jiro.age = 19;
     * jiro.weight = 64.7;
     * このように初期化することもできる.
     */
    return 0;
}
```

### 構造体の配列
普通の配列と同様に扱うことができる.

以下に例を示す.
```sample.c
#include <stdio.h>

struct profile {
    char name[20];
    int age;
    double weight;
};

int main(void){
    struct profile students[3] = {
        {"jiro", 19, 64.7},
        {"taro", 18, 57.5},
        {"bob", 19, 74.1}
    };
    return 0;
}
```

### 構造体と関数
構造体は関数の引数や戻り値として使うことができる.

引数として使う場合 `struct 構造体の名前 内部で扱う名前`

戻り値として使う場合 `struct 構造体の名前 関数の名前`

として記述する


サンプルコードを示す.
```sample.c
#include <stdio.h>

struct profile {
    char name[20];
    int age;
    double weight;
};

void show_profile(struct profile people);
struct profile set_profile(struct profile people);

int main(void){
    struct profile students[3];
    for(int i=0; i<3; i++){
        students[i] = set_profile(students[i]);
        show_profile(students[i]);
    }
    return 0;
}

void show_profile(struct profile people){
    printf("name = %s\n", people.name);
    printf("age = %d\n", people.age);
    printf("weight = %lf\n", people.weight);
}

struct profile set_profile(struct profile people){
    scanf("%s", people.name);
    scanf("%d", &people.age);
    scanf("%lf", &people.weight);
    return people;
}
```

### typedef宣言
typedef宣言は, 型名を任意の型名にすることができる.

記述の方法を示す.

`typedef 型名 任意の型名;`

例として, int型をAGE型として宣言する.

`typedef int AGE;`

と記述する.

構造体でのtypedefのサンプルコードを以下に示す.

```sample.c
#include <stdio.h>

typedef struct {
    char name[20];
    int age;
    double weight;
} PROFILE;

int main(void){
    PROFILE students[3] = {
        {"jiro", 19, 64.7},
        {"taro", 18, 57.5},
        {"bob", 19, 74.1}
    };
    return 0;
}
```

`struct 構造体の名前`をそのまま置き換えることができる.

