import subprocess

ip_adddr = ['8.8.8.8', '10.0.0.1']

for ip in ip_adddr:
    result = subprocess.run(['ping', '-c', '1', '-n', ip],
                           stdout = subprocess.PIPE, 
                           stderr = subprocess.PIPE,
                           encoding ='utf-8' )
    if result.returncode == 1:
        print('hueta')
        
        

