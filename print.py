import os

folder_path = "C:/Users/thang/Desktop/Car/software/master/driver/chip/Esp32Wroom32/hal/inc"  # Đổi thành đường dẫn thư mục của bạn
output_file = "file_list.txt"  # Đặt tên tệp .txt bạn muốn xuất ra

# Lấy danh sách các tệp trong thư mục
files = os.listdir(folder_path)

# Mở tệp output_file để ghi
with open(output_file, "w") as f:
    for file in files:
        # Thêm #include " " trước tên tệp và ghi vào file
        f.write(f'#include "{file}"\n')

print(f"Danh sách tệp đã được ghi vào {output_file}")
