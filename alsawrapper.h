#define CMD_PLAY   "aplay"
#define CMD_RECORD "arecord"

#define TYPE_AU    "au"
#define TYPE_RAW   "raw"
#define TYPE_SPARC "sparc"
#define TYPE_VOC   "voc"
#define TYPE_WAVE  "wav"

#define FMT_CD  "cd"
#define FMT_CDR "cdr"
#define FMT_DAT "dat"

#define VU_MONO   'm'
#define VU_STEREO 's'

#ifndef __cplusplus
	typedef enum { false, true } bool;
#endif

#ifdef __cplusplus
	extern "C" {
#endif

int alsawrapper_init(char* command, char* type, char* file_format,
                 char vu, int channels, int rate, int duration,
                 bool separate_channels, char* file_n);

void alsawrapper_start();
void alsawrapper_stop();
void alsawrapper_on_terminate(void *event);

#ifdef __cplusplus
	}
#endif
