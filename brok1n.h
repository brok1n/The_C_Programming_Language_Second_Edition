//
// Created by brok1n on 16-5-27.
//

#ifndef THECPROGRAMMINGLANGUAGESECOONDEDITION_BROK1N_H
#define THECPROGRAMMINGLANGUAGESECOONDEDITION_BROK1N_H


int bConvertStrToInteger( const char* str );  //convert str to integer
const char* bConvertIntToStr( int num );   //convert num to string
int bToUpper( int c );    //convert c to upper
int bToLower( int c );    //convert c to lower
char* bToUpperStr( char* str ); //convert str to upper string
char* bToLowerStr( char* str ); //convert str to lower string
const char* bReversal( const char* str );//reversal str
int bStrLen( const char* str ); //return str lenght
int bStrCat( char* str1, char* str2 );//append str2 to str1 return new string len
int bIndexOf( const char* str, char c ); //find c in str
int bIndexOfStr( const char* str1, const char* str2 );// find str2 in str1
const char* bSubStr( const char* str, int len );//cut str from  0 to len
const char* bSubStrOffset( const char* str, int start, int len );//cut str from  start to len



#endif //THECPROGRAMMINGLANGUAGESECOONDEDITION_BROK1N_H
