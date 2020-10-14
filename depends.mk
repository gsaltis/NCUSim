main.o: main.c GeneralUtilities/String.h GeneralUtilities/MemoryManager.h \
 main.h UserInput.h HTTPServer.h RPiBaseModules/mongoose.h \
 MainInitialize.c MainProcessCommandLine.c MainVerifyCommandLine.c \
 MainStartThreads.c MainTerminate.c MainDisplayHelp.c
UserInput.o: UserInput.c RPiBaseModules/linenoise.h \
 GeneralUtilities/MemoryManager.h GeneralUtilities/String.h UserInput.h \
 UserInputInitialize.c UserInputThread.c UserInputProcessCommandLine.c \
 UserInputCommandQuit.c UserInputCommandHelp.c
HTTPServer.o: HTTPServer.c RPiBaseModules/mongoose.h \
 GeneralUtilities/String.h HTTPServer.h HTTPServerInitialize.c \
 HTTPServerThread.c HTTPServerThreadInitialize.c HTTPEventHandler.c
