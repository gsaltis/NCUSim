CC										= gcc
LINK									= gcc

CC_OPTS									= -c -g -Wall -IGeneralUtilities -IRPiBaseModules
LINK_OPTS								= -g -LGeneralUtilities -LRPiBaseModules

LIBS									= -lutils -lmongoose -llinenoise -lpthread
OBJS									= $(sort								\
										  	main.o								\
											UserInput.o							\
											HTTPServer.o						\
										   )

TARGET									= NCUSim

%.o										: %.c
										  @echo [CC] $@
										  @$(CC) $(CC_OPTS) $<

.PHONY									: all
all										: $(TARGET)

$(TARGET)								: $(OBJS)
										  @echo [LD] $(TARGET)
										  @$(LINK) $(LINK_OPTS) -o $(TARGET) $(OBJS) $(LIBS)

include									  depends.mk

.PHONY									: junkclean
junkclean								: 
										  rm -rf $(wildcard *~ *-bak) 

.PHONY									: clean
clean									: junkclean
										  rm -rf $(wildcard $(TARGET) $(OBJS)) 
