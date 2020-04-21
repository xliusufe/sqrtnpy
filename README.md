# sqrtn
A Python pacakge to calculate `sqrt(n)` with very high precision. "sqrtn"" implements dramatically fast. It takes only less than 30 seconds to approximate square root of 2 with `100,000` digits. Function `sqrtn2()` can approximate square root of `n` for any positive integer. The last two or three digits may be incorrect. For seek of safety, it is better to input two or three more to guarantee precision.

# Installation

    pip install git+https://github.com/xliusufe/sqrtnpy.git

# Usage
- Syntax: `sqrtn(n,prec)`
    - Input:
        - `n`: a natural number 
        - `prec`: The a positive integer, which is the precision you want.

    - Output: the square root of `n`, which is a string.

- The corresponding R package named [sqrtn](https://github.com/xliusufe/sqrtn/) can be found on github.
   
# Example 1

    from sqrtn import sqrtn

    fit = sqrtn(2, 100)
    print(fit)


# Example 2

    import sqrtn

    fit = sqrtn.sqrtn(2, 100)
    print(fit)


# Development
This Python package is developed by Xu Liu (liu.xu@sufe.edu.cn).


# Additional information

   
   - [x] [Web-based calculator](https://xliusufe.shinyapps.io/sqrtn/) --------A web-based calculator    
   
   - [x] [sqrt2.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt2.md) ---------- The first one hundred thousand digits of the square root of 2.
   
   - [x] [sqrt3.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt3.md) ---------- The first many digits of the square root of 3.
      
   - [x] [sqrt5.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt5.md) ---------- The first many digits of the square root of 5.
 
   - [x] [sqrt6.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt6.md) ---------- The first many digits of the square root of 6.
   
   - [x] [sqrt7.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt7.md) ---------- The first many digits of the square root of 7.
   
   - [x] [sqrt8.md](https://github.com/xliusufe/sqrtn/blob/master/inst/sqrt8.md) ---------- The first many digits of the square root of 8.

