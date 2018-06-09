#ifndef _H_CONFIG
#define _H_CONFIG

/*TOP_FILE is the links that appear in thew top bar when viewing the repo, default: "README", "LICENSE"*/
#define TOP_FILE \
    {\
        "README",\
        "LICENSE",\
    }
/* DATE_FORMAT_LONG is used for printing the date, default: "%Y-%m-%dT%H:%M:%SZ" */
#define DATE_FORMAT_LONG ("%Y-%m-%dT%H:%M:%SZ")
/* DATE_FORMAT_LONG_SIZE is the max size of DATE_FORMAT_LONG */
#define DATE_FORMAT_LONG_SIZE (32)

/* DATE_FORMAT_SHORT is used for printing the date in a shorter form than DATE_FORMAT_LONG, default: "%Y-%m-%d %H:%M" */
#define DATE_FORMAT_SHORT ("%Y-%m-%d %H:%M")
/* DATE_FORMAT_SHORT_SIZE is the max size of DATE_FORMAT_SHORT */
#define DATE_FORMAT_SHORT_SIZE (32)

/* TIME_FORMAT is used for printing the time, default: "%a, %e %b %Y %H:%M:%S" */
#define TIME_FORMAT ("%a, %e %b %Y %H:%M:%S")
/* TIME_FORMAT_SIZE is the max size of TIME_FORMAT */
#define TIME_FORMAT_SIZE (32)

#endif