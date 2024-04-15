# OCP

[![Build Status](https://dev.azure.com/cadquery/OCP/_apis/build/status/CadQuery.OCP?branchName=master)](https://dev.azure.com/cadquery/OCP/_build/latest?definitionId=5&branchName=master)
[![Anaconda-Server Badge](https://anaconda.org/cadquery/ocp/badges/installer/conda.svg)](https://conda.anaconda.org/cadquery)

Python wrapper for OCCT generated using pywrap. Typing stubs available [here](https://github.com/CadQuery/OCP-stubs).

## Goals
* Provide thin bindings to OCCT.
* Wrap all OCCT modules (if practical).
* React quickly to new OCCT releases.
* Cater primarily for the CadQuery project.

## Non-goals
* Provide additional functionality not present in OCCT

## Installation
The easiest way to get started is to use conda:
```
conda install -c conda-forge -c cadquery ocp
```
Generating and building from sources is also possible using https://github.com/CadQuery/pywrap , but not advised.
```
pywrap all ocp.toml
cmake -S OCP -B build
cmake --build build
```
To generate the bindings you'll need to use packages version specified in the `environment.devenv.yml` file and you might need to specify additional headers and libclang location for pywrap.
```
pywrap -i path1/include -i path2/include -l path/to/libclang.so all ocp.toml
```
Building from the released sources without the generation step is possible too. Note that this is how the conda-forge package is built.
