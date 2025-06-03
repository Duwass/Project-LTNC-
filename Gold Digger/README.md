# Gold Digger
## Thông tin sinh viên- **Họ và tên:** Trần Khánh Duy
- **Mã sinh viên:** 22025520
## Game Gold Digger là game mô phỏng hoạt động đào vàng, nơi người chơi điều khiển móc câu để thu thập các tài nguyên có giá trị như vàng, kim cương và túi tiền, đồng thời tránh các vật thể ít giá trị như đá để đạt được mục tiêu điểm số trong mỗi cấp độ.
## Ngưỡng điểm tự đánh giá: 8.75/9
## Các tính năng đã thực hiện
### Yêu cầu cơ bản (7 điểm)
- [x] Cài đặt đầy đủ các chức năng cơ bản của game
- [x] Có menu, màn hình bắt đầu và kết thúc game
- [x] Xử lý va chạm giữa các đối tượng
- [x] Có âm thanh
- [x] Có animation (móc câu quay, ánh sáng nhấp nháy, hiệu ứng khi bắt được tài nguyên)
- [x] Có tính điểm và hiển thị điểm số
- [x] Có nhiều cấp độ với độ khó tăng dần
### Tính năng nâng cao (1.75 điểm)
- [x] **Hệ thống vật lý đơn giản (0.5 điểm)**: Mô phỏng chuyển động của móc câu, trọng lượng khác nhau của các tài nguyên ảnh hưởng đến tốc độ kéo lên
- [x] **Thuật toán va chạm nâng cao (0.5 điểm)**: Sử dụng thuật toán va chạm lai giữa hình tròn và hình chữ nhật với hệ số điều chỉnh (alw) cho từng loại tài nguyên
- [x] **Hệ thống âm thanh đa dạng (0.25 điểm)**: Mỗi loại tài nguyên có âm thanh riêng khi bắt được, âm thanh cho các sự kiện khác nhau trong game
- [x] **Hiệu ứng đồ họa (0.5 điểm)**: Hiệu ứng ánh sáng ở màn hình bắt đầu, hiệu ứng quay của móc câu, hiệu ứng khi hoàn thành cấp độ
### Điểm nổi bật (đề xuất cộng thêm)
1. **Thiết kế cấp độ sáng tạo**: Mỗi cấp độ có bố cục tài nguyên và mục tiêu khác nhau, tăng độ khó và thú vị
2. **Hệ thống tài nguyên đa dạng**: 6 loại tài nguyên khác nhau với giá trị và trọng lượng khác nhau
3. **Cơ chế móc câu thực tế**: Móc câu di chuyển theo quán tính, tạo cảm giác chân thực
4. **Giao diện trực quan**: Hiển thị rõ ràng thời gian, điểm số, mục tiêu cấp độ5. **Tối ưu hóa hiệu suất**: Sử dụng cơ chế giới hạn FPS và quản lý bộ nhớ hiệu quả
## Các kỹ thuật lập trình đã sử dụng
1. **Lập trình hướng đối tượng**: Sử dụng các lớp như `BaseObject`, `TextObject`, `resProperties` để quản lý các đối tượng trong game
2. **Xử lý sự kiện SDL**: Bắt và xử lý các sự kiện bàn phím, chuột
3. **Quản lý bộ nhớ**: Giải phóng tài nguyên sau khi sử dụng để tránh rò rỉ bộ nhớ
4. **Thuật toán va chạm**: Phát triển thuật toán va chạm riêng dựa trên khoảng cách giữa tâm các đối tượng
5. **Xử lý thời gian**: Sử dụng SDL_GetTicks() để quản lý thời gian và giới hạn FPS
6. **Render đồ họa**: Sử dụng SDL_Renderer để vẽ các đối tượng với các hiệu ứng như xoay, thu phóng
## Các nguồn tham khảo
### Tutorials và tài liệu
1. [LazyFoo's SDL Tutorials](https://lazyfoo.net/tutorials/SDL/index.php) - Hướng dẫn cơ bản về SDL2
2. [SDL Wiki](https://wiki.libsdl.org/) - Tài liệu chính thức của SDL2
3. [Game Programming Patterns](https://gameprogrammingpatterns.com/) - Tham khảo các mẫu thiết kế game
### Tài nguyên đồ họa và âm thanh
1. [OpenGameArt](https://opengameart.org/) - Nguồn cho một số sprite và texture
2. [Freesound](https://freesound.org/) - Nguồn cho các hiệu ứng âm thanh
3. [Pixabay](https://pixabay.com/) - Nguồn cho một số hình ảnh nền và đối tượng
### Mức độ sử dụng AI
- **ChatGPT**: Sử dụng để tham khảo cách triển khai một số thuật toán và debug các lỗi phức tạp
- **Tất cả code logic chính và thuật toán va chạm được viết thủ công**
## Hướng dẫn cài đặt và chạy game
1. Cài đặt MinGW và các thư viện SDL2, SDL2_image, SDL2_mixer, SDL2_ttf
2. Clone repository về máy
3. 3. Mở project trong Visual Studio Code
4. Sử dụng task "Run Game" đã được cấu hình trong file `.vscode/launch.json` để chạy game


































