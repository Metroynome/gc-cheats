.PHONY: all release clean clean-release

all:
	$(MAKE) -f ${CURDIR}/../Makefile.v101.ntscu
	$(MAKE) -f ${CURDIR}/../Makefile.v200.ntscu
	$(MAKE) -f ${CURDIR}/../Makefile.pal
	$(MAKE) -f ${CURDIR}/../Makefile.ntscj

release:
	$(MAKE) -f ${CURDIR}/../Makefile.v101.ntscu release
	$(MAKE) -f ${CURDIR}/../Makefile.v200.ntscu release
	$(MAKE) -f ${CURDIR}/../Makefile.pal release
	$(MAKE) -f ${CURDIR}/../Makefile.ntscj release

clean:
	$(MAKE) -f ${CURDIR}/../Makefile.v101.ntscu clean
	$(MAKE) -f ${CURDIR}/../Makefile.v200.ntscu clean
	$(MAKE) -f ${CURDIR}/../Makefile.pal clean
	$(MAKE) -f ${CURDIR}/../Makefile.ntscj clean
	rm -f *.bin *.elf

clean-release:
	$(MAKE) -f ${CURDIR}/../Makefile.v101.ntscu clean-release
	$(MAKE) -f ${CURDIR}/../Makefile.v200.ntscu clean-release
	$(MAKE) -f ${CURDIR}/../Makefile.pal clean-release
	$(MAKE) -f ${CURDIR}/../Makefile.ntscj clean-release