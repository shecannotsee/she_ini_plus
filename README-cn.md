这是一个基于ini格式扩展的文件类型解析器

#### 1.基本的ini

对于基本的ini格式

```ini
; Comments
[section1]
key = value
[section2]
key = value
```

上述已经表示了基本ini格式的所有语法了

section和key-value有着一对多的关系

#### 2.简易ini的缺陷

简易的ini文件很难做到复杂关系的处理，并且很难做到模块化的支持

为了支持复杂关系处理与模块化支持，我想通过增加key的type来统一解决该问题

#### 3.对于缺陷的修复

root.ini

```ini
[section1]
// 添加子模块,处理多级关系
module:node.ini = scetion1-1
// 二进制数据,使用base64进行转义,转义回来为she_ini_plus
binary:she_ini_plus = c2hlX2luaV9wbHVz
keyxxx = 114514

[section2]
key = value
// 引用同级目录section1中的keyxxx,建立复杂的多级关系
&section1:keyxxx
```

node.ini

```ini
[section1-1]
key = value
```

以上的对象类型可以总结如下，用()来处理查找路径，不带()则是最后的值

在手动加载了root.ini文件后可以用以下路径来获取值

(section1)-(node.ini)-(section1-1)-(key)-value

(section1)-(she_ini_plus)-c2hlX2luaV9wbHVz

(section1)-(keyxxx)-114514

(section2)-(key)-value

(section2)-(keyxxx)-114514

在手动加载了node.ini文件后可以用以下路径来获取值

(section1-1)-(key)-value



#### 4.一些其他的修改

- `;`不再用于表示注释，用类C语言的`//`来处理注释，并且`;`用来做结束符号处理
- 让我想想