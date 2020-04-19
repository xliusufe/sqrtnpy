#include <Python.h>
#include "cfunct.h"
#include <numpy/arrayobject.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static PyObject *py_CSQUARE_ROOT_N_(PyObject *self, PyObject *args) {    
    int number_n;
    int prec;

    if(!PyArg_ParseTuple(args,"ii", &number_n, &prec)){
        return NULL;
    }

    // Create a numpy array and return it.
    int i, Ln;
	for(i=number_n,Ln=1;i>=10;i/=10,Ln++);
	if (Ln % 2) {prec += Ln / 2+1;}
	else{prec += Ln / 2;}
    char *sqrtn_s = (char *)malloc(sizeof(char)*(prec+2));

    // Call the external C function.
    sqrtn(number_n, prec, Ln, sqrtn_s);

    npy_intp dims[1] = {1};
    PyObject *ret = PyArray_New(&PyArray_Type, 1, dims, NPY_STRING, NULL, sqrtn_s, (int)strlen(sqrtn_s), NPY_ARRAY_OWNDATA, NULL);

    return ret;
}

/* Documentations */
static char module_docs[] = "Calculate sqrt(n) with very high precision.";

static char cfunction_docs[] = "Function sqrtn() can approximate sqrt(n) for any positive integer.";
/* Module method table */
static PyMethodDef MydemoMethods[] = {// "CFACTORIAL_" in py_CFACTORIAL_ must be exactly same as the output function "CFACTORIAL_"
  {"CSQUARE_ROOT_N_",  py_CSQUARE_ROOT_N_, METH_VARARGS, cfunction_docs},
  /* If your extension module has many export functions, you need write interfaces for each of them. */
  /* And then add them to Module method table. For example: */
  /* {"mycfunc2",  py_mycfunc2, METH_VARARGS, cfunction2_docs}, */
  { NULL, NULL, 0, NULL}
};

/* Module structure */
static struct PyModuleDef factpymodule = {
    PyModuleDef_HEAD_INIT,
    "_sqrtnpy",           /* name of module */
    module_docs,        /* Doc string (may be NULL) */
    -1,                 /* Size of per-interpreter state or -1 */
    MydemoMethods       /* Method table */
};

/* Module initialization function */
PyMODINIT_FUNC PyInit__sqrtnpy(void) {
    PyObject *object = PyModule_Create(&factpymodule);
    if(object == NULL) {
        return NULL;
    }
    import_array();
    return object;
}