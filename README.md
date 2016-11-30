# Collatz

This is an attempt at writing a calculator for the
[Collatz Conjecture][wiki-coll]. The aims of this project are to have arbitrary precision, using GMP, and high-performance algorithms for the multiplication/division routines.

The idea is to use a good FFT library, FFTW or cuFFT, to implement an arbitrary precision version of the Schonhage-Strassen multiplication algorithm.

[wiki-coll]: https://en.wikipedia.org/wiki/Collatz_conjecture
