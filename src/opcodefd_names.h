/*
 * Gearsystem - Sega Master System / Game Gear Emulator
 * Copyright (C) 2013  Ignacio Sanchez

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/ 
 * 
 */

#ifndef OPCODEFD_NAMES_H
#define	OPCODEFD_NAMES_H

#ifdef DISASM_GEARSYSTEM

static const char* kOPCodeFDNames[256] = {
    "NOP",
    "LD BC,nn",
    "LD (BC),A",
    "INC BC",
    "INC B",
    "DEC B",
    "LD B,n",
    "RLCA",
    "EX AF,AF'",
    "ADD IY,BC",
    "LD A,(BC)",
    "DEC BC",
    "INC C",
    "DEC C",
    "LD C,n",
    "RRCA",

    "DJNZ (PC+e)",
    "LD DE,nn",
    "LD (DE),A",
    "INC DE",
    "INC D",
    "DEC D",
    "LD D,n",
    "RLA",
    "JR n",
    "ADD IY,DE",
    "LD A,(DE)",
    "DEC DE",
    "INC E",
    "DEC E",
    "LD E,n",
    "RRA",

    "JR NZ,n",
    "LD IY,nn",
    "LD (nn),IY",
    "INC IY",
    "INC IYh (UNDOCUMENTED)",
    "DEC IYh (UNDOCUMENTED)",
    "LD IYh,n (UNDOCUMENTED)",
    "DAA",
    "JR Z,n",
    "ADD IY,IY",
    "LD IY,(nn)",
    "DEC IY",
    "INC IYl (UNDOCUMENTED)",
    "DEC IYl (UNDOCUMENTED)",
    "LD IYl,n (UNDOCUMENTED)",
    "CPL",

    "JR NC,n",
    "LD SP,nn",
    "LD (nn),A",
    "INC SP",
    "INC (IY+d)",
    "DEC (IY+d)",
    "LD (IY+d),n",
    "SCF",
    "JR C,n",
    "ADD IY,SP",
    "LD A,(nn)",
    "DEC SP",
    "INC A",
    "DEC A",
    "LDA,n",
    "CCF",

    "LD B,B",
    "LD B,C",
    "LD B,D",
    "LD B,E",
    "LD B,IYh (UNDOCUMENTED)",
    "LD B,IYl (UNDOCUMENTED)",
    "LD B,(IY+d)",
    "LD B,A",
    "LD C,B",
    "LD C,C",
    "LD C,D",
    "LD C,E",
    "LD C,IYh (UNDOCUMENTED)",
    "LD C,IYl (UNDOCUMENTED)",
    "LD C,(IY+d)",
    "LD C,A",

    "LD D,B",
    "LD D,C",
    "LD D,D",
    "LD D,E",
    "LD D,IYh (UNDOCUMENTED)",
    "LD D,IYl (UNDOCUMENTED)",
    "LD D,(IY+d)",
    "LD D,A",
    "LD E,B",
    "LD E,C",
    "LD E,D",
    "LD E,E",
    "LD E,IYh (UNDOCUMENTED)",
    "LD E,IYl (UNDOCUMENTED)",
    "LD E,(IY+d)",
    "LD E,A",

    "LD IYh,B (UNDOCUMENTED)",
    "LD IYh,C (UNDOCUMENTED)",
    "LD IYh,D (UNDOCUMENTED)",
    "LD IYh,E (UNDOCUMENTED)",
    "LD IYh,IYh (UNDOCUMENTED)",
    "LD IYh,IYl (UNDOCUMENTED)",
    "LD H,(IY+d)",
    "LD IYh,A (UNDOCUMENTED)",
    "LD IYl,B (UNDOCUMENTED)",
    "LD IYl,C (UNDOCUMENTED)",
    "LD IYl,D (UNDOCUMENTED)",
    "LD IYl,E (UNDOCUMENTED)",
    "LD IYl,IYh (UNDOCUMENTED)",
    "LD IYl,IYl (UNDOCUMENTED)",
    "LD L,(IY+d)",
    "LD IYl,A (UNDOCUMENTED)",

    "LD (IY+d),B",
    "LD (IY+d),C",
    "LD (IY+d),D",
    "LD (IY+d),E",
    "LD (IY+d),H",
    "LD (IY+d),L",
    "HALT",
    "LD (IY+d),A",
    "LD A,B",
    "LD A,C",
    "LD A,D",
    "LD A,E",
    "LD A,IYh (UNDOCUMENTED)",
    "LD A,IYl (UNDOCUMENTED)",
    "LD A,(IY+d)",
    "LD A,A",

    "ADD A,B",
    "ADD A,C",
    "ADD A,D",
    "ADD A,E",
    "ADD A,IYh (UNDOCUMENTED)",
    "ADD A,IYl (UNDOCUMENTED)",
    "ADD A,(IY+d)",
    "ADD A,A",
    "ADC A,B",
    "ADC A,C",
    "ADC A,D",
    "ADC A,E",
    "ADC A,IYh (UNDOCUMENTED)",
    "ADC A,IYl (UNDOCUMENTED)",
    "ADC A,(IY+d)",
    "ADC A,A",

    "SUB B",
    "SUB C",
    "SUB D",
    "SUB E",
    "SUB IYh (UNDOCUMENTED)",
    "SUB IYl (UNDOCUMENTED)",
    "SUB (IY+d)",
    "SUB A",
    "SBC A,B",
    "SBC A,C",
    "SBC A,D",
    "SBC A,E",
    "SBC A,IYh (UNDOCUMENTED)",
    "SBC A,IYl (UNDOCUMENTED)",
    "SBC A,(IY+d)",
    "SBC A,A",

    "AND B",
    "AND C",
    "AND D",
    "AND E",
    "AND IYh (UNDOCUMENTED)",
    "AND IYl (UNDOCUMENTED)",
    "AND (IY+d)",
    "AND A",
    "XOR B",
    "XOR C",
    "XOR D",
    "XOR E",
    "XOR IYh (UNDOCUMENTED)",
    "XOR IYl (UNDOCUMENTED)",
    "XOR (IY+d)",
    "XOR A",

    "OR B",
    "OR C",
    "OR D",
    "OR E",
    "OR IYh (UNDOCUMENTED)",
    "OR IYl (UNDOCUMENTED)",
    "OR (IY+d)",
    "OR A",
    "CP B",
    "CP C",
    "CP D",
    "CP E",
    "CP IYh (UNDOCUMENTED)",
    "CP IYl (UNDOCUMENTED)",
    "CP (IY+d)",
    "CP A",

    "RET NZ",
    "POP BC",
    "JP NZ,nn",
    "JP nn",
    "CALL NZ,nn",
    "PUSH BC",
    "ADD A,n",
    "RST ",
    "RET Z",
    "RET",
    "JP Z,nn",
    "CB PREFIX",
    "CALL Z,nn",
    "CALL nn",
    "ADC A,n",
    "RST 08H",

    "RET NC",
    "POP DE",
    "JP NC,nn",
    "OUT (n),A",
    "CALL NC,nn",
    "PUSH DE",
    "SUB n",
    "RST 10H",
    "RET C",
    "EXX",
    "JP C,nn",
    "IN A,(n)",
    "CALL C,nn",
    "DD PREFIX",
    "SBC A,n",
    "RST 18H",

    "RET PO",
    "POP IY",
    "JP PO,nn",
    "EX (SP),IY",
    "CALL PO,nn",
    "PUSH IY",
    "AND n",
    "RST 20H",
    "RET PE",
    "JP (IY)",
    "JP PE,nn",
    "EX DE,HL",
    "CALL PE,nn",
    "ED PREFIX",
    "XOR n",
    "RST 28H",

    "RET P",
    "POP AF",
    "JP P,nn",
    "DI",
    "CALL P,nn",
    "PUSH AF",
    "OR n",
    "RST 30H",
    "RET M",
    "LD SP,IY",
    "JP M,nn",
    "EI",
    "CALL M,nn",
    "FD PREFIX",
    "CP n",
    "RST 38H"
};

#endif

#endif	/* OPCODEFD_NAMES_H */

