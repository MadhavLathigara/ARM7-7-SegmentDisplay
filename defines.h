//defines.h
#define WRITEBYTE(WORD,BITSTARTPOS,BYTE) WORD=((WORD&~(0xFF<<BITSTARTPOS))|(BYTE<<BITSTARTPOS))
#define SETBIT(WORD,BITPOS) WORD|=1<<BITPOS
#define CLRBIT(WORD,BITPOS) WORD&=~(1<<BITPOS)
#define WRITEBIT(WORD,BITPOS,BIT) WORD=((WORD &~(1<<BITPOS))|(BIT<<BITPOS))
#define READBIT(WORD,BITPOS) ((WORD>>BITPOS)&1)
#define SSETBIT(WORD,BITPOS) WORD=1<<BITPOS
#define SCLRBIT(WORD,BITPOS) WORD=1<<BITPOS
#define READWRITEBIT(WORD,DBIT,SBIT) WORD=((WORD&~(1<<DBIT))|((WORD>>SBIT)&1)<<DBIT)
#define TOOGLEBIT(WORD,BITPOS) WORD^=1<<BITPOS

//7 segment
#define CA7SEG_2_MUX 8 // a to dp @p0.8 to p0.15
#define CA7SEG_4_MUX 8 // a to dp @p0.8 to p0.15
#define DSEL1 16 // cooman of seg1
#define DSEL2 17 // cooman of seg2
#define DSEL3 18 // cooman of seg3
#define DSEL4 19 // cooman of seg4

