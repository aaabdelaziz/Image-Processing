# Install from terminal  first these packages, then run the python file
# pip install opencv-python
# pip install ipykernel 

# Import for OpenCV
import cv2 

# Read the original Image
image = cv2.imread("./mountain.jpg")

# Check if the image is loaded
if image is None:
    print(" Error: Can't load the image")
else:
    print("Image Loaded Successfully.")

# Display the image
cv2.imshow("Image Window", image)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Write to the image
image_new = image + 30 
cv2.imwrite("./output.jpg", image_new)

# Display the image
cv2.imshow("Modified Image", image_new)

# Wait for a key press
cv2.waitKey(0)
cv2.destroyAllWindows()