target := liblist.a
objs := LinkedList.o

AR := ar rcs
CC := g++
CFlags := -Wall -Werror
CFlags += -g

ifneq ($(V), 1)
Q = @
endif

all: $(target)

#patsubst: function that pattern,replacement,text: finds whitespace seperated words in text
#that match pattern and replaces them with replacement. % is a wildcard
#in this case desp := LinkedList.d
deps := $(patsubst %.o,%.d,%(objs))
-include $(deps)
DEPFLAGS = -MMD -MF $(@:.o=.d)
#These options are for the preprocessor
# -MMD: 
# MF: 


$(target): $(objs)
	@echo "AR	$@"
	$(Q)$(AR) -o $@ $^

%.o: %.c
	@echo "CC	$@"
	$(Q)$(CC) $(CFlags) -c -o $@ $< $(DEPFLAGS)

clean:
	@echo "Clean"
	$(Q)rm -f $(target) $(objs) $(deps)