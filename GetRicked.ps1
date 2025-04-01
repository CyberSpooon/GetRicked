Set-ExecutionPolicy -Scope CurrentUser Bypass
$audio = "https://github.com/CyberSpooon/GetRicked/raw/refs/heads/main/Get_Ricked.mp3"
$path = "$env:TEMP\Get_Ricked.mp3"
Start-Process curl.exe -WindowStyle Hidden -ArgumentList "-L $audio -o $path" ## Download .mp3
Start-Sleep -Seconds 3 ## wait for .mp3 to download
Start-Process "wmplayer.exe" -ArgumentList "$path" -WindowStyle Hidden ## open .mp3 in hidden media player window
