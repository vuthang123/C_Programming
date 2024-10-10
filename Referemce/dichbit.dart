4. Lưu Ý Khi Dịch Bit
1. Overflow (Tràn bit) Khi Dịch Trái
Giải thích: Khi bạn dịch trái một số, các bit bị dịch ra ngoài phần chứa (ví dụ: 8 bit, 16 bit, 32 bit) sẽ bị mất. Điều này có thể dẫn đến kết quả không mong muốn, đặc biệt là khi số bị dịch lớn hơn khả năng lưu trữ của phần chứa.

Ví dụ:

Giả sử bạn sử dụng kiểu dữ liệu unsigned char (8 bit) trong C.

c
Copy code
#include <stdio.h>

int main() {
    unsigned char a = 200; // 200 trong nhị phân: 11001000
    unsigned char b = a << 1; // Dịch trái 1 bit

    printf("a = %u (bin: 11001000)\n", a);
    printf("a << 1 = %u (bin: %u)\n", b, b);
    
    return 0;
}
Giải thích:

a = 200 trong nhị phân là 11001000.
Dịch trái 1 bit: 11001000 << 1 trở thành 10010000.
Tuy nhiên, bit cao nhất (1 đầu tiên) đã bị dịch ra ngoài phần chứa và bị mất.
Kết quả b sẽ là 144 (10010000 trong nhị phân).
Kết quả:

less
Copy code
a = 200 (bin: 11001000)
a << 1 = 144 (bin: 10010000)
Nhận xét:

Nếu không kiểm soát số bit khi dịch trái, giá trị có thể vượt quá khả năng lưu trữ của kiểu dữ liệu, dẫn đến tràn bit và kết quả không chính xác.
2. Dịch Phải Số Học vs. Dịch Phải Logic
Giải thích:

Dịch phải số học (Arithmetic Right Shift): Giữ nguyên dấu của số, nghĩa là bit dấu (bit cao nhất) được lấp đầy sau khi dịch. Thường được sử dụng cho các số có dấu.
Dịch phải logic (Logical Right Shift): Không giữ nguyên dấu, các bit trống được lấp đầy bằng 0. Thường được sử dụng cho các số không dấu.
Ví dụ trong C:

Trong ngôn ngữ C, phép dịch phải >> đối với số có dấu thực hiện dịch phải số học, còn đối với số không dấu thực hiện dịch phải logic.

c
Copy code
#include <stdio.h>

int main() {
    // Số có dấu
    signed char a = -8; // -8 trong nhị phân 8 bit (bù hai): 11111000
    signed char b = a >> 2; // Dịch phải số học 2 bit

    // Số không dấu
    unsigned char c = 200; // 200 trong nhị phân: 11001000
    unsigned char d = c >> 2; // Dịch phải logic 2 bit

    printf("Số có dấu:\n");
    printf("a = %d (bin: 11111000)\n", a);
    printf("a >> 2 = %d (bin: ", b);
    for(int i=7;i>=0;i--) printf("%d", (b >> i) & 1);
    printf(")\n\n");

    printf("Số không dấu:\n");
    printf("c = %u (bin: 11001000)\n", c);
    printf("c >> 2 = %u (bin: ", d);
    for(int i=7;i>=0;i--) printf("%d", (d >> i) & 1);
    printf(")\n");

    return 0;
}
Giải thích:

Số có dấu (signed char a = -8):

Biểu diễn nhị phân (bù hai 8 bit): 11111000.
Dịch phải 2 bit số học: 11111110 (giữ nguyên dấu 1 ở đầu).
Giá trị sau dịch: -2 (vì 11111110 trong bù hai là -2).
Số không dấu (unsigned char c = 200):

Biểu diễn nhị phân: 11001000.
Dịch phải 2 bit logic: 00110010.
Giá trị sau dịch: 50.
Kết quả:

less
Copy code
Số có dấu:
a = -8 (bin: 11111000)
a >> 2 = -2 (bin: 11111110)

Số không dấu:
c = 200 (bin: 11001000)
c >> 2 = 50 (bin: 00110010)
Nhận xét:

Dịch phải số học giữ nguyên dấu của số có dấu bằng cách lấp đầy các bit trống bằng 1 nếu số ban đầu là số âm.
Dịch phải logic không quan tâm đến dấu và luôn lấp đầy các bit trống bằng 0, phù hợp với số không dấu.
3. Ví Dụ Thêm Về Tràn Bit Khi Dịch Trái
Ví dụ:

Sử dụng kiểu dữ liệu unsigned short (16 bit) trong C.

c
Copy code
#include <stdio.h>

int main() {
    unsigned short a = 40000; // 40000 trong nhị phân: 1001110001000000
    unsigned short b = a << 1; // Dịch trái 1 bit

    printf("a = %u (bin: 1001110001000000)\n", a);
    printf("a << 1 = %u (bin: ", b);
    for(int i=15;i>=0;i--) printf("%d", (b >> i) & 1);
    printf(")\n");

    return 0;
}
Giải thích:

a = 40000 trong nhị phân là 1001110001000000.
Dịch trái 1 bit: 1001110001000000 << 1 trở thành 0011100010000000.
Bit cao nhất (1 đầu tiên) đã bị tràn ra ngoài và bị mất.
Kết quả b sẽ là 14400 (0011100010000000 trong nhị phân).
Kết quả:

less
Copy code
a = 40000 (bin: 1001110001000000)
a << 1 = 14400 (bin: 0011100010000000)
Nhận xét:


Tóm Tắt
Overflow (Tràn bit) Khi Dịch Trái:

Khi dịch trái, các bit bị tràn ra ngoài phần chứa sẽ bị mất, dẫn đến kết quả không chính xác.
Luôn kiểm soát số bit khi thực hiện dịch trái để tránh tràn bit.
Dịch Phải Số Học vs. Dịch Phải Logic:

Dịch phải số học: Giữ nguyên dấu của số, phù hợp với số có dấu.
Dịch phải logic: Không giữ nguyên dấu, phù hợp với số không dấu.
Lựa Chọn Phép Dịch Bit Phù Hợp:

Dịch trái (<<): Khi muốn nhân số với 2^n, nhưng cần cẩn trọng với tràn bit.
Dịch phải số học (>> trong số có dấu hoặc >> trong C cho signed): Khi muốn chia số có dấu cho 2^n và giữ nguyên dấu.
Dịch phải logic (>> trong số không dấu hoặc >>> trong Java): Khi muốn chia số không dấu cho 2^n mà không cần quan tâm đến dấu.
Hy vọng những ví dụ trên giúp bạn hiểu rõ hơn về tràn bit khi dịch trái và sự khác biệt giữa dịch phải số học và dịch phải logic trong phép dịch bit!