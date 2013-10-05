GCC = gcc
CFLAGS = -g -Wall -Wshadow
LIBS = 
SOURCES = answer06.c pa06.c
TARGET = pa06
TESTN := $(shell seq 1 14)
#----------------------------------------------------
TESTS := $(addprefix test,${TESTN})

.PHONY : all build clean environment help testall $(TESTS)
.DEFAULT_GOAL := build

OBJF = obj
OBJS = $(patsubst %.c,$(OBJF)/%.o,$(SOURCES))

-include $(SOURCES:%=$(OBJF)/%.P)

all: | build testall

testall: | $(TESTS)

build: $(TARGET)

clean:
	@cd $(CURDIR)
	rm -rf $(TARGET) $(OBJF) outputs *.o

environment:
	@cd $(CURDIR)
	@mkdir -p outputs
	@mkdir -p $(OBJF)

help:	
	@echo

$(TARGET): $(OBJS) | environment
	$(GCC) $(CFLAGS) $(OBJS) $(LIBS) -o $@

$(OBJF)/%.o: %.c | environment
	@$(GCC) -MM $(CFLAGS) $< | sed 's,^\([^ ]\),$(OBJF)\/\1,g' | sed '$$ s,$$, \\,' > $(OBJF)/$<.P
	$(GCC) $(CFLAGS) -c -o $@ $<

${TESTS}: test%: $(TARGET) | environment
	@./bin/test.sh "$(TARGET)" $*

testall:pa06
	valgrind --leak-check=full --verbose --log-file=outputs/valgrind-log ./pa06 input output 
	./pa06 images/corrupt-testcases/bad-comment-len.ee264 outputs/corruptoutput1
	./pa06 images/corrupt-testcases/big-width-height.ee264 outputs/corruptoutput1
	./pa06 images/corrupt-testcases/check-magic-bits.ee264 outputs/corruptoutput1
	./pa06 images/corrupt-testcases/comment-has-no-null-byte.ee264 outputs/corruptoutput2
	./pa06 images/corrupt-testcases/height0.ee264 outputs/corruptoutput3
	./pa06 images/corrupt-testcases/height-wrong.ee264 outputs/corruptoutput4
	./pa06 images/corrupt-testcases/incomplete-header.ee264 outputs/corruptoutput5
	./pa06 images/corrupt-testcases/incomplete-image.ee264 outputs/corruptoutput6
	./pa06 images/corrupt-testcases/width0.ee254 outputs/corruptoutput7
	./pa06 images/01-unnormalized-smile.ee264 outputs/output1
	diff -w outputs/output1 expected/expected1 
	./pa06 images/02-unnormalized-cat-chess.ee264 outputs/output2
	diff -w outputs/output expected/expected2
	./pa06 images/-3-unnormalized-hawkes-bay-NZ.ee264 outputs/output3
	diff -w outputs/output3 expected/expected3
	./pa06 images/04-unnormalized-nelsonmandela.ee264 outputs/output4
	diff -w outputs/output expected/expected4
	./pa06 images/05-unnormalized-sagan-stamp.ee264 outputs/output5
	diff -w outputs/output5 expected/expected5
