main.o: main.c main.h UserInput.h HTTPServer.h MainInitialize.c \
 MainProcessCommandLine.c MainVerifyCommandLine.c MainStartThreads.c \
 MainTerminate.c MainDisplayHelp.c
UserInput.o: UserInput.c UserInput.h UserInputInitialize.c \
 UserInputThread.c UserInputProcessCommandLine.c UserInputCommandQuit.c \
 UserInputCommandHelp.c
HTTPServer.o: HTTPServer.c HTTPServer.h main.h HTTPServerInitialize.c \
 HTTPServerThread.c HTTPServerThreadInitialize.c HTTPEventHandler.c
