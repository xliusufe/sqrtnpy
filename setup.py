from setuptools import setup, Extension, find_packages
import numpy

VERSION = '1.0'
extensions = Extension(name = 'sqrtn._sqrtnpy',  # name of our extension module
                        sources = ['src/cfunct.c', 'src/_cfunct.c'],
                        include_dirs = ['src'],
                        language='c' 
                        )


setup(
    name='sqrtnpy', # A name show on Pypi.
    version=VERSION, 
    packages = ['sqrtn'],
    ext_modules = [extensions],
    license='MIT',
    description='A Python pacakge to calculate sqrt(n) with very high precision.',
    long_description=open('README.md').read(),
    install_requires=[],
    url='https://github.com/xliusufe/sqrtnpy/',
    author='Xu Liu',
    author_email='liu.xu@sufe.edu.cn',
    maintainer="Xu Liu",
    maintainer_email='liu.xu@sufe.edu.cn',  
    include_dirs = [numpy.get_include()],
    python_requires='>=3.5'
)
