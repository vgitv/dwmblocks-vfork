//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/ /*Command*/           /*Update Interval*/ /*Update Signal*/
    {" ",    "status-battery",     30,                 5},
    {"",     "status-ram",         30,                 1},
    {"",     "status-temperature", 30,                 2},
    {"",     "status-volume",       0,                 3},
    {"",     "status-datetime",    60,                 4}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "   ";
static unsigned int delimLen = 5;
