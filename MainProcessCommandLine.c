/*****************************************************************************!
 * Function : MainProcessCommandLine
 *****************************************************************************/
void
MainProcessCommandLine
(int argc, char** argv)
{
  string								command;
  int									i;

  for ( i = 1 ; i < argc ; i++ ) {
	command = argv[i];

	//
	if ( StringEqualsOneOf(command, "-h", "--help", NULL) ) {
	  MainDisplayHelp();
	  exit(EXIT_SUCCESS);
	}

	//
	if ( StringEqualsOneOf(command, "-w", "--www", NULL) ) {
	  i++;
	  if ( i == argc ) {
		fprintf(stderr, "%s requires a directory name\n", command);
		MainDisplayHelp();
		exit(EXIT_FAILURE);
	  }
	  if ( MainWWWDirectory ) {
		FreeMemory(MainWWWDirectory);
	  }
	  MainWWWDirectory = StringCopy(argv[i]);
	  continue;
	}

	//
	if ( StringEqualsOneOf(command, "-i", "--noui", NULL) ) {
	  MainStartCLI = false;
	  continue;
	}

	//
	if ( StringEqualsOneOf(command, "-p", "--port", NULL) ) {
	  i++;
	  if ( i == argc ) {
		fprintf(stderr, "%s requires a port number\n", command);
		MainDisplayHelp();
		exit(EXIT_FAILURE);
	  }
	  if ( MainPortNumber ) {
		FreeMemory(MainPortNumber);
	  }
	  MainPortNumber = StringCopy(argv[i]);
	  continue;
	}

	//
	fprintf(stderr, "%s is an unrecognized command\n", command);
	MainDisplayHelp();
	exit(EXIT_FAILURE);
  }
}
