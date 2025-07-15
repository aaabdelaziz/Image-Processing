
# Import for OpenCV
import cv2

# This will control the video speed (time between frames)
frame_dalay = 1000   # ms

# Load the video from video capture Object
video = cv2.VideoCapture("./mountain.mp4")

# Display the video
while True:
    # if the video frames are loaded successfully and captured, the ret will be true otherwise ret will be false 
    ret, frame = video.read()
    # ret will be false if video not successfully loaded
    if not ret:
        break 

    # if loaded successfully, show the video
    cv2.imshow("Video Frame", frame)
    # while in loop, if I pressed a key == w, break the loop
    # wait 1 msec between every frame while looping on video frames, and check if pressed also key 'w'
    if cv2.waitKey(frame_dalay) & 0xFF == ord('w'):
        break 

# after break, release the video and close the window
video.release()
cv2.destroyAllWindows()
