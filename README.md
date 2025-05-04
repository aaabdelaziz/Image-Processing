# Image Processing in C – From Ground Up

This project contains C code implementations for fundamental image processing techniques. It follows the structure and lessons I have learned through projects from different resources like :

* the Udemy course:  
**[Image Processing From Ground Up™ in C](https://www.udemy.com/course/image-processing-from-ground-uptm-in-c/)**

* 
All code is written in **pure C**, from scratch, to deeply understand how image operations work at the pixel and matrix level—without relying on external libraries for core functionality.

---

## 📚 Course Reference

- **Course Name:** Image Processing From Ground Up™ in C  
- **Platform:** Udemy  
- **Link:** [https://www.udemy.com/course/image-processing-from-ground-uptm-in-c](https://www.udemy.com/course/image-processing-from-ground-uptm-in-c)  
- **Instructor:** [Insert Instructor Name if desired]

---

## 🧠 Topics Covered

This repository covers the following core topics from the course:

1. **BMP File Format**
   - Reading and writing BMP headers and pixel data
   - Understanding image structure in memory

2. **Basic Pixel Operations**
   - Grayscale conversion
   - Image inversion
   - Brightness and contrast adjustment

3. **Convolution Filters**
   - Box blur, Gaussian blur
   - Sharpening
   - Edge detection (Sobel, Prewitt)

4. **Histograms**
   - Histogram calculation
   - Histogram equalization

5. **Noise and Filtering**
   - Adding Gaussian and salt-and-pepper noise
   - Median and mean filters

6. **Thresholding**
   - Global thresholding
   - Adaptive thresholding (mean, Gaussian)

7. **Edge Detection**
   - Sobel and Prewitt methods
   - Canny edge detection (manually implemented)

8. **Morphological Operations**
   - Dilation, erosion
   - Opening and closing

9. **Transformations**
   - Image rotation and scaling (nearest-neighbor)
   - Flipping and cropping

---

## 📁 Project Structure

```
/image-processing-c
│
├── /01_bmp_basics              # Reading and writing BMP files
├── /02_pixel_operations        # Grayscale, invert, brightness, contrast
├── /03_convolution_filters     # Blur, sharpen, edge detection
├── /04_histogram               # Histogram generation and equalization
├── /05_noise_and_filtering     # Add noise and denoise images
├── /06_thresholding            # Global and adaptive thresholding
├── /07_edge_detection          # Edge detection algorithms
├── /08_morphology              # Morphological transformations
└── /09_transformations         # Rotate, scale, flip
```

Each folder contains:
- Source `.c` and `.h` files
- Sample BMP images (input/output)
- A `README.md` (when needed) explaining the implementation

---

## 🛠 Requirements

- **C Compiler:** GCC or any standard C compiler
- **Make:** Optional (for convenience with `Makefile`)
- **Platform:** Works on Linux, macOS, and Windows (via MinGW or WSL)
- **Extras:** BMP images for testing

---

## 🚀 Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/image-processing-c.git
   cd image-processing-c
   ```

2. Compile any example using GCC:
   ```bash
   gcc -o grayscale 02_pixel_operations/grayscale.c
   ./grayscale input.bmp output.bmp
   ```

3. Or use `make` if provided:
   ```bash
   cd 02_pixel_operations
   make grayscale
   ./grayscale input.bmp output.bmp
   ```

---

## 📌 Notes

- All implementations are from scratch for educational purposes.
- No third-party image processing libraries (e.g., OpenCV) are used.
- Code is kept simple and well-commented for learning and experimentation.

---

## 📷 Sample Output

> Add sample before/after image comparisons here if you'd like to show visual results.

---

## 📝 License

This project is for **personal learning and educational use only**.  
Please respect the original course authorship and terms on Udemy.

---

**Happy coding and image hacking!**
