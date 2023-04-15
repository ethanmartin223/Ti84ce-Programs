# ----------------------------
# Program Options
# ----------------------------

NAME = PROGRAM
ICON = icon.png
DESCRIPTION  = "program"
COMPRESSED = NO
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
