/*
Nhập vào điểm 3 môn toán, văn, anh của 1 học sinh, viết chương trình đưa ra xếp loại của học sinh đó theo điểm trung bình như sau:
– [0, 4.0): Yếu
– [4.0, 6.5): Trung bình
– [6.5, 8.0): Khá
– [8.0, 10]: Giỏi
*/


#include<stdio.h>
int main()
{
   
    // declare variable
    float diem_toan;
    float diem_van;
    float diem_anh;
    float dtb;
    // input from keyboard
    printf("diem Toan diem Van diem anh\n");
    scanf("%f %f %f",&diem_toan,&diem_van,&diem_anh);
    // formula
    dtb= (diem_toan+diem_van+diem_anh) / 3;
    printf("\ndtb =%.2f",dtb);
    
    
    
   

    if (dtb>0&&dtb<4)
    
    {
        printf("\ndiem trung yeu=\t%f",dtb);

    }
    else if(dtb>4.0&&dtb<6.5)
    {
        printf("\ndiem trung binh=\t%f",dtb);
    }
    else if(dtb>6.5&&dtb<8.0)
    {
        printf("\ndiem kha=\t%f",dtb);
    }
    else if(dtb>8.0&&dtb<10)
    {
        printf("\ndiem gioi=\t %f",dtb);
    }
}