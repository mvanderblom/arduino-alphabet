#include "Alphabet.h"
#include "AbstractByteConsumer.h"

void Alphabet::toBinary(String aString, AbstractByteConsumer* consumer) {
	for (unsigned int x = 0; x < aString.length(); x++) {
		switch (aString[x]) {
		case ' ':
			consumer->consumeBytes(Alphabet::space, 3);
			break;
		case '!':
			consumer->consumeBytes(Alphabet::exclamation, 3);
			break;
		case '?':
			consumer->consumeBytes(Alphabet::question, 5);
			break;
		case '/':
			consumer->consumeBytes(Alphabet::slash, 5);
			break;
		case '\\':
			consumer->consumeBytes(Alphabet::backslash, 5);
			break;
		case '.':
			consumer->consumeBytes(Alphabet::dot, 5);
			break;
		case ',':
			consumer->consumeBytes(Alphabet::comm, 5);
			break;
		case ':':
			consumer->consumeBytes(Alphabet::colon, 5);
			break;
		case ';':
			consumer->consumeBytes(Alphabet::scolon, 5);
			break;
		case '(':
			consumer->consumeBytes(Alphabet::lpar, 5);
			break;
		case ')':
			consumer->consumeBytes(Alphabet::rpar, 5);
			break;
		case '[':
			consumer->consumeBytes(Alphabet::lbra, 5);
			break;
		case ']':
			consumer->consumeBytes(Alphabet::rbra, 5);
			break;
		case '{':
			consumer->consumeBytes(Alphabet::lpar, 5);
			break;
		case '}':
			consumer->consumeBytes(Alphabet::rpar, 5);
			break;
		case '<':
			consumer->consumeBytes(Alphabet::lab, 5);
			break;
		case '>':
			consumer->consumeBytes(Alphabet::rab, 5);
			break;
		case '~':
			consumer->consumeBytes(Alphabet::tilde, 5);
			break;
		case '`':
			consumer->consumeBytes(Alphabet::backtick, 5);
			break;
		case '\'':
			consumer->consumeBytes(Alphabet::squo, 5);
			break;
		case '"':
			consumer->consumeBytes(Alphabet::dquo, 5);
			break;
		case '^':
			consumer->consumeBytes(Alphabet::dakje, 5);
			break;
		case '_':
			consumer->consumeBytes(Alphabet::underscore, 5);
			break;
		case '#':
			consumer->consumeBytes(Alphabet::hash, 5);
			break;
		case '$':
			consumer->consumeBytes(Alphabet::doll, 5);
			break;
		case '%':
			consumer->consumeBytes(Alphabet::perc, 5);
			break;
		case '&':
			consumer->consumeBytes(Alphabet::ampe, 5);
			break;
		case '*':
			consumer->consumeBytes(Alphabet::star, 5);
			break;
		case '+':
			consumer->consumeBytes(Alphabet::plus, 5);
			break;
		case '-':
			consumer->consumeBytes(Alphabet::dash, 5);
			break;
		case '|':
			consumer->consumeBytes(Alphabet::pipe, 5);
			break;
		case '=':
			consumer->consumeBytes(Alphabet::equals, 5);
			break;
		case '@':
			consumer->consumeBytes(Alphabet::at, 5);
			break;

		case 'A':
			consumer->consumeBytes(Alphabet::A, 5);
			break;
		case 'a':
			consumer->consumeBytes(Alphabet::a, 5);
			break;
		case 'B':
			consumer->consumeBytes(Alphabet::B, 5);
			break;
		case 'b':
			consumer->consumeBytes(Alphabet::b, 5);
			break;
		case 'C':
			consumer->consumeBytes(Alphabet::C, 5);
			break;
		case 'c':
			consumer->consumeBytes(Alphabet::c, 5);
			break;
		case 'D':
			consumer->consumeBytes(Alphabet::D, 5);
			break;
		case 'd':
			consumer->consumeBytes(Alphabet::d, 5);
			break;
		case 'E':
			consumer->consumeBytes(Alphabet::E, 5);
			break;
		case 'e':
			consumer->consumeBytes(Alphabet::e, 5);
			break;
		case 'F':
			consumer->consumeBytes(Alphabet::F, 5);
			break;
		case 'f':
			consumer->consumeBytes(Alphabet::f, 5);
			break;
		case 'G':
			consumer->consumeBytes(Alphabet::G, 5);
			break;
		case 'g':
			consumer->consumeBytes(Alphabet::g, 5);
			break;
		case 'H':
			consumer->consumeBytes(Alphabet::H, 5);
			break;
		case 'h':
			consumer->consumeBytes(Alphabet::h, 5);
			break;
		case 'I':
			consumer->consumeBytes(Alphabet::I, 5);
			break;
		case 'i':
			consumer->consumeBytes(Alphabet::i, 5);
			break;
		case 'J':
			consumer->consumeBytes(Alphabet::J, 5);
			break;
		case 'j':
			consumer->consumeBytes(Alphabet::j, 5);
			break;
		case 'K':
			consumer->consumeBytes(Alphabet::K, 5);
			break;
		case 'k':
			consumer->consumeBytes(Alphabet::k, 5);
			break;
		case 'L':
			consumer->consumeBytes(Alphabet::L, 5);
			break;
		case 'l':
			consumer->consumeBytes(Alphabet::l, 5);
			break;
		case 'M':
			consumer->consumeBytes(Alphabet::M, 5);
			break;
		case 'm':
			consumer->consumeBytes(Alphabet::m, 5);
			break;
		case 'N':
			consumer->consumeBytes(Alphabet::N, 5);
			break;
		case 'n':
			consumer->consumeBytes(Alphabet::n, 5);
			break;
		case 'O':
			consumer->consumeBytes(Alphabet::O, 5);
			break;
		case 'o':
			consumer->consumeBytes(Alphabet::o, 5);
			break;
		case 'P':
			consumer->consumeBytes(Alphabet::P, 5);
			break;
		case 'p':
			consumer->consumeBytes(Alphabet::p, 5);
			break;
		case 'Q':
			consumer->consumeBytes(Alphabet::Q, 5);
			break;
		case 'q':
			consumer->consumeBytes(Alphabet::q, 5);
			break;
		case 'R':
			consumer->consumeBytes(Alphabet::R, 5);
			break;
		case 'r':
			consumer->consumeBytes(Alphabet::r, 5);
			break;
		case 'S':
			consumer->consumeBytes(Alphabet::S, 5);
			break;
		case 's':
			consumer->consumeBytes(Alphabet::s, 5);
			break;
		case 'T':
			consumer->consumeBytes(Alphabet::T, 5);
			break;
		case 't':
			consumer->consumeBytes(Alphabet::t, 5);
			break;
		case 'U':
			consumer->consumeBytes(Alphabet::U, 5);
			break;
		case 'u':
			consumer->consumeBytes(Alphabet::u, 5);
			break;
		case 'V':
			consumer->consumeBytes(Alphabet::V, 5);
			break;
		case 'v':
			consumer->consumeBytes(Alphabet::v, 5);
			break;
		case 'W':
			consumer->consumeBytes(Alphabet::W, 5);
			break;
		case 'w':
			consumer->consumeBytes(Alphabet::w, 5);
			break;
		case 'X':
			consumer->consumeBytes(Alphabet::X, 5);
			break;
		case 'x':
			consumer->consumeBytes(Alphabet::x, 5);
			break;
		case 'Y':
			consumer->consumeBytes(Alphabet::Y, 5);
			break;
		case 'y':
			consumer->consumeBytes(Alphabet::y, 5);
			break;
		case 'Z':
			consumer->consumeBytes(Alphabet::Z, 5);
			break;
		case 'z':
			consumer->consumeBytes(Alphabet::z, 5);
			break;
		case '0':
			consumer->consumeBytes(Alphabet::zero, 5);
			break;
		case '1':
			consumer->consumeBytes(Alphabet::one, 5);
			break;
		case '2':
			consumer->consumeBytes(Alphabet::two, 5);
			break;
		case '3':
			consumer->consumeBytes(Alphabet::three, 5);
			break;
		case '4':
			consumer->consumeBytes(Alphabet::four, 5);
			break;
		case '5':
			consumer->consumeBytes(Alphabet::five, 5);
			break;
		case '6':
			consumer->consumeBytes(Alphabet::six, 5);
			break;
		case '7':
			consumer->consumeBytes(Alphabet::seven, 5);
			break;
		case '8':
			consumer->consumeBytes(Alphabet::eight, 5);
			break;
		case '9':
			consumer->consumeBytes(Alphabet::nine, 5);
			break;
		default:
			consumer->consumeBytes(Alphabet::unknown, 5);
		}
	}
	consumer->consumeBytes(Alphabet::space, 3);
}
