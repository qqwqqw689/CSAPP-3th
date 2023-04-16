/*
 * Code to process options from
 * command line arguments.  Arguments can be integers,
 * floats, or strings.   Allow prefix of argument name, as long as
 * unambigous.  Also support printing of usage information.
 */


void add_int_option(char *name, int *var);
void add_double_option(char *name, double *var);
void add_string_option(char *name, char **var);     

/* Print usage information and exit */
void usage(char *prog);

/*
 * Parse option from arguments.  Print error message & exit if any problems 
 * If otherargs nonnull, fill it with any nonoption arguments.
 * Return number of such arguments.
 */
int parse_options(int argc, char *argv[], char *otherargs[]);

/* Parse options from file */
void parse_option_file(char *prog, FILE *option_file);
// FILE type 
// Object type that identifies a stream and contains the information needed to control it, 
// including a pointer to its buffer, its position indicator and all its state indicators.

/* Show which options are in effect */
void show_options(FILE *outfile);


