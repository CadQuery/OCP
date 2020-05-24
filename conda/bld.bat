@echo on
setlocal enableextensions
if not exist %SP_DIR% mkdir %SP_DIR%
copy OCP.cp*-*.* %SP_DIR%