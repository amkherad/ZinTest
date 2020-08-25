#ifndef LEXER_TOKEN_TYPES_HPP
#define LEXER_TOKEN_TYPES_HPP

enum LexerTokenTypes
{

    Nop = 0,                       // Not (an) Operand
                                   //
    Eof = 1,                       // End of File
                                   //
    Semicolon = 5,                 // ;
                                   //
    DoubleQuotation = 6,           // "
    SingleQuotation = 7,           // '
                                   //
    BackTick = 8,                  // `
                                   //
    Equals = 10,                   // ==
    NotEquals = 11,                // !=
                                   //
    GreaterEqual = 15,             // >=
    Greater = 16,                  // >
                                   //
    LessEqual = 20,                // <=
    Less = 21,                     // <
                                   //
    Assignment = 25,               // =
                                   //
    Minus = 30,                    // -
    Plus = 31,                     // +
    Asterisk = 32,                 // *
    Division = 33,                 // /
    Increment = 34,                // ++
    Decrement = 35,                // --
    Reminder = 36,                 // %
    BackSlash = 37,                // \
                                   //
    Not = 50,                      // !
    BitwiseNot = 51,               // ~
                                   //
    AndLogical = 52,               // &&
    And = 53,                      // &
    OrLogical = 54,                // ||
    Or = 55,                       // |
                                   //
    OpenParenthesis = 60,          // (
    CloseParenthesis = 61,         // )
                                   //
    OpenBrace = 65,                // {
    CloseBrace = 66,               // }
                                   //
    OpenBracket = 70,              // [
    CloseBracket = 71,             // ]
                                   //
    Dot = 75,                      // .
    Comma = 76,                    // ,
    Colon = 77,                    // :
                                   //
    QuestionMark = 80,             // ?
    NullCoalesce = 81,             // ??
    Ellipsis = 82,                 // ...
                                   //
    Comment = 85,                  // //
    MultiLineCommentOpen = 86,     // /*
    MultiLineCommentClose = 87,    // */
                                   //
    IdentifierName = 90,           // test
                                   //
    PreprocessorIf = 95,           // #if
    PreprocessorElseIf = 96,       // #elseif
    PreprocessorElse = 97,         // #else
    PreprocessorEndIf = 98,        // #endif
                                   //
    If = 110,                      // if
    Else = 111,                    // else
                                   //
    Switch = 115,                  // switch
    Case = 116,                    // case
    Default = 117,                 // default
                                   //
    For = 120,                     // for
    ForEach = 121,                 // foreach
    While = 122,                   // while
    Do = 123,                      // do
    Loop = 124,                    // loop
                                   //
    In = 125,                      // in
                                   //
    DataType = 150,                // var,int,double,float,long,byte,char,object,variant,void
    Null = 151,                    // null
    True = 152,                    // true
    False = 153,                   // false
    StringValue = 155,             // "STRING_VALUE"
    StringValueInterpolated = 156, // "STRING_VALUE{INTERPOLATED}"
    CharacterValue = 158,          // 'c'
                                   //
    Return = 150,                  // return
    Function = 151,                // function
                                   //
    Class = 160,                   // class
    New = 161,                     // new
    Container = 165,               // container
    Test = 166

}

#endif //LEXER_TOKEN_TYPES_HPP