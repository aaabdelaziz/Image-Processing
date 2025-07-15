# Image Processing in Python – From Ground Up

This repository contains Python implementations of fundamental image processing techniques, inspired by and adapted from the **"Image Processing From Ground Up™ in C"** Udemy course.

All operations are implemented in **pure Python**, using only minimal external libraries (e.g., NumPy and matplotlib) where necessary for visualization or array operations—focusing on educational value and understanding.

---

## 📚 Course Reference

- **Course Name:** Image Processing From Ground Up™ in C  
- **Platform:** Udemy  
- **Link:** [https://www.udemy.com/course/image-processing-from-ground-uptm-in-c](https://www.udemy.com/course/image-processing-from-ground-uptm-in-c)  
- **Instructor:** [Insert Instructor Name if desired]

---

## 🧠 Topics Covered

This Python version covers the same core concepts:

1. **Image File Basics**
   - Reading and writing BMP (and optionally PNG/JPEG using `Pillow`)
   - Exploring pixel data with NumPy

2. **Basic Pixel Operations**
   - Grayscale conversion
   - Inversion
   - Brightness and contrast adjustment

3. **Convolution Filters**
   - Box blur, Gaussian blur
   - Sharpening and edge detection (Sobel, Prewitt)

4. **Histogram Processing**
   - Generating histograms
   - Histogram equalization

5. **Noise and Filtering**
   - Adding Gaussian and salt-and-pepper noise
   - Applying mean and median filters

6. **Thresholding**
   - Global thresholding
   - Adaptive methods (mean and Gaussian)

7. **Edge Detection**
   - Manual implementation of Sobel, Prewitt, and Canny edge detection

8. **Morphological Operations**
   - Dilation and erosion
   - Opening and closing

9. **Transformations**
   - Rotate, scale, flip, and crop images

---

## 📁 Project Structure

    /image-processing-python

    ├── /01_image_io # Reading/writing images
    ├── /02_pixel_operations # Grayscale, invert, brightness, contrast
    ├── /03_convolution_filters # Blur, sharpen, edge detection
    ├── /04_histogram # Histogram calculation and equalization
    ├── /05_noise_and_filtering # Noise injection and removal
    ├── /06_thresholding # Thresholding techniques
    ├── /07_edge_detection # Manual edge detection implementations
    ├── /08_morphology # Morphological ops
    └── /09_transformations # Rotate, flip, crop

Each folder includes:
- Python source files (`.py`)
- Sample input images
- Output image samples
- Jupyter notebooks (optional) for step-by-step exploration

---

## 🛠 Requirements

- **Python 3.7+**
- **Recommended Libraries:**
  - `numpy`
  - `Pillow`
  - `matplotlib` *(optional, for visualization)*

You can install dependencies using:

```
pip install -r requirements.txt
```

``` 1- To Create/Run Python Environment here using conda
    conda create -n KNCVU python=3.11
    
    conda activate KNCVU
    
    2- To install OpenCV
    3-Perform Read/Write on images using openCV
```
