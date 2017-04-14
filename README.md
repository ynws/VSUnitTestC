# VSUnitTestC

## VisualStudio GoogleTest MEMO

+ リンクエラー  
    参照 - テスト対象prj  
    C/C++ - コード生成 - MT/MTd

+ エントリー ポイントを定義しなければなりません。  
    リンカー - システム - サブシステム - コンソール

+ 未解決の外部シンボル main が..  
    リンカー - 入力 - 追加の依存ファイル  
    gmock.lib;gtestd.lib;gtest_maind.lib;

## TODO
* linux build convert
* jenkins build
* gcov
