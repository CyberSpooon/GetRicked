Set-ExecutionPolicy -Scope CurrentUser Bypass
$audio = "https://github.com/CyberSpooon/GetRicked/raw/refs/heads/main/Get_Ricked.mp3"
$path = "$env:TEMP\Get_Ricked.mp3"
Start-Process curl.exe -WindowStyle Hidden -ArgumentList "-L $audio -o $path" 
Start-Sleep -Seconds 3
##Start-Process -FilePath $path -WindowStyle Hidden
Start-Process "wmplayer.exe" -ArgumentList "$path" -WindowStyle Hidden
Start-Process cmd.exe -ArgumentList "/c curl.exe ascii.live/rick"
