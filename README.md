*This project has been created as partof the 42 curriculum bydnakamot*

# Libft

## Description

Libftは、42Tokyoカリキュラムにおける基礎的なプロジェクトの一つです。このプロジェクトの目的は、一般的に使用されているlibc関数とユーティリティ関数を再実装することで、独自のC標準ライブラリを再構築することです。

このプロジェクトは大きく3つの部分に分かれています

1. 標準libc関数の再実装
2. ユーティリティ関数の実装
3. リンクリスト操作関数

目的は既存の機能を再現するだけでなく、以下の点を深く理解することにあります

* ポインター
* メモリー操作
* 文字列操作
* データ構造
* 低レベルプログラミングの概念
* C言語によるプラグラミング

最終的に `libft.a` という再利用可能な静的ライブラリを作成します

---

## Instructions

### Compilation

ライブラリーをコンパイル:

```bash id="z5q6vn"
make
```

以下のファイルが生成されます:

```bash id="w2m8pk"
libft.a
```

---

### Clean object files
オブジェクトファイルを削除します:

```bash id="h7r1lx"
make clean
```

---

### Remove object files and library
オブジェクトファイルというライブラリーを削除します:

```bash id="g4t9qw"
make fclean
```

---

### Recompile everything
すべて再コンパイルします:

```bash id="v8n3jc"
make re
```

---

### Usage

ヘッダーファイルをインクルードします:

```c id="x6k2mp"
#include "libft.h"
```

コンパイル例:

```bash id="r1f8zy"
cc main.c libft.a
```

使用例:

```c id="m5q7dn"
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello 42Tokyo");
	printf("%s\n", str);
	free(str);
	return (0);
}
```

---

## Resources　
### Documentation

参考資料

* The C Programming Language
* GNU C Library Documentation
* Linux man-pages
* 42 subject PDF
* cppreference.com

---

### AI Usage

AI は以下の目的で使用しました

* ポインタ挙動の理解
* linked list の理解
* edge case の確認
* メモリ管理の理解
* Norminette 対応
* デバッグ補助
* 関数分割や設計の理解

AI は学習補助として利用し、コード実装・修正・デバッグは自分で行いました


---

# Library Contents

# Part 1 — Libc Functions

標準 C ライブラリ関数を再実装しました

## Character checks
文字判定関数

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint

## String functions
文字列操作関数

* ft_strlen
* ft_strlcpy
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strdup
* ft_strnstr

## Memory functions
メモリ操作関数

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_calloc

## Conversion functions
数値変換関数

* ft_atoi

## Character conversion
文字列変換関数

* ft_tolower
* ft_toupper

---

# Part 2 — Additional Functions

ユーティリティ関数の実装

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_itoa
* ft_strmapi
* ft_striteri
* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

---

# Part 3 — Linked List Functions

linked list を操作する関数群を実装しました

使用した構造体:

```c id="n9v4tk"
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

実装関数:

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

このパートでは以下を学習しました

* 動的データ構造
* ノード管理
* リンクリストの構造
* 関数ポインター
* メモリ解放処理

---

# Technical Choices

## Static Library

The project outputs a static library (`libft.a`) using the `ar` command.

---

## Memory Management

動的メモリ管理には以下を使用しています

```c id="j6r0pw"
malloc
free
```

特に以下へ注意しました

* メモリリーク防止
* NULLチェック
* segmentation fault 防止
* malloc失敗時処理

---

## Norminette

42 独自のコーディング規約である Norminette に従って実装しました

主な制限：

* 関数25行以内
* 1行80文字以内
* 厳格なインデント
* 変数宣言ルール
* コーディングスタイル制限

---

