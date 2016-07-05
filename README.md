###  Dll Inject Service

A sample DLL ready to be injected into a service to exec a script. This is called **DLL Hijacking** if you want to learn more about this. http://www.thewindowsclub.com/dll-hijacking 

Place a script file : `script.bat` into `C:\temp\` and launch the vulnerable service. If you have different path, change the path and recompile the project. After the Dll is loaded the code into `script.bat` will be executed.

I place two compiled dll x64.dll and x86.dll ready to execute a script on the `C:\temp\` folder as an example. 
