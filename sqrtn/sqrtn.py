from ._sqrtnpy import CSQUARE_ROOT_N_
import math


def sqrtn(n=2,prec=20):
    if(n<1):
        return "n must be a positive integer!"
    if prec<0:
        return "prec must be a positive integer!"      
    if prec==0:
        return int(math.sqrt(2))
    else:
        sqrtn0 = CSQUARE_ROOT_N_(n,prec)
        return bytes.decode(sqrtn0[0])