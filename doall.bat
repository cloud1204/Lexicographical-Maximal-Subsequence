rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=1" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=1 --cnt=2" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=1 --cnt=10" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --summ=5000" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=5 --summ=5000" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --summ=5000 --cnt=5" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --summ=5000 --cnt=5 --p=10000000" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --summ=5000 --cnt=10 --p=100000000" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --summ=5000 --cnt=2 --p=100000000" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=20 --summ=5000 --cnt=3 --p=1000000" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=tle --summ=5000" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=5" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --cnt=5" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --cnt=5 --p=1000000" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --cnt=10 --p=100000" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=10 --cnt=2 --p=1000000" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=random --maxm=20 --cnt=3 --p=500000" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen.exe --type=tle --summ=1000000" "tests\21" 21
call scripts\gen-answer.bat tests\01 tests\01.a "tests" "example"
call scripts\gen-answer.bat tests\02 tests\02.a "tests" "example"
call scripts\gen-answer.bat tests\03 tests\03.a "tests" "s1"
call scripts\gen-answer.bat tests\04 tests\04.a "tests" "s1"
call scripts\gen-answer.bat tests\05 tests\05.a "tests" "s1"
call scripts\gen-answer.bat tests\06 tests\06.a "tests" "s2"
call scripts\gen-answer.bat tests\07 tests\07.a "tests" "s2"
call scripts\gen-answer.bat tests\08 tests\08.a "tests" "s2"
call scripts\gen-answer.bat tests\09 tests\09.a "tests" "s2"
call scripts\gen-answer.bat tests\10 tests\10.a "tests" "s2"
call scripts\gen-answer.bat tests\11 tests\11.a "tests" "s2"
call scripts\gen-answer.bat tests\12 tests\12.a "tests" "s2"
call scripts\gen-answer.bat tests\13 tests\13.a "tests" "s3"
call scripts\gen-answer.bat tests\14 tests\14.a "tests" "s3"
call scripts\gen-answer.bat tests\15 tests\15.a "tests" "s3"
call scripts\gen-answer.bat tests\16 tests\16.a "tests" "s3"
call scripts\gen-answer.bat tests\17 tests\17.a "tests" "s3"
call scripts\gen-answer.bat tests\18 tests\18.a "tests" "s3"
call scripts\gen-answer.bat tests\19 tests\19.a "tests" "s3"
call scripts\gen-answer.bat tests\20 tests\20.a "tests" "s3"
call scripts\gen-answer.bat tests\21 tests\21.a "tests" "s3"

