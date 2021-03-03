# OCP

[![Build Status](https://dev.azure.com/cadquery/OCP/_apis/build/status/CadQuery.OCP?branchName=master)](https://dev.azure.com/cadquery/OCP/_build/latest?definitionId=5&branchName=master)
[![Anaconda-Server Badge](https://anaconda.org/cadquery/ocp/badges/installer/conda.svg)](https://conda.anaconda.org/cadquery)

Python wrapper for OCCT7.5.1 generated using pywrap. Typing stubs available [here](https://github.com/CadQuery/OCP-stubs).

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
Building from sources is also possible,
```
pywrap all ocp.toml
cmake -S OCP -B build
cmake --build build
```
but you might need to specify additional headers and libclang location for pywrap:
```
pywrap -i path1/include -i path2/include -l path/to/libclang.so all ocp.toml
```
