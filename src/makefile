CXX = g++-8
RM = rm -f
CPPFLAGS = -D_GLIBCXX_USE_CXX11_ABI=1 $(shell python3 -m pybind11 --includes) -I${CONDA_PREFIX}/include/opencascade
CXXFLAGS = -O3 -Wall --std=c++17 -fPIC  -fpermissive -fvisibility=hidden -fvisibility-inlines-hidden
LDFLAGS = -shared -L${CONDA_PREFIX}/lib
LDLIBS = -l:libTKMath.so -l:libTKernel.so -l:libTKG2d.so -l:libTKG3d.so -l:libTKGeomBase.so -l:libTKBRep.so -l:libTKGeomAlgo.so -l:libTKTopAlgo.so -l:libTKPrim.so -l:libTKShHealing.so -l:libTKHLR.so -l:libTKMesh.so -l:libTKBO.so -l:libTKBool.so -l:libTKFeat.so -l:libTKOffset.so -l:libTKFillet.so -l:libTKGeomAlgo.so -l:libTKHLR.so -l:libTKMesh.so -l:libTKOffset.so -l:libTKPrim.so -l:libTKShHealing.so -l:libTKTopAlgo.so -l:libTKXMesh.so -l:libTKXSBase.so -l:libTKService.so -l:libTKV3d.so -l:libTKOpenGl.so -l:libTKMeshVS.so -l:libTKBin.so -l:libTKBinL.so -l:libTKBinTObj.so -l:libTKCAF.so -l:libTKCDF.so -l:libTKLCAF.so -l:libTKStd.so -l:libTKStdL.so -l:libTKTObj.so -l:libTKVCAF.so -l:libTKXml.so -l:libTKXmlL.so -l:libTKXmlTObj.so -l:libTKIGES.so -l:libTKSTEP.so -l:libTKSTEP209.so -l:libTKSTEPAttr.so -l:libTKSTEPBase.so -l:libTKSTL.so -l:libTKXSBase.so 

SRC=$(wildcard *.cpp)
OBJ=$(subst .cpp,.o,$(SRC))
TARGET=OCP$(shell python3-config --extension-suffix)

all: OCP

OCP: $(OBJ)
	$(CXX) $(LDFLAGS) -o $(TARGET) $(OBJ) $(LDLIBS) 

clean:
	$(RM) $(OBJ) $(TARGET)
	
check:
	$(LD) $(TARGET) 2>&1
    
test:
	ipython -i -c"import OCP"