# 最大字典序子序列 (maxlex)
IONC 2023 Practice Problem (Created in Polygon Enviroment)

## Problem Statement

給你 $n$ 個字串: $s_1, s_2, s_3, \ldots, s_n$。

你可以選擇其中一部分的字串，並將他們按照編號的大小順序黏起來。

請問能得到的最大字典序的合成字串是什麼？

字典序的定義如下：先比較第一個字母的大小，如果第一個字母一樣，那麼比較第二個、第三個乃至後面的字母，直到比到能分出高下的位置（比如，```cat``` 的字典序比 ```can``` 大）。如果比到最後都沒分出高下，而兩個單詞不一樣長（比如，```sigh```} 和 ```sight```），那麼比較長的字典序比較大。

## Input Format

第一行包含一個正整數 $n$。

第二行包含 $n$ 個字串： $s_1 \ \  s_2 \ \  \ldots \ \  s_n$。

## Output Format

輸出最大字典序的合成字串。

## Constraints
$\sum_{i=1}^n |s_i| \le 10^6$。
輸入的字串都只由小寫英文字母組成。

## Example

### Example Input
```
6
fdc fb fd fdc fde fb
```
### Example Output
```
fdfdefb
```
