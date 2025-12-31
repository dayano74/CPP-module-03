# CPP-Module-03

## ex01

### protected とは何か

- protected メンバーは、そのクラス自身およびそのクラスを継承した派生クラスからアクセス可能ですが、外部のコードからはアクセスできない。
- 外部には隠したいが、継承先には使わせたい場合に利用される
- アクセス範囲はpublicとprivateの中間に位置する
  - public: どこからでもアクセス可能
  - protected: クラス自身および派生クラスからアクセス可能
  - private: クラス自身からのみアクセス可能



## ex03

### virtual とは何か

- プログラミングでの「仮想（virtual）」は
  - 実体が１つだけで、複数ヶ所から共有されるというイメージ
  - バーチャル＝架空」ではなく、「間接的にアクセスする共有リソース」という意味

### なぜ FragTrap・ScavTrap クラスは ClapTrap を virtual 継承しているのか

- virtual 継承は、多重継承でダイヤモンド問題（基底クラスが複数回継承される問題）を解決するために使用される
- virtual 継承は、ダイヤモンド継承で基底クラスを1つだけにして曖昧さを解消するために使われる
- virtual をつけないと、multiple base-class subobjects of type 'ClapTrap' のようなエラーが発生する
```
> make run
c++ -Wall -Wextra -Werror -std=c++98 -pedantic -Iincs -MMD -MP -MF deps/main.d -c srcs/main.cpp -o objs/main.o
srcs/main.cpp:33:36: error: non-static member 'takeDamage' found in multiple base-class subobjects of type 'ClapTrap':
    class DiamondTrap -> class FragTrap -> class ClapTrap
    class DiamondTrap -> class ScavTrap -> class ClapTrap
  for (int i = 0; i < 110; ++i) d4.takeDamage(1);
                                   ^
incs/ClapTrap.hpp:25:8: note: member found by ambiguous name lookup
  void takeDamage(unsigned int amount);
       ^
1 error generated.
make: *** [Makefile:28: objs/main.o] Error 1
```


