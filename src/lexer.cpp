
#line 1 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"
#include "lexer.h"
#include <cstdlib>
#include <string>




#line 11 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
static const char _Lexer_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	3
};

static const char _Lexer_key_offsets[] = {
	0, 0, 8
};

static const char _Lexer_trans_keys[] = {
	32, 95, 9, 13, 65, 90, 97, 122, 
	45, 95, 48, 57, 65, 90, 97, 122, 
	0
};

static const char _Lexer_single_lengths[] = {
	0, 2, 2
};

static const char _Lexer_range_lengths[] = {
	0, 3, 3
};

static const char _Lexer_index_offsets[] = {
	0, 0, 6
};

static const char _Lexer_indicies[] = {
	0, 2, 0, 2, 2, 1, 2, 2, 
	2, 2, 2, 3, 0
};

static const char _Lexer_trans_targs[] = {
	1, 0, 2, 1
};

static const char _Lexer_trans_actions[] = {
	5, 0, 0, 7
};

static const char _Lexer_to_state_actions[] = {
	0, 1, 0
};

static const char _Lexer_from_state_actions[] = {
	0, 3, 0
};

static const char _Lexer_eof_trans[] = {
	0, 0, 4
};

static const int Lexer_start = 1;
static const int Lexer_first_final = 1;
static const int Lexer_error = 0;

static const int Lexer_en_main = 1;


#line 30 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"





Calc::Lexer::Lexer(char const* p_, char const* pe_)
    : p(p_), pe(pe_), eof(pe_)
{
    
#line 81 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
	{
	cs = Lexer_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 39 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"
}


Calc::Parser::token_type Calc::Lexer::lex(Parser::semantic_type* val)
{
    Parser::token_type ret = Parser::token::END;
    
#line 97 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_acts = _Lexer_actions + _Lexer_from_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 1:
#line 1 "NONE"
	{ts = p;}
	break;
#line 118 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
		}
	}

	_keys = _Lexer_trans_keys + _Lexer_key_offsets[cs];
	_trans = _Lexer_index_offsets[cs];

	_klen = _Lexer_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _Lexer_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _Lexer_indicies[_trans];
_eof_trans:
	cs = _Lexer_trans_targs[_trans];

	if ( _Lexer_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _Lexer_actions + _Lexer_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 2:
#line 26 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"
	{te = p+1;}
	break;
	case 3:
#line 20 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"
	{te = p;p--;{
                    ret = Parser::token::IDENTIFIER;
                    *val = (char*)std::string(ts, te).c_str();
                    {p++; goto _out; }
                }}
	break;
#line 196 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
		}
	}

_again:
	_acts = _Lexer_actions + _Lexer_to_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 0:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 209 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.cpp"
		}
	}

	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _Lexer_eof_trans[cs] > 0 ) {
		_trans = _Lexer_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	_out: {}
	}

#line 46 "../../../../../../pdl/src/pdlCompiler/src/sandbox/ragel-and-bison/src/lexer.rl"
    return ret;
}
























































