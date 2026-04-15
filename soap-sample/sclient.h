//gsoap ns service name: SampleServices 

typedef struct concatStruct {
  long id;
  char * op1;
  char * op2;
} ns__concatType;

typedef struct addStruct {
  long id;
  long op1;
  long op2;
} ns__addType ;

typedef struct byeStruct {
  long id;
} ns__byeType ;



//int ns__webmethod(struct xsd__base64Binary *data, struct xsd__base64Binary *result);

typedef char * ns__stringType  ;
typedef long ns__longType  ;

int ns__connect (ns__longType *connect) ; // NO REQUEST!

int ns__echo (ns__stringType echoRequest, ns__stringType *echo) ;

//int ns__echo(struct xsd__base64Binary *data, struct xsd__base64Binary *result);

int ns__concat (ns__concatType concatRequest, ns__stringType *concat) ;

int ns__adder (ns__addType adderRequest, ns__longType *adder) ;

int ns__bye (ns__byeType byeRequest, struct ns__byeResponse { } *bye); // NO RESPONSE 

