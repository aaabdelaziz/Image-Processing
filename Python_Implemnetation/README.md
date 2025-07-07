# Image Processing in Python – From Ground Up

This repository contains Python implementations of fundamental image processing techniques, inspired by and adapted from the **"Image Processing From Ground Up™ in C"** Udemy course. I'm implementing what I have learned time by time. Note that It's not complete yet.

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

```
📁 Python_Implementation
├── 📁 images                             # Sample input/output images
├── 1-ImageCreate.ipynb                  # Creating images using NumPy arrays
├── 1-ImageOperations.ipynb              # Grayscale, inversion, brightness, contrast
├── 2-VideoDisplay.py                    # Displaying videos with OpenCV
├── 3-VideoReadWrite.py                  # Reading and writing video files
├── 4-ColorThresholding.ipynb            # Global and adaptive thresholding
├── 5-ImageResizing.ipynb                # Image scaling and resizing
├── 6-ImageFlippingRotatingCropping.ipynb# Flip, rotate, crop images
├── 7-CreatingShapes.ipynb               # Drawing shapes on images
├── 8-AffineTransformations.ipynb        # Translation, rotation, scaling using matrices
├── 9-ImageFilters.ipynb                 # Sharpening and smoothing filters
├── 10-ImageBlurring.ipynb               # Mean, Gaussian, and median blurring
├── 11-EdgeDetection.ipynb               # Edge detection techniques
├── 12-Histogram.ipynb                   # Plotting histograms
├── 13-HistogramEqualization.ipynb       # Contrast enhancement
├── mountain.mp4                         # Sample video file
├── output.jpg                           # Example output image
├── README.md                            # Project documentation
├── requirements.txt                     # Python dependencies
├── .gitignore                           # Git ignore rules
└── LICENSE                              # License information
```

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
