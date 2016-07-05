###  Dll Inject Service

A sample DLL ready to be injected into a service to exec a script. This is called **DLL Hijacking** if you want to learn more about this.

Place a script file : `script.bat` into the same folder as the dll and launch the service.
The code into `script.bat` will be executed.

A place two compiled dll for x64.dll and x86.dll ready to execute a script on the `C:\temp\` folder.
