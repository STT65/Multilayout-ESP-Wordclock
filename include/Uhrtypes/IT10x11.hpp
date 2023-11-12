#pragma once

#include "Uhrtype.hpp"

/*
 *           Layout Front
 *                COL
 *       X 9 8 7 6 5 4 3 2 1 0
 * ROW + - - - - - - - - - - -
 *  0  | S O N O R L E B O R E
 *  1  | È R Ľ U N A S D U E Z
 *  2  | T R E O T T O N O V E
 *  3  | D I E C I U N D I C I
 *  4  | D O D I C I S E T T E
 *  5  | Q U A T T R O C S E I
 *  6  | C I N Q U E A M E N O
 *  7  | E C U N O Q U A R T O
 *  8  | V E N T I C I N Q U E
 *  9  | D I E C I P M E Z Z A
 */

class It10x11_t : public iUhrType {
public:
    virtual LanguageAbbreviation usedLang() override {
        return LanguageAbbreviation::IT;
    };

    //------------------------------------------------------------------------------

    virtual const bool hasZwanzig() override { return true; }

    //------------------------------------------------------------------------------

    virtual const bool hasTwentyfive() override { return true; }

    //------------------------------------------------------------------------------

    void show(FrontWord word) override {
        switch (word) {

        case FrontWord::es_ist:
            // Sono Le
            setFrontMatrixWord(0, 7, 10);
            setFrontMatrixWord(0, 4, 5);
            break;

        case FrontWord::h_ein:
            // È ĽUNA
            setFrontMatrixWord(1, 10, 10);
            setFrontMatrixWord(1, 5, 8);
            break;

        case FrontWord::h_zwei:
            // Due
            setFrontMatrixWord(1, 1, 3);
            break;

        case FrontWord::h_drei:
            // Tre
            setFrontMatrixWord(2, 8, 10);
            break;

        case FrontWord::h_vier:
            // Quattro
            setFrontMatrixWord(5, 4, 10);
            break;

        case FrontWord::h_fuenf:
            // Cinque
            setFrontMatrixWord(6, 5, 10);
            break;

        case FrontWord::h_sechs:
            // Sei
            setFrontMatrixWord(5, 0, 2);
            break;

        case FrontWord::h_sieben:
            // Sette
            setFrontMatrixWord(4, 0, 4);
            break;

        case FrontWord::h_acht:
            // Otto
            setFrontMatrixWord(2, 4, 7);
            break;

        case FrontWord::h_neun:
            // Nove
            setFrontMatrixWord(2, 0, 3);
            break;

        case FrontWord::h_zehn:
            // Dieci
            setFrontMatrixWord(3, 6, 10);
            break;

        case FrontWord::h_elf:
            // Undici
            setFrontMatrixWord(3, 0, 5);
            break;

        case FrontWord::h_zwoelf:
            // Dodici
            setFrontMatrixWord(4, 5, 10);
            break;

        case FrontWord::m_fuenf:
            // Cinque
            setFrontMatrixWord(8, 0, 5);
            break;

        case FrontWord::m_zehn:
            // Dieci
            setFrontMatrixWord(9, 6, 10);
            break;

        case FrontWord::a_quarter:
        case FrontWord::viertel:
            // Un quarto
            setFrontMatrixWord(7, 7, 8);
            setFrontMatrixWord(7, 0, 5);
            break;

        case FrontWord::m_zwanzig:
            // Venti
            setFrontMatrixWord(8, 6, 10);
            break;

        case FrontWord::m_twentyfive:
            // Venticinque
            setFrontMatrixWord(8, 0, 10);
            break;

        case FrontWord::halb:
            // Mezza
            setFrontMatrixWord(9, 0, 4);
            break;

        case FrontWord::nach:
        case FrontWord::v_nach:
            // e
            setFrontMatrixWord(7, 10, 10);
            break;

        case FrontWord::vor:
        case FrontWord::v_vor:
            // Meno
            setFrontMatrixWord(6, 0, 3);
            break;

        case FrontWord::uhr:
            // Ore = Stunde(n)
            setFrontMatrixWord(0, 0, 2);
            break;

        default:
            break;
        };
    };
};

It10x11_t _it10x11;