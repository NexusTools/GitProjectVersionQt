#ifndef PROJECT_VERSION
#define PROJECT_VERSION

#if !defined(VER_MAJ) || !defined(VER_MIN)
#error "VER_MAJ or VER_MIN defines missing. Make sure your using the version.pri include."
#endif

#ifdef GIT_REVISION
#define VERSION VER_MAJ "." VER_MIN "." GIT_REVISION " (" GIT_BRANCH ")"
#else
#define VERSION VER_MAJ "." VER_MIN " (Unknown Branch)"
#endif

#ifdef GIT_AUTHORS
#define AUTHORS GIT_AUTHORS
#else
#warning "GIT_AUTHORS macro missing, please fix git support or specify manually."
#define AUTHORS "Unknown"
#endif

#endif
