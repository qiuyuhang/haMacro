//
// Created by 邱宇航 on 2017/3/20.
//

#ifndef HAMACRO_HAMACRO_H
#define HAMACRO_HAMACRO_H


//#define alignas             //(C++11 起)
//#define alignof             //(C++11 起)
//#define and
//#define and_eq
//#define asm
//#define atomic_cancel       //(TM TS)
//#define atomic_commit       //(TM TS)
//#define atomic_noexcept     //(TM TS)
//#define auto//(1)
//#define bitand
//#define bitor
//#define bool
//#define break
//#define case
//#define catch
//#define char
//#define char16_t            //(C++11 起)
//#define char32_t            //(C++11 起)
//#define class
//#define compl
//#define concept             //(概念 TS)
//#define const
//#define constexpr           //(C++11 起)
//#define const_cast
//#define continue
//#define decltype            //(C++11 起)
//#define default             //(1)
//#define delete              //(1)
//#define do
//#define double
//#define dynamic_cast
//#define else
//#define enum
//#define explicit
//#define export              //(1)
//#define extern              //(1)
//#define false
//#define float
//#define for
//#define friend
//#define goto
//#define if
//#define import              //(模块 TS)
//#define inline              //(1)
//#define int
//#define long
//#define module              //(模块 TS)
//#define mutable             //(1)
//#define namespace
//#define new
//#define noexcept            //(C++11 起)
//#define not
//#define not_eq
//#define nullptr             //(C++11 起)
//#define operator
//#define or
//#define or_eq
//#define private
//#define protected
//#define public
//#define register            //(2)
//#define reinterpret_cast
//#define requires            //(概念 TS)
//#define return
//#define short
//#define signed
//#define sizeof              //(1)
//#define static
//#define static_assert       //(C++11 起)
//#define static_cast
//#define struct              //(1)
//#define switch
//#define synchronized        //(TM TS)
//#define template
//#define this
//#define thread_local        //(C++11 起)
//#define throw
#define 吼啊 true
//#define try
//#define typedef
//#define typeid
//#define typename
//#define union
//#define unsigned
//#define using               //(1)
//#define virtual
//#define void
//#define volatile
//#define wchar_t
//#define while
//#define xor
//#define xor_eq
//
////(1) - 在 C++11 中含义发生了变化或者增加了新含义。注：关键字 export 也在模块 TS 中使用。
////(2) - 在 C++17 中含义发生了变化。
////注意，and、bitor、or、xor、compl、bitand、and_eq、or_eq、xor_eq、not 与 not_eq（以及双连符 <%、%>、<:、:>、%: 与 %:%:）提供标准记号的替代表示形式。
////除了关键字，还有两个“具有特殊意义的标识符”，它们可以用作对象或函数的名字，但在某些语境中具有特殊的意义。
//
//
//#define override (C++11)
//#define final (C++11)
//#define transaction_safe (TM TS)
//#define transaction_safe_dynamic (TM TS)
//
////此外，在任何位置包含双下划线（__）的任何标识符，或以一个下划线后接一个大写字母开头的任何标识符总是被保留的，而以一个下划线开头的标识符则在全局命名空间中保留作为名字的使用。参见标识符页面中的详细解释。
////命名空间 std 用于放置 C++ 标准库中的名字。有关向其添加名字的规则，参见扩充 std 命名空间。
////名字 posix 被保留未来用作顶层命名空间的名字。如果程序在该命名空间中声明或定义任何东西，都具有未定义的行为。	(C++11 起)
////在预处理指令中，下列记号会被预处理器识别：
//
//
//#define if
//#define elif
//#define else
//#define endif
//#define defined
//
//#define ifdef
//#define ifndef
//#define define
//#define undef
//
//#define include
//#define line
//#define error
//#define pragma
//
//
////下列标记会被预处理器在预处理指令之外识别：
//#define _Pragma(C++11 起)


#endif //HAMACRO_HAMACRO_H
