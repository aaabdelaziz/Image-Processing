# 🖼️ Image Processing in Python – From Ground Up

This repository provides Python implementations of foundational image processing techniques, adapted from the **"Image Processing From Ground Up™ in C"** Udemy course.

All operations are implemented in **pure Python**, using only minimal external libraries (e.g., NumPy, Matplotlib, OpenCV) to emphasize **educational value** and **core understanding**.

---

## 🎓 Course Reference

- **Course Title:** Image Processing From Ground Up™ in C  
- **Platform:** Udemy  
- **Course Link:** [https://www.udemy.com/course/image-processing-from-ground-uptm-in-c](https://www.udemy.com/course/image-processing-from-ground-uptm-in-c)  
- **Instructor:** *(You can add this if desired)*

---

## 🧠 Topics Covered

This Python version mirrors the structure and logic of the original course, covering:

1. **Image File Basics**
   - Reading and writing BMP, PNG, JPEG using Pillow/OpenCV
   - Exploring raw pixel data via NumPy

2. **Pixel-Level Operations**
   - Grayscale conversion
   - Image inversion
   - Brightness and contrast adjustment

3. **Convolution Filters**
   - Box blur, Gaussian blur
   - Sharpening and edge detection (e.g., Sobel, Prewitt)

4. **Histogram Processing**
   - Histogram generation
   - Histogram equalization for contrast enhancement

5. **Noise and Filtering**
   - Gaussian and salt-and-pepper noise addition
   - Mean and median filtering

6. **Thresholding**
   - Global and adaptive thresholding (mean, Gaussian)

7. **Edge Detection**
   - Manual implementations: Sobel, Prewitt, Canny

8. **Morphological Operations**
   - Erosion and dilation
   - Opening and closing

9. **Geometric Transformations**
   - Image rotation, flipping, scaling, cropping

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

---

## ⚙️ Setup & Installation

### 1. Create a Python environment (via Conda)

```bash
conda create -n imageproc python=3.11
conda activate imageproc
```

### 2. Install required libraries

```bash
pip install -r requirements.txt
```

Or manually:

```bash
pip install numpy matplotlib pillow opencv-python
```

---

## ▶️ Usage

Each Jupyter notebook (`.ipynb`) can be run independently. You can use:

```bash
jupyter notebook
```

Or open the notebooks in VS Code with the Jupyter extension.

The `.py` scripts (e.g., for video I/O) can be executed using:

```bash
python 2-VideoDisplay.py
```

---

## 🧪 Educational Focus

This project emphasizes **understanding the math and logic** behind image processing tasks, making it ideal for:

- Students learning image processing fundamentals
- Engineers transitioning from C to Python
- Educators building visual demos
