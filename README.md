# これはなに?
プログラミング基礎及び演習の提出コードのまとめです。

# いろいろ
- 自分の書いたコードを保存しているだけです.
- 万が一,利用する場合は個人の責任でお願いします.

# C言語入門及び基礎
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

## #includeって何?
`#include`はプリプロセッサの一種である.
プリプロセッサは, コンパイル時に処理が行われる.

`#include <stdio.h>`は __stdio.h__ というファイルを読み込んでいる.

拡張子が.hのファイルはヘッダーファイルと呼ばれ、プロトタイプ宣言のみを記述したC言語のファイルのことである.

stdioとはstandard input/output の略で、日本語では標準入出力ということになる.
つまり, printf関数やscanf関数などのプロトタイプ宣言があるファイルということである.

プリプロセッサは, コンパイル時に処理が行われると言ったが, 具体的には単にファイルを展開するだけである.

つまり
```sample.c
#include <stdio.h>
```
は
```sample.c
printf(...){};
scanf(...){};
.
.
.
```
に置き換えられるといった具合である.

## 型（タイプ）について
次に考えなければならないのは, 型である.
どこで使われているか?

主に
+ 変数
+ 関数の引数
+ 関数の戻り値

に使われている

授業で使われている型一覧
|型|中身|日本語|
|:--:|:--:|:--:|
|int|32bit整数|整数値型|
|double|64bit実数|浮動小数点数型|
|char|1文字|文字型|
|void|何もなし|特別な値|

なお, voidは __関数の戻り値__ にのみ使われる.

## 変数とは何ぞや?
上記で変数という言葉が出てきた.

ここでちゃんと説明するので安心してほしい.

### 変数とは(Wikipediaより引用)
>プログラミングにおける変数（へんすう、英: variable）とは、高水準言語のプログラムのソースコードにおいて、扱うデータを読み書きする記憶域 (storage) のことであり、固有の名前（識別子）によって識別される。変数を用いることで、データを一定期間記憶し必要なときに利用することができる。高水準言語において、変数は記憶装置（メモリ）を抽象化する役割を果たす。
>一人一人の人間が異なる名前によって区別されるように、変数も個々の名前によって区別される。これにより、プログラム上で複数のデータを容易に識別・管理することができる。変数の識別子 (identifier) のことを変数名 (variable name) という。一般に、変数が表すデータをその変数の値（あたい、英: value）という。

つまり, データ（数値や文字など）を必要なときに利用するために用いるものということである.

名前付きの箱に物を入れるイメージである.

### 変数の定義の仕方

C言語では

`変数の型 変数の名前 = 変数の中身;`

と記述する.

具体例を以下に示す.

```sample.c
#include <stdio.h>

int main(void){
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
    int age = 19;
    double pi = 3.14;
    char suffix = 'c';
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

## 関数を作ってみる
