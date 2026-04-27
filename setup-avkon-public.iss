; (c) Ne.app 2026, all rights reserved.

#define AntSetupName "Avkon C++ SDK"
#define AntSetupVersion "v1.1.2-AVKON-PUBLIC"
#define AntSetupPublisher "Ne.app"
#define AntSetupURL "https://www.ne-app.eu"

[Setup]
AppId={{223DD8EC-7770-4B90-AF00-CD9A02A616C2}
AppName={#AntSetupName}
AppVersion={#AntSetupVersion}
AppPublisher={#AntSetupPublisher}
AppPublisherURL={#AntSetupURL}
AppSupportURL={#AntSetupURL}
AppUpdatesURL={#AntSetupURL}
AppComments=Public build of the {#AntSetupName}.
AppCopyright=Ne.app
DefaultDirName={autopf}\{#AntSetupName}
DefaultGroupName={#AntSetupName}
OutputBaseFilename=avkonsetup-public
WizardImageFile=setupsplsh.bmp
DisableWelcomePage=no
DisableFinishedPage=no
SolidCompression=yes
WizardStyle=classic

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Files]
Source: ".\include\*"; Excludes: "*.gitkeep,*.keep"; DestDir: "{app}\public\sdk"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: ".\"; Excludes: "*.gitkeep,*.keep"; DestDir: "{app}\public\sdk\src"; Flags: ignoreversion recursesubdirs createallsubdirs
Source: ".\LICENSE"; Excludes: "*.gitkeep,*.keep"; DestDir: "{app}\public\sdk\NOTICE"; Flags: ignoreversion

[Registry]
Root: HKLM; Subkey: SOFTWARE\Ne.app\; Flags: uninsdeletekeyifempty
Root: HKLM; Subkey: SOFTWARE\Ne.app\AVKON-SDK-{#AntSetupVersion}; Flags: uninsdeletekey
Root: HKLM; Subkey: SOFTWARE\Ne.app\AVKON-SDK-{#AntSetupVersion}\Settings; ValueType: string; ValueName: "InstallPath"; ValueData: "{app}";
Root: HKLM; Subkey: SOFTWARE\Ne.app\AVKON-SDK-{#AntSetupVersion}\Settings; ValueType: string; ValueName: "InstallType"; ValueData: "Public"
