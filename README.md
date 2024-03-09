# Dependencies
For toolchain with fortran rtools is selected and installed using choco as admin
```
PS> choco install rtools -y --no-progress --force --version=4.0.0.20220206
..
  Software installed to 'C:\rtools40\'
```


## Packages
ucrt versions are used as suggested by https://www.msys2.org/docs/environments/
Run Rools https://github.com/r-windows/docs/blob/master/rtools40.md
```
$ pacman -Sy
$ pacman -Sl | grep blas
simon@MSI MINGW64 ~
$ pacman -S mingw-w64-ucrt-x86_64-openblas
..
Set the environment variable OPENBLAS_NUM_THREADS to the number of threads to use.
$ pacman -S mingw-w64-ucrt-x86_64-gdb
```

### Debugging notes
https://scipy-lectures.org/advanced/debugging/index.html#debugging-segmentation-faults-using-gdb

## Test toolchain
```
 scipy-tut\mingw64> make
 scipy-tut\ucrt64> make
```

# Setup venv
Based on https://scipy.github.io/devdocs/building/index.html
 * IDE support & editable installs
```
C:\Users\simon\github\scipy> python -m venv venv
PS C:\Users\simon\github\scipy> .\venv\Scripts\activate
C:\Users\simon\github\scipy> python -m pip install -r requirements/all.txt
(venv) PS C:\Users\simon\github\scipy> $env:PATH="$env:RTOOLS40_HOME\usr\bin;$env:RTOOLS40_HOME\ucrt64\bin;$env:PATH"
(venv) PS C:\Users\simon\github\scipy> meson setup build --buildtype debug (untested)
(venv) PS C:\Users\simon\github\scipy> pip install -e . --no-build-isolation
```

# Setup for usage
```
PS C:\Users\simon\github\scipy> .\venv\Scripts\activate
(venv) PS C:\Users\simon\github\scipy> $env:PATH="$env:RTOOLS40_HOME\usr\bin;$env:RTOOLS40_HOME\ucrt64\bin;$env:PATH"
```

