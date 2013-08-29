#!/bin/sh

# gs -r600 -q -dNOPROMPT -dSAFER -sDEVICE=pbmraw -sOutputFile=- | 
`dirname $0`/captfilter \
	--CNTblHalftone=0 --CNTblModel=1 --PageSize=A4 \
	--MediaType=PlainPaper --InputSlot=0 --Collate=False \
	--Resolution=600 --CNTonerSaving=True
