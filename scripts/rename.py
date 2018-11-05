import os

files = os.listdir('.')

for filename in files:
    if filename[0] == '.' or filename == 'scripts':
        continue
    else:
        if '-' in filename:
            temp_filename = filename.split('-')
            os.rename(filename, temp_filename[0].zfill(5) + '-' + temp_filename[1])
        else:
            temp_filename = filename.split('.')
            os.rename(filename, temp_filename[0].zfill(5) + '.' + temp_filename[1])