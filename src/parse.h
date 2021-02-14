/*
 * Logswan 2.1.8
 * Copyright (c) 2015-2021, Frederic Cambus
 * https://www.logswan.org
 *
 * Created:      2015-05-31
 * Last Updated: 2021-02-15
 *
 * Logswan is released under the BSD 2-Clause license.
 * See LICENSE file for details.
 */

#ifndef PARSE_H
#define PARSE_H

struct date {
	char *day;
	char *month;
	char *year;
	char *hour;
	char *minute;
	char *second;
};

struct logline {
	char *remote_host;
	char *date;
	char *request;
	char *status_code;
	char *object_size;
};

struct request {
	char *method;
	char *resource;
	char *protocol;
};

void parseDate(struct date *, char *);
void parseLine(struct logline *, char *);
void parseRequest(struct request *, char *);

#endif /* PARSE_H */
