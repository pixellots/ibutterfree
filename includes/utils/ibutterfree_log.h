#ifndef __IBUTTERFREE_LOG_H__
#define __IBUTTERFREE_LOG_H__

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

enum IBUTTERFREE_MSG_LEVEL {
	IBUTTERFREE_MSG_LEVEL_NONE = -1,
	IBUTTERFREE_MSG_LEVEL_TRACK = 0,
	IBUTTERFREE_MSG_LEVEL_DEBUG = 1,
	IBUTTERFREE_MSG_LEVEL_ALERT = 2,
	IBUTTERFREE_MSG_LEVEL_WARNING = 4,
	IBUTTERFREE_MSG_LEVEL_ERROR = 5,
	IBUTTERFREE_MSG_LEVEL_ALL = 6
};

IBUTTERFREE_MSG_LEVEL m_msg_level = IBUTTERFREE_MSG_LEVEL_NONE;

void ibutterfree_set_msg_level(IBUTTERFREE_MSG_LEVEL msg_level);
void ibutterfree_log(IBUTTERFREE_MSG_LEVEL msg_level_msg, const char *fmt, ...);

#endif