
#define FORMAT 1 << 14

#define INT_TO_FP(N) (N)*(FORMAT)
#define FP_TO_INT_ROUNDTOZERO(X) (X)/(FORMAT)
#define FP_TO_INT_ROUND(X) (X>=0) ? ((X)+(FORMAT)/2)/(FORMAT) : ((X)-(FORMAT)/2)/(FORMAT)
#define ADDFP(X, Y) (X)+(Y)
#define SUBFP(X, Y) (X)-(Y)
#define ADDFPINT(X, N) (X)+(N)*(FORMAT)
#define SUBFPINT(X, N) (X)-(N)*(FORMAT)
#define MULT_FP(X, Y) ((int64_t) (X)) * (Y)/(FORMAT)	
#define MULT_INT(X, N) (X)*(N)
#define DIV_FP(X, Y) ((int64_t) (X)) * (FORMAT)/(Y)
#define DIV_INT(X, N) (X)/(N)